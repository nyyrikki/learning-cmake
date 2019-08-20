

add_subdirectory(proto)

add_library(say-hello hello.cpp hello.hpp)

target_link_libraries(say-hello proto ${PROTOBUF_LIBRARY})
target_include_directories(say-hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
 