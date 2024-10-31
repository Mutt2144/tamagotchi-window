CXX=g++
SRC=src/main.cpp
BUILD=build/game
LIBS=-lSDL2

all:
	clear
	$(CXX) $(SRC) -o $(BUILD) $(LIBS)