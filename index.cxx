#include "index.hxx"
#include "deps/datcxx/flat-tree/index.hxx"

namespace Hyper {
  namespace Core {
    size_t getIndex () {
      return FlatTree::index(0, 0);
    }
  } // namespace Core
} // namespace Hyper
