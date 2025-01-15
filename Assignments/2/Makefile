# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = test1 test2 test3

# Default target (build all programs)
all: $(TARGETS)

test1: test1.c
	$(CC) $(CFLAGS) -o test1 test1.c

test2: test2.c
	$(CC) $(CFLAGS) -o test2 test2.c

test3: test3.c
	$(CC) $(CFLAGS) -o test3 test3.c

# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif