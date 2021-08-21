#include "cctest/cctest.h"
#include <string>
#include "demo.h"

using namespace cctest;

namespace {

FIXTURE(SimpleTest) {
  TEST("add") {
      std::string str = R"({"name":"zc"})";
      ASSERT_EQ(0, parser_print(str.c_str()));

  }
};

} // namespace