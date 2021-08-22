build="build"

cargo run
cmake -H. -B$build 
cmake --build $build
./build/test/json-schema-to-c_test