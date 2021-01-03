.PHONY: clean all test run runtest

BIN_DIR = ./bin
BUILD_DIR = ./build
SRC_DIR = ./src
SRC_DIR_ADD = ./src/sources
TEST_DIR = ./test
FLAGS =-Wall -std=c++11

all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(BUILD_DIR)/main.o $(BUILD_DIR)/game.o $(BUILD_DIR)/message.o $(BUILD_DIR)/number.o
	g++ $(FLAGS) $(BUILD_DIR)/main.o $(BUILD_DIR)/game.o $(BUILD_DIR)/message.o $(BUILD_DIR)/number.o -o $(BIN_DIR)/main

$(BUILD_DIR)/main.o:
	g++ $(FLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/game.o:
	g++ $(FLAGS) -c $(SRC_DIR_ADD)/game.cpp -o $(BUILD_DIR)/game.o

$(BUILD_DIR)/message.o:
	g++ $(FLAGS) -c $(SRC_DIR_ADD)/message.cpp -o $(BUILD_DIR)/message.o

$(BUILD_DIR)/number.o:
	g++ $(FLAGS) -c $(SRC_DIR_ADD)/number.cpp -o $(BUILD_DIR)/number.o


test: $(BUILD_DIR)/number.o $(BUILD_DIR)/test.o 
	g++ $(FLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/number.o $(BUILD_DIR)/message.o -o $(BIN_DIR)/test

$(BUILD_DIR)/test.o:
	g++ $(FLAGS) -c $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o
	

run: 
	./bin/main

runtest:
	./bin/test

clean:
	rm -f build/*.o
	rm -f bin/main
