#include "mylib/lib.hpp"

#include <boost/ut.hpp>

int main() {                  // NOLINT(bugprone-exception-escape)
  using namespace boost::ut;  // NOLINT(*using-namespace*)

  "lib"_test = []() { expect(some_fun() == 0); };
}