# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I C:/msys64/mingw64/include
LDFLAGS = -L C:/msys64/mingw64/lib -lcheck -lpthread

# Targets
TARGET = test_math_utils
SRC = math_utils.c
TEST_SRC = test_math_utils.c

# Default target
all: $(TARGET)

# Build test executable
$(TARGET): $(SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) $(SRC) $(TEST_SRC) -o $(TARGET) $(LDFLAGS)

# Clean build files
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean
