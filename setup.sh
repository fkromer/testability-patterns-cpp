#!/bin/sh
sudo apt-get install cmake
sudo apt-get install build-essentials  # g++
# gtest
sudo apt-get install libgtest-dev
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
GTEST_ROOT="/usr/src/gtest"
export GTEST_ROOT
