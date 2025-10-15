'''
LAB
Estimated time
10 minutes

Level of difficulty
Easy

Objectives
becoming familiar with the concept of, and working with, variables;
performing basic computations and conversions;
experimenting with Python code.
Scenario
Miles and kilometers are units of length or distance.

Bearing in mind that 1 mile is equal to approximately 1.61 kilometers,
complete the program in the editor so that it converts:

miles to kilometers;
kilometers to miles.
Do not change anything in the existing code. Write your code in the places
indicated by ###. Test your program with the data we've provided in the source code.


Pay particular attention to what is going on inside the print() function.
Analyze how we provide multiple arguments to the function, and how we output the expected data.

Note that some of the arguments inside the print() function are strings
(e.g., "miles is", whereas some other are variables (e.g., miles).

TIP

There's one more interesting thing happening there. Can you see another
function inside the print() function? It's the round() function. Its job is to
round the outputted result to the number of decimal places specified in the
parentheses, and return a float (inside the round() function you can find the
variable name, a comma, and the number of decimal places we're aiming for).
We're going to talk about functions very soon, so don't worry that everything
may not be fully clear yet. We just want to spark your curiosity.


After completing the lab, open Sandbox, and experiment more.
Try to write different converters, e.g., a USD to EUR converter,
a temperature converter, etc. - let your imagination fly!
Try to output the results by combining strings and variables.
Try to use and experiment with the round() function to round your results
to one, two, or three decimal places. Check out what happens if you don't
provide any number of digits. Remember to test your programs.

Experiment, draw conclusions, and learn. Be curious.


Expected output
7.38 miles is 11.88 kilometers
12.25 kilometers is 7.61 miles
'''

'''
kilometers = 12.25
miles = 7.38

miles_to_kilometers = ###
kilometers_to_miles = ###

print(miles, "miles is", round(miles_to_kilometers, 2), "kilometers")
print(kilometers, "kilometers is", round(kilometers_to_miles, 2), "miles")
'''

# Lab Daniel
kilometers = 12.25
miles = 7.38

miles_to_kilometers = (miles * 1.697)
kilometers_to_miles = (kilometers/1.576)

print(miles, "miles is", round(miles_to_kilometers, 2), "kilometers")     #round arrotonda il risultato dei numeri dopo la virgola , 
print(kilometers, "kilometers is", round(kilometers_to_miles, 2), "miles")#in questo caso 2 , guarda è specificato dopo la variabile

#conventitore temperatura

celsius = 20
fahrenheiht = 85

celsius_to_fahrenheit = (celsius*9/5)+32
fahrenheit_to_celsius = (fahrenheiht-32)/9*5

print(celsius,"celsius is : ",round(celsius_to_fahrenheit,1),"fahrenheit")
print(fahrenheiht,"fahrenheit is :",round(fahrenheit_to_celsius,1),"celsius")

#convertitore euro dollaro

euro = 85
dollaro = 59

euro_to_dollaro = euro*1.077
dollaro_to_euro = dollaro / 1.077

print(euro , " euro is : ",round(euro_to_dollaro,3),"dollar")
print(dollaro , "dollar is : ",round(dollaro_to_euro,3),"euro")