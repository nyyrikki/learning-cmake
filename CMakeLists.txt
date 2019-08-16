# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# Project's name
project(hello)

add_subdirectory(say-hello)
add_subdirectory(executable)

function(do_cmake_good)
    foreach(arg IN LISTS ARGN)
        message("You called the messages with ${arg}")
    endforeach()
endfunction()

do_cmake_good(Something is missing in our world !)