# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = ex1 ex2

# Default target (build all programs)
all: $(TARGETS)

# Rule to build ex1
ex1: ex1.c
	$(CC) $(CFLAGS) -o ex1 ex1.c

ex2: ex2.c
	$(CC) $(CFLAGS) -o ex2 ex2.c

# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif
