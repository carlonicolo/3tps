# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = lab2 lab3 lab4 lab5_char

# Default target (build all programs)
all: $(TARGETS)

#lab1: lab1.c
#	$(CC) $(CFLAGS) -o lab1 lab1.c

lab2: lab2.c
	$(CC) $(CFLAGS) -o lab2 lab2.c

lab3: lab3.c
	$(CC) $(CFLAGS) -o lab3 lab3.c

lab4: lab4.c
	$(CC) $(CFLAGS) -o lab4 lab4.c

lab5: lab5_char.c
	$(CC) $(CFLAGS) -o lab5_char lab5_char.c


# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif