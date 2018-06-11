#pragma once

#include <memory>
#include <stack> 

template <typename Key, typename Value=Key> // When value hasn't been passed, use Key
class AVLTree {
public:
  class Node {
  private:
    Key key_;
    Value value_;
    int height_;
    std::unique_ptr<Node> left_, right_;
    // Method default, from the begin
    Node(const Key& key) : key_(key), height_(0) {}
    // Overloading
    Node(const Key& key, const Value& value) : key_(key), value_(value), height_(0) {}

  public:
    Node *left() {
      return left_.get();
    }
    Node *right() {
      return right_.get();
    }
    const Key& key() const {
      return key_;
    }
    const Value& value() const {
      return value_;
    }
    const int height() const {
      return height_;
    }

    friend class AVLTree<Key, Value>;
  };

private:
  std::unique_ptr<Node> root_;
  int size_;
  std::stack<Node*> parents;
  std::stack<std::unique_ptr<Node>*> subroots;

  void left_right(std::unique_ptr<Node>* parent_ptr)
  {
      // Left right case  (then Left Left)
      // { subtree B, Node 4, Node 3}
      Node* hang1[3];
      hang1[0] = (*parent_ptr)->left_->right_->left_.release(); // Subtree B
      hang1[1] = (*parent_ptr)->left_->right_.release(); // Node 4     
      hang1[2] = (*parent_ptr)->left_.release(); // Node 3
      
      (*parent_ptr)->left_.reset(hang1[1]);
      (*parent_ptr)->left_->left_.reset(hang1[2]);
      (*parent_ptr)->left_->left_->right_.reset(hang1[0]);
        
  }

  void left_left(std::unique_ptr<Node>* parent_ptr)
  {    
      // {subtree C, Node 4, Node 5}
      Node* hang2[3];
      hang2[0] = (*parent_ptr)->left_->right_.release(); // subtree C  
      hang2[1] = (*parent_ptr)->left_.release(); // Node 4
      hang2[2] = parent_ptr->release(); // Node 5
      // To Balance Step
      parent_ptr->reset(hang2[1]);
      (*parent_ptr)->right_.reset(hang2[2]);
      (*parent_ptr)->right_->left_.reset(hang2[0]);
      
  }

  void right_left(std::unique_ptr<Node>* parent_ptr)
  {
    // {Subtree C, Node 4, Node 5}
      Node* hang1[3];
      hang1[0] = (*parent_ptr)->right_->left_->right_.release(); // Subree C
      hang1[1] = (*parent_ptr)->right_->left_.release(); // Node 4
      hang1[2] = (*parent_ptr)->right_.release(); // Node 5
      // Right left Step
      (*parent_ptr)->right_.reset(hang1[1]);
      (*parent_ptr)->right_->right_.reset(hang1[2]);
      (*parent_ptr)->right_->right_->left_.reset(hang1[0]);
      
  }

  void right_right(std::unique_ptr<Node>* parent_ptr)
  {
    // {subtree B, Node 4, Node 3}   
      Node* hang2[3];
      hang2[0] = (*parent_ptr)->right_->left_.release(); // subtree B
      hang2[1] = (*parent_ptr)->right_.release(); // Node 4
      hang2[2] = parent_ptr->release(); // Node 3

      parent_ptr->reset(hang2[1]);
      (*parent_ptr)->left_.reset(hang2[2]);
      (*parent_ptr)->left_->right_.reset(hang2[0]);

  }

  void update_height(std::unique_ptr<Node>* parent_ptr, std::stack<std::unique_ptr<Node>*> subroots)
  {
      int left_left = -1;
      int left_right = -1;
      int right_left = -1;
      int right_right = -1;

      if((*parent_ptr)->left_->left())
      {
        left_left = (*parent_ptr)->left_->left_->height_ ;
      }
      if((*parent_ptr)->left_->right())
      {
        left_right = (*parent_ptr)->left_->right_->height_;
      }
      (*parent_ptr)->left_->height_ = (left_left > left_right) ? (left_left + 1) : (left_right + 1);
    
      if((*parent_ptr)->right_->left())
      {
        right_left = (*parent_ptr)->right_->left_->height_ ;
      }
      if((*parent_ptr)->right_->right())
      {
        right_right = (*parent_ptr)->right_->right_->height_ ;
      }
      (*parent_ptr)->right_->height_ = (right_left > right_right) ? (right_left + 1) : (right_right + 1);   
    
      (*parent_ptr)->height_ = ((*parent_ptr)->left_->height_ > (*parent_ptr)->right_->height_) ? ((*parent_ptr)->left_->height_ + 1) : ((*parent_ptr)->right_->height_ + 1);
    
    // parents of subroot
    while(!subroots.empty())
    {
      if(((*subroots.top())->right())&&((*subroots.top())->left()))
      {
        (*subroots.top())->height_ = (*subroots.top())->left()->height_ > (*subroots.top())->right()->height_ ? ((*subroots.top())->left()->height_ + 1): ((*subroots.top())->right()->height_ + 1) ;
      }
      else if((*subroots.top())->right())
      {
        (*subroots.top())->height_ = (*subroots.top())->right()->height_ + 1;
      }
      else if((*subroots.top())->left())
      {
        (*subroots.top())->height_ = (*subroots.top())->left()->height_ + 1;
      }
      // next parent
      subroots.pop();
    }

  }

  //
  void rebalance(std::unique_ptr<Node>* parent_ptr, std::stack<std::unique_ptr<Node>*> stack)
  {
    int left = -1;
    int right = -1; 
    if((*parent_ptr)->left())
    {
      left = (*parent_ptr)->left()->height_;
    }
    if((*parent_ptr)->right())
    {
      right = (*parent_ptr)->right()->height_;
    }
    int diff = left - right;
    
    if(diff > 1)
    {
      int left_ = -1;
      int right_ = -1;
      if((*parent_ptr)->left()->left())
      {
        left_ = (*parent_ptr)->left()->left()->height_;
      }
      if((*parent_ptr)->left()->right())
      {
        right_ = (*parent_ptr)->left()->right()->height_;
      }
      int diff_ = left_ - right_;
      if(diff_ < 0)
      {
        left_right(parent_ptr);
      }
      left_left(parent_ptr);
      std::stack<std::unique_ptr<Node>*> back_left = stack;
      std::stack<std::unique_ptr<Node>*> back_right = stack;
      std::stack<std::unique_ptr<Node>*> pre_subroots = stack;
      update_height(parent_ptr, pre_subroots);
      back_left.push(parent_ptr);
      back_right.push(parent_ptr);
      if((*parent_ptr)->left())
      {
        rebalance(&((*parent_ptr)->left_), back_left);
      }
      // the ptr to uptr may have changed after rebalance
      // bool and ! will call get(), but not up itself
      if(bool(*parent_ptr))
      {
        if((*parent_ptr)->right())
        {
          rebalance(&((*parent_ptr)->right_), back_right);
        }
      }
    }
    else if(diff < -1)
    {
      int left_ = -1;
      int right_ = -1;
      if((*parent_ptr)->right_->left())
      {
        left_ = (*parent_ptr)->right_->left()->height_;
      }
      if((*parent_ptr)->right_->right())
      {
        right_ = (*parent_ptr)->right_->right()->height_;
      }
      int diff_ = left_ - right_;
      if(diff_ > 0)
      {
        right_left(parent_ptr);
      }
      right_right(parent_ptr);
      std::stack<std::unique_ptr<Node>*> back_left = stack;
      std::stack<std::unique_ptr<Node>*> back_right = stack;
      std::stack<std::unique_ptr<Node>*> pre_subroots = stack;
      update_height(parent_ptr, pre_subroots);
      back_left.push(parent_ptr);
      back_right.push(parent_ptr);
      if((*parent_ptr)->left())
      {
        rebalance(&((*parent_ptr)->left_), back_left);
      }
      // the ptr to uptr may have changed after rebalance
      
      if(bool(*parent_ptr))
      {
        if((*parent_ptr)->right())
        {
          rebalance(&((*parent_ptr)->right_), back_right);
        }
      }
    }
         
    if(!stack.empty())
    {
      std::unique_ptr<Node>* subroot = stack.top();
      stack.pop();
      rebalance(subroot, stack);
    }    
  }



public:
  AVLTree() : size_(0) {}
  Value& operator[](const Key& key) {
    //std::cout<<"avl["<<key<<"]"<<std::endl;
    // Try to find the node with the value we want:
    std::unique_ptr<Node> * cur;
    for (cur = &root_;
         cur->get() != nullptr;
         cur = key < (*cur)->key_ ? &(*cur)->left_ : &(*cur)->right_) 
    {
      parents.push(cur->get());
      subroots.push(cur);
      if (key == (*cur)->key_) {
        std::stack<Node*> clear_p;
        std::stack<std::unique_ptr<Node>*> clear_r;
        parents.swap(clear_p);
        subroots.swap(clear_r);
        return (*cur)->value_;
      }
    }
    // If we didn't find it, insert a new node with that key:
    // (This is the same behaviour as an std::map.)
    cur->reset(new Node(key));

    // update height of the entire tree
    while(!parents.empty())
    {
      // update parents' height
      if((parents.top()->right())&&(parents.top()->left()))
      {
        parents.top()->height_ = parents.top()->left()->height_ > parents.top()->right()->height_ ? (parents.top()->left()->height_ + 1): (parents.top()->right()->height_ + 1) ;
      }
      else if(parents.top()->right())
      {
        parents.top()->height_ = parents.top()->right()->height_ + 1;
      }
      else if(parents.top()->left())
      {
        parents.top()->height_ = parents.top()->left()->height_ + 1;
      }
      // next parent
      parents.pop();
    }
    // rebalance
    if(subroots.size() > 1)
    {
      subroots.pop();
      std::unique_ptr<Node>* subroot  = subroots.top();
      subroots.pop();
      rebalance(subroot, subroots);
    }
    std::stack<std::unique_ptr<Node>*> clear_r;
    subroots.swap(clear_r);

    ++size_;

    std::unique_ptr<Node> *curr;
    for (curr = &root_;
         (*curr)->key_ != key;
         curr = key < (*curr)->key_ ? &(*curr)->left_ : &(*curr)->right_){} 

    return (*curr)->value_;
  }

  int size() {
    return size_;
  }

  Node *root() {
    return root_.get();
  }
};
