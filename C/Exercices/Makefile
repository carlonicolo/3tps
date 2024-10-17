# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = array cicli operatore_ternario

# Default target (build all programs)
all: $(TARGETS)

# Rule to build prog1
array: array.c
	$(CC) $(CFLAGS) -o array array.c

# Rule to build prog2
cicli: cicli.c
	$(CC) $(CFLAGS) -o cicli cicli.c

# Rule to build prog3
operatore_ternario: operatore_ternario.c
	$(CC) $(CFLAGS) -o operatore_ternario operatore_ternario.c

# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif
