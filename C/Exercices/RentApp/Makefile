# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = main

# Default target (build all programs)
all: $(TARGETS)

# Rule to build prog3
main: main.c
	$(CC) $(CFLAGS) -o main main.c

# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif
