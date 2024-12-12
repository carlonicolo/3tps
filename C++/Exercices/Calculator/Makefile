# Compiler and flags
CC = g++
CFLAGS = -Wall -Wextra -g

# Target executable
TARGET = calculator

# Source files and object files
SRC = main.cpp sum.cpp
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

# Compile .c files into .o files
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets
.PHONY: all clean
