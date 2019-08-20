find_package(Protobuf 3.6.1 REQUIRED)

include_directories(${PROTOBUF_INCLUDE_DIR})
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS Person.proto)

# Print path to generated files
message ("PROTO_SRCS = ${PROTO_SRCS}")
message ("PROTO_HDRS = ${PROTO_HDRS}")

add_library(proto ${PROTO_HDRS} ${PROTO_SRCS})

target_include_directories(proto PUBLIC ${PROTOBUF_INCLUDE_DIRS} ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(proto PUBLIC ${PROTOBUF_LIBRARIES})