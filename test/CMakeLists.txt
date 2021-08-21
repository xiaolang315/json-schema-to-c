CPMAddPackage(
  NAME cctest
  GITHUB_REPOSITORY ccup/cctest
  GIT_TAG master
  OPTIONS "CCTEST_RUN_TESTS OFF" 
)
set(test_name ${name}_test)
add_executable(${test_name} testcase.cpp)
target_link_libraries(${test_name} PRIVATE demo cctest cctest_main)
