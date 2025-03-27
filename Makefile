BUILD_DIR = build
SOURCE_DIR = src
TEST_DIR = tests
CFLAGS = -g -Wall -Wextra -Wpedantic  -I$(SOURCE_DIR)

all: test

test: $(BUILD_DIR)/factors.o $(BUILD_DIR)/test.o
	clang++ -o test $(CFLAGS) $(BUILD_DIR)/factors.o $(BUILD_DIR)/test.o -lgtest_main -lgtest -lpthread 

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp $(SOURCE_DIR)/factors.cpp
	clang++ -c $(CFLAGS) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o 

$(BUILD_DIR)/factors.o: $(SOURCE_DIR)/factors.cpp $(SOURCE_DIR)/factors.h
	clang++ -c $(CFLAGS) $(SOURCE_DIR)/factors.cpp -o $(BUILD_DIR)/factors.o

clean:
	rm -f $(BUILD_DIR)/*.o

.PHONY: all clean