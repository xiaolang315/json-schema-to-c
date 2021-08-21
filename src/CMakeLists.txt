CPMAddPackage(
  NAME cjson
  GITHUB_REPOSITORY DaveGamble/cJSON
  GIT_TAG master
  OPTIONS 
  ENABLE_CJSON_TEST off
)

set(src_name demo)

add_library(${src_name} demo.c)
target_include_directories(${src_name} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../build/_deps/cjson-src/)
target_include_directories(${src_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_directories(${src_name}  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../build/_deps/cjson-build/)
target_link_libraries(${src_name}  PRIVATE cjson)