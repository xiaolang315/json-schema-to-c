build="build"

rm -rf $build
cmake -H. -B$build 
cmake --build $build