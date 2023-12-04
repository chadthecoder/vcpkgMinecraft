cmake_minimum_required(VERSION 3.16)

project(HelloWorld)

find_package(glfw3 3.3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_executable(HelloWorld src/main.cpp)

target_link_libraries(HelloWorld PRIVATE glfw glad::glad fmt::fmt)