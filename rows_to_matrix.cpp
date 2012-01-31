#include "rows_to_matrix.h"

#include <cassert>
#include <cstdio>

#include "max_size.h"
#include "min_size.h"

template <class Row, class Mat>
IGL_INLINE bool igl::rows_to_matrix(const std::vector<Row> & V,Mat & M)
{
  // number of columns
  int m = V.size();
  if(m == 0)
  {
    fprintf(stderr,"Error: rows_to_matrix() list is empty()\n");
    return false;
  }
  // number of rows
  int n = igl::min_size(V);
  if(n != igl::max_size(V))
  {
    fprintf(stderr,"Error: rows_to_matrix()"
      " list elements are not all the same size\n");
    return false;
  }
  assert(n != -1);
  // Resize output
  M.resize(m,n);

  // Loop over rows
  int i = 0;
  typename std::vector<Row>::const_iterator iter = V.begin();
  while(iter != V.end())
  {
    M.row(i) = V[i];
    // increment index and iterator
    i++;
    iter++;
  }

  return true;
}

#ifndef IGL_HEADER_ONLY
// Explicit template specialization
#endif
