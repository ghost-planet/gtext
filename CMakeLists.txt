cmake_minimum_required(VERSION 3.26)

project(gtext
    VERSION 0.1.0
    LANGUAGES CXX
    DESCRIPTION "Layout text."
)

cmake_policy(SET CMP0114 NEW)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Global flag to cause add_library() to create shared libraries if on.
option(BUILD_SHARED_LIBS "Build using shared libraries" OFF)
option(GTEXT_BUILD_TESTS "Build tests" OFF)

# control where the static and shared libraries are built so that on windows
# we don't need to tinker with the path to run the executable
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)

if(GTEXT_BUILD_TESTS)
    # Enable testing
    enable_testing()
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/tests)
endif(GTEXT_BUILD_TESTS)
