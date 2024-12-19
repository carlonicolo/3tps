# Root Makefile

CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -pthread
SRC_DIR = src
BUILD_DIR = build

# Source files
SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/math_functions.cpp

# Object files
OBJS = $(BUILD_DIR)/main.o $(BUILD_DIR)/math_functions.o

# Target executable
TARGET = CplusTest

# Default target
all: $(BUILD_DIR) $(TARGET)

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Link object files into executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)
	rm -f $(TARGET)

# Build the tests
tests:
	$(MAKE) -C tests

.PHONY: all clean tests
