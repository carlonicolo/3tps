# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = hello somma

# Default target (build all programs)
all: $(TARGETS)

# Rule to build prog3
hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

somma: somma.c
	$(CC) $(CFLAGS) -o somma somma.c

# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif
