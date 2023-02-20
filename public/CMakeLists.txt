cmake_minimum_required (VERSION 3.16.3)

set(CXX_STANDARD_REQUIRED 17)

project("Thunder" VERSION 1.0)


add_library(${PROJECT_NAME} INTERFACE )

target_include_directories(${PROJECT_NAME} NTERFACE ${PROJECT_SOURCE_DIR}/include)
