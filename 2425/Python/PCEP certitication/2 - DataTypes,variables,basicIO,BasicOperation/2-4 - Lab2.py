'''
LAB
Estimated time
10 minutes

Level of difficulty
Easy

Objectives
becoming familiar with the concept of storing and working with different data types in Python;
experimenting with Python code.
Scenario
Here is a short story:

Once upon a time in Appleland, John had three apples, Mary had five apples, and Adam had six apples.
They were all very happy and lived for a long time. End of story.

Your task is to:

create the variables: john, mary, and adam;
assign values to the variables. The values must be equal to the numbers of fruit possessed by John, Mary,
and Adam respectively;
having stored the numbers in the variables, print the variables on one line,
and separate each of them with a comma;
now create a new variable named total_apples equal to addition of the three former variables.
print the value stored in total_apples to the console;
experiment with your code: create new variables, assign different values to them,
and perform various arithmetic operations on them (e.g., +, -, *, /, //, etc.).
Try to print a string and an integer together on one line, e.g., "Total number of apples:" and total_apples.
'''

john = 3
mary = 5
adam = 6

total_apples = john + mary+adam
print(" Jonh have: ",john,"\n","Mary have: ",mary,"\n","Adam have: ",adam,"\n")
print("The total number of apples is: ",total_apples,"\n")

#sperimento con nuove variabili i seguenti operatori +,-,*,/,// ecc

somma_total_apple = john+mary+adam
print("la somma delle mele : ",somma_total_apple)

sottrazione_total_apple = john-mary-adam
print("la sottrazione delle mele : ",sottrazione_total_apple)

moltiplicazione_total_apple = john*mary*adam
print("la moltiplicazione delle mele (un miracolo) : ",moltiplicazione_total_apple)

divisione_total_apple = (john/mary)/adam
print("la divisione delle mele : ",divisione_total_apple)

quoziente_total_apple = (john//mary)//adam
print("il quozinete delle mele : ",quoziente_total_apple)

potenza_total_apple = (john**mary)**adam
print("la potenza delle mele : ",potenza_total_apple)
