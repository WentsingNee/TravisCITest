project(TravisCITest CXX)
cmake_minimum_required(VERSION 3.10)
include_directories(include/Kerbal/include)
add_executable(travis_test
	./main.cpp
)
