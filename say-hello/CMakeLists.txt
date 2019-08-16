
add_library(
    say-hello
    hello.cpp
    hello.hpp
)

target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
