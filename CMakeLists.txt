cmake_minimum_required(VERSION 3.5)

project(container.homework)

add_executable(container_array container_array.cpp)
set_target_properties(container_array PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(container_list container_list.cpp)
set_target_properties(container_list PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)