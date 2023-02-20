cmake_minimum_required (VERSION 3.10)

project(SampleClient VERSION 1.0)


add_executable(${PROJECT_NAME} main.cpp sample-client.cpp)


include_directories(${PROJECT_NAME}
  "../public/include"
  "../messaging/include"
)

# find zmq lib logic
find_library(myZmq NAMES zmq zmq3 ZMQ ZMQ3 DOC "zeromq library")
if(${myZmq} STREQUAL "myZmq-NOTFOUND")
  message(FATAL_ERROR "libzmq3-dev not found")
else()
  message(STATUS "libzmq3-dev found as ${myZmq}")
endif()

target_link_directories(${PROJECT_NAME}
  PUBLIC ../messaging/build/
)

target_link_libraries(${PROJECT_NAME} 
  PUBLIC ${myZmq} 
  PUBLIC packetMgr
)