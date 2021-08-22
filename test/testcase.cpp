#include "cctest/cctest.h"
#include <string>
#include "demo.h"
#include <string_view>

using namespace cctest;

namespace {

const std::string str = R"(
    {
        "name":"zc",
        "value":1
    }
    )";
FIXTURE(SimpleTest) {
  TEST("add") {
      All all = parser_print(str.c_str());
      ASSERT_TRUE(std::string_view("zc") == std::string_view(all.name));
      ASSERT_EQ(1, all.value);
  }
};

} // namespace