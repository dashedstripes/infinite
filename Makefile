FILES=$(shell find src -type f -name "*.cpp")

compile:
	g++ -std=c++11 -Isrc -lSDL2 main.cpp $(FILES)