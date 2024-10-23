/*
Level of difficulty
Easy

Objectives
Familiarize the student with:
- Using comments
- When not to use comments
- Ways to replace comments with code

Scenario
Comments are not always the best way to say something in a code.
Sometimes it's much better to leave some information in the code.

In the worst case scenario, comments can lie to the user/programmer
(you should never do that on purpose). It's a good idea to use readable variable names.

Sometimes it's better to divide your code into named pieces
(later we'll call these pieces functions). In some situations, it's a good idea to write the steps of calculations in a clearer way.

The code in the editor contains some of these situations;
try to improve it (and remove comments - sometimes removing comments will be an improvement itself).

If you don't understand all of the code here, don't worry. Try to focus on the comments.

Expected Output
 There are 10800 seconds in 3 hours.
 There are 180 seconds in 3 minutes.
 There are 300 seconds in 5 minutes.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int second_to_our = 10800; /* raccoglie i secondi che servono per riempire 3 ore (3*60*60) */

    int second_to_minute1 = 180; /*raccoglie i secondi che servono per riempire 3 minuti (3*60) */

    int second_to_minute2 = 300; /* raccoglie i secondi che servono per riempire 5 minuti (5*60) */

    printf("value of some variable %d second for composite 3 our\n", second_to_our);
    printf("value of some variable %d second for composite 3 minute\n", second_to_minute1);
    printf("value of some variable %d second for composite 5 minute\n", second_to_minute2);
    return 0;
    // commento

    /**
     * printf(" value of some variable: %d \n", otherVariable);
        here we should print the v value, but a programmer didn't have time to write the code.
        However, he/she likes writing long, well formatted comments
     */
}
