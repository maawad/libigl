#ifndef IGL_IS_SYMMETRIC_H
#define IGL_IS_SYMMETRIC_H
#include "igl_inline.h"
#define EIGEN_YES_I_KNOW_SPARSE_MODULE_IS_NOT_STABLE_YET
#include <Eigen/Sparse>
namespace igl
{
  // Returns true if the given matrix is symmetric
  // Inputs:
  //   A  m by m matrix
  // Returns true if the matrix is square and symmetric
  template <typename T>
  IGL_INLINE bool is_symmetric(const Eigen::SparseMatrix<T>& A);
}

#ifdef IGL_HEADER_ONLY
#  include "is_symmetric.cpp"
#endif

#endif
