# Tests Makefile

CXX = g++
CXXFLAGS = -std=c++17 -I../include -pthread
SRC_DIR = ../src
BUILD_DIR = ../build
TEST_SRC = test_math_functions.cpp
TEST_OBJS = $(BUILD_DIR)/math_functions.o

# Path to Google Test (update this path if needed)
GTEST_DIR = ../googletest/googletest
GTEST_LIB_DIR = ../googletest/build/lib

# Include Google Test headers
CXXFLAGS += -I$(GTEST_DIR)/include

# Link Google Test libraries
LDFLAGS = -L$(GTEST_LIB_DIR) -lgtest -lgtest_main -pthread

# Target executable
TEST_TARGET = test_runner

# Default target
all: $(BUILD_DIR) $(TEST_TARGET)

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build math_functions.o if not already built
$(BUILD_DIR)/math_functions.o: $(SRC_DIR)/math_functions.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile test executable
$(TEST_TARGET): $(TEST_SRC) $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

# Run the tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# Clean test artifacts
clean:
	rm -f $(TEST_TARGET)

.PHONY: all clean test
