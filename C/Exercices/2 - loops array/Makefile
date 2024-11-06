# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = array cicli operatore_ternario binary_conversion PrimaEsercitazione \
    shift tabellina_due input_v1 calcolatrice_v2 cicliArray

# Default target (build all programs)
all: $(TARGETS)

array: array.c
	$(CC) $(CFLAGS) -o array array.c

cicli: cicli.c
	$(CC) $(CFLAGS) -o cicli cicli.c

operatore_ternario: operatore_ternario.c
	$(CC) $(CFLAGS) -o operatore_ternario operatore_ternario.c

binary_conversion: binary_conversion.c
	$(CC) $(CFLAGS) -o binary_conversion binary_conversion.c

PrimaEsercitazione: PrimaEsercitazione.c
	$(CC) $(CFLAGS) -o PrimaEsercitazione PrimaEsercitazione.c

shift: shift.c
	$(CC) $(CFLAGS) -o shift shift.c

tabellina_due: tabellina_due.c
	$(CC) $(CFLAGS) -o tabellina_due tabellina_due.c

input_v1: input_v1.c
	$(CC) $(CFLAGS) -o input_v1 input_v1.c

calcolatrice_v2: calcolatrice_v2.c
	$(CC) $(CFLAGS) -o calcolatrice_v2 calcolatrice_v2.c

cicliArray: cicliArray.c
	$(CC) $(CFLAGS) -o cicliArray cicliArray.c

# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif
