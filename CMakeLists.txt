cmake_minimum_required(VERSION 3.16)
project(Manual_Shape)

find_program(JULIA_EXECUTABLE julia REQUIRED)

execute_process(
    COMMAND "${JULIA_EXECUTABLE}" --startup-file=no -e "using CxxWrap; print(CxxWrap.prefix_path())"
    OUTPUT_VARIABLE CxxWrap_PREFIX
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
list(APPEND CMAKE_PREFIX_PATH "${CxxWrap_PREFIX}")

find_package(JlCxx REQUIRED)

add_library(shape_lib SHARED Shape_wrapper.cpp)
target_link_libraries(shape_lib PUBLIC JlCxx::cxxwrap_julia)
