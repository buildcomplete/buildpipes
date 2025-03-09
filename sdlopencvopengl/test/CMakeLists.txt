cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 11)

# Find SDL3 package
find_package(SDL3 REQUIRED CONFIG REQUIRED COMPONENTS SDL3-shared)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Add the executable
add_executable(hello_world main.cpp)

# Link the SDL3 and OpenCV libraries
target_link_libraries(hello_world SDL3::SDL3 ${OpenCV_LIBS})
