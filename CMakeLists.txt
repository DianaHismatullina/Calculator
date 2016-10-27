cmake_minimum_required(VERSION 2.8)

project (Calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++15")

set(HEADERS ${PROJECT_SOURCE_DIR}/Include/calculator.hpp)
set(SOURCES ${PROJECT_SOURCE_DIR}/Sources/calculator.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/Include)

add_library (${PROJECT_NAME} STATIC ${SOURCES})

add_subdirectory(Tests)
add_subdirectory(Example)
