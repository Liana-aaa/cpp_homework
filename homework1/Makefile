BUILD_DIR = build
SOURCE_DIR = src
CFLAGS = -g -Wall -Wextra -Wpedantic

all: main

main: $(BUILD_DIR)/primeFactorize.o  $(BUILD_DIR)/test.o
		clang++ -o main $(CFLAGS) $(BUILD_DIR)/primeFactorize.o $(BUILD_DIR)/test.o -lgtest_main -lgtest -lpthread

$(BUILD_DIR)/test.o: $(SOURCE_DIR)/test.cpp $(SOURCE_DIR)/primeFactorize.cpp
		clang++ -c $(CFLAGS)  $(SOURCE_DIR)/test.cpp -o $(BUILD_DIR)/test.o 

$(BUILD_DIR)/primeFactorize.o: $(SOURCE_DIR)/primeFactorize.cpp $(SOURCE_DIR)/functions.h
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/primeFactorize.cpp -o $(BUILD_DIR)/primeFactorize.o


clean:
		rm $(BUILD_DIR)/*.o

.PHONY:all clean