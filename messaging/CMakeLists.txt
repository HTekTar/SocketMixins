cmake_minimum_required(VERSION 3.10)

project(packetMgr)

add_library(${PROJECT_NAME} SHARED)

target_sources(${PROJECT_NAME}
  PRIVATE
    src/packet.pb.cc 
    src/sample-data.pb.cc
    src/error.pb.cc
)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    # ${Protobuf_INCLUDE_DIRS}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    ${Protobuf_LIBRARIES}
    # /lib/x86_64-linux-gnu/libprotobuf.so.17
)

# install(TARGETS packetMgr DESTINATION lib)
# install(FILES packet.pb.h packet.h sample-data.pb.h DESTINATION include)