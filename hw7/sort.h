// Foreign language based programming language? Esp prounciation based like Mandrain? Like C based Python?
// programming is not in NL, it's in math, evertthing is just a var name. Typing english is way faster than mandrain.

#pragma once

#include <algorithm>
#include <vector>
#include <iterator>

namespace nonstd {

template <typename Comparable>
// must be O(n * log(n)) on average
// may not maintain any state between calls to nonstd::sort
// or rely on any global state that would hint to the category of input
// Eg:  may not keep track of which categories you've seen
// but you may use pseudo random number generators like rand()
// even though it relies on global state
/* different "categories
1. All unique elements
2. Not unique elements: counting sort will be O(n) if mostly ununique, quick3 ... also really good
3. Mostly sorted elements: Insertion sort 
4. Randomly shuffled elements: good for quicksort(bad in 3)
5. Reverse-ordered elements: shell sort (and heap sort?)
6. Simplest Code(Don't care)
*/
// Goal: uses fewer comparisons and move/copy operations


void merge(std::vector<Comparable>& first, std::vector<Comparable>& last,  std::vector<Comparable>& result)
{


  int i = 0;
  int j = 0;
  for( int k = 0; k < first.size() + last.size(); k++ )
  {
    if( (i < first.size())&&(j < last.size()))
    {
      if(first[i] > last[j])
      {
        result[k] = last[j];
        j++;
      }
      else
      {
        result[k] = first[i];
        i++;
      }
    }
    else if(i < first.size())
    {
      result[k] = first[i];
      i++;
    }
    else
    {
      result[k] = last[j];
      j++;
    }
  }
}

template <typename Comparable>
void sort(std::vector<Comparable>& comparables) {
  // TODO: Replace std::sort with my own algorithm...
  // No quick sort(3)
  // Try to use merge sort

  size_t n = comparables.size();
  if( n <= 1){return;}

  std::vector<Comparable> first(comparables.begin(), comparables.begin() + n/2);
  
  std::vector<Comparable> last(comparables.begin() + n/2, comparables.end());
  sort(first);
  sort(last);
  merge(first, last, comparables);
  

  
}

} // namespace nonstd
