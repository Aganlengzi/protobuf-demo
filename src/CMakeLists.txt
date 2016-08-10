cmake_minimum_required(VERSION 2.8)

INCLUDE_DIRECTORIES(../proto/person.pb.h)

FIND_LIBRARY(PROTOBUF_LIB NAMES protobuf PATHS "/usr/local/lib/")
MESSAGE(STATUS "Library path PROTOBUF_LIB is " ${PROTOBUF_LIB})

ADD_EXECUTABLE(write_person write_person.cpp ../proto/person.pb.cc)
ADD_EXECUTABLE(read_person read_person.cpp ../proto/person.pb.cc)

TARGET_LINK_LIBRARIES(write_person ${PROTOBUF_LIB})
TARGET_LINK_LIBRARIES(read_person ${PROTOBUF_LIB})

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
