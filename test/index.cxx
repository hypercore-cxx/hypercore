#include "../index.hxx"
#include "../deps/heapwolf/cxx-tap/index.hxx"

#include <iostream>
#include <sstream>

int main() {
  TAP::Test t;

  t.test("sanity", [](auto t) {
    t->ok(true, "true is true");
    t->end();
  });
}
