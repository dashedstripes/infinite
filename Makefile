CC=g++
CFLAGS=-std=c++11
INCLUDES=-Isrc
LIBS=-lSDL2
MAIN=main.cpp
FILES=$(shell find src -type f -name "*.cpp")

compile:
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBS) $(MAIN) $(FILES)