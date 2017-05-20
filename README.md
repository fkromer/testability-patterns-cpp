# testability-patterns-cpp
Testability pattern examples in C++

## Setup

install test build environment tools (Ubuntu)

    ./setup.sh

### NOTE

The approach to integrate gtest with the build environment (cmake) in this
repository is not the best approach with relation to continuous integration,
maintenance, etc. But it is the approach which keeps the CMakeLists.txt files as
"clean" as possible to allow focus on test related aspects (build commands,
directory structure, etc.).

If you are using another operating system than Ubuntu (e.g. Windows) you should
be fine if you build gtest from source like described in the gtest documentation
and add the location of the gtest libraries to the environment variable
GTEST_ROOT. The calls in the CMakeLists.txt files locate gtest
('find_package(GTest REQUIRED)') and its includes
('include_directories(${GTEST_INCLUDE_DIRS})').

## Usage

test build

    cd <subdirectory>
    cmake .
    make
    ./<executable>

## Build Environment

[CMake](https://cmake.org/)

install Cmake (Ubuntu)

    sudo apt-get install cmake

## Compiler

install g++ (Ubuntu)

    sudo apt-get install build-essentials

## Unit/Mock Test Framework

[Google Test](https://github.com/google/googletest)

install gtest sources (Ubuntu)

    sudo apt-get install libgtest-dev

build static libraries of gtest with CMake (Ubuntu)

    cd /usr/src/gtest
    sudo cmake CMakeLists.txt
    sudo make

set CMake environment variable to enable finding gtest

    GTEST_ROOT="/usr/src/gtest"
    export GTEST_ROOT

## Style Guide

[Google Style Guide](https://google.github.io/styleguide/cppguide.html)
