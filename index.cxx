#include "index.hxx"
#include "deps/datcxx/cxx-flat-tree/index.hxx"

namespace Hypercore {
  size_t getIndex () {
    return flatTree::index(0, 0);
  }
} // namespace Hypercore
