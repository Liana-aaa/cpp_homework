CXX = clang++
CXXFLAGS = -g -Wall -Wextra -Wpedantic -I$(SRC_DIR)

SRC_DIR = src
TEST_DIR = tests
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj

SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/src_%.o,$(SRC_FILES))
TEST_OBJ_FILES = $(patsubst $(TEST_DIR)/%.cpp,$(OBJ_DIR)/test_%.o,$(TEST_FILES))

$(info SRC_FILES = $(SRC_FILES))
$(info TEST_FILES = $(TEST_FILES))

TEST_EXEC = $(BUILD_DIR)/runTests

INCLUDES = -I$(SRC_DIR)
LIBS = -lgtest -lgtest_main -lpthread

all: $(TEST_EXEC)

$(OBJ_DIR) $(BUILD_DIR):
	mkdir -p $@

$(OBJ_DIR)/src_%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/test_%.o: $(TEST_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(TEST_EXEC): $(OBJ_FILES) $(TEST_OBJ_FILES) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LIBS)

test: $(TEST_EXEC)
	./$(TEST_EXEC)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean test