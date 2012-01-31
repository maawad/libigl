#include "reorder.h"

// This implementation is O(n), but also uses O(n) extra memory
template< class T >
IGL_INLINE void igl::reorder(
  const std::vector<T> & unordered,
  std::vector<size_t> const & index_map,
  std::vector<T> & ordered)
{
  // copy for the reorder according to index_map, because unsorted may also be
  // sorted
  std::vector<T> copy = unordered;
  ordered.resize(index_map.size());
  for(int i = 0; i<(int)index_map.size();i++)
  {
    ordered[i] = copy[index_map[i]];
  }
}

#ifndef IGL_HEADER_ONLY
// Explicit template specialization
#endif
