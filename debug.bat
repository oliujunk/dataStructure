if not exist build md build
cd build
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=DEBUG
make