#include<stdio.h>
int main(){
    printf("This is a temperature conversion table\n");
float fahr,cel, upper, lower, step;
#define LOWER 0
#define UPPER 300
#define STEP 20

//#define creates symbolic constants and are different from variables. No semicolon after statement.//

cel= LOWER;
while (cel<=UPPER)
{fahr = (9.0/5.0)*(cel+32);
    //to force c to perform floating point division and not integer division we have to write 5.0/9.0//
    //if we do 5/9 it does integer division and hence returns values as 0.//

    printf("%3.3f\t %.3f\n", cel, fahr);
   //3.3 allows width of 3 places before decimal and 3 after decimal in the table, also \t is tab which creates a spacing between the  number//
   //if we type %.2f then you specify that you need two points after decimal but no constraint before it//
   cel=cel + STEP;
}



    return 0;
}
