#include "index.hxx"
#include "deps/datcxx/flat-tree/index.hxx"

namespace Hypercore {
  size_t getIndex () {
    return flatTree::index(0, 0);
  }
} // namespace Hypercore
