#include <stdio.h>
int main()

// UNIT 2

// 1. Write a program that demonstrates the order of execution of operators in expressions. 
// 2. Write a program to check whether a given number is even or odd.
// 3. Write a program to determine whether a given number is positive, negative, or zero. 


{
    int a ;
    int b ;
    int c ;


    printf("Enter the value of 'a' :- ");
    scanf("%d", &a);

    printf("Enter the value of 'b' :- ");
    scanf("%d", &b);

    printf("Enter the value of 'c' :- ");
    scanf("%d", &c);

    int random_calculation = (a+b-c)*b;

    printf("(a+b-c)*b = %d\n\n",random_calculation);

// the output will be proper ans....as we have arranged every thing in priority...() > *, \ , % > +,- > .......at the same prority level output works from left to right.


// 2 answer........................

int number ;

printf("Enter the integer to be checked wheather it is even or odd :- ");
scanf("%d",&number);

if(number % 2 == 0)
{
    printf("\nThe number you have entered is 'Even'.\n\n");
}

else{
    printf("\nThe number you have entered is 'Odd'.\n\n");
}

// 3. answer............................

int num;

printf("Enter the number to be checked wheather it is positive or negative or zero :- ");
scanf("%d",&num);

if(num<0)
{
printf("\nNumber you have entered is 'Negative'.\n\n");
}

if(num==0)    // you can use elseif here in place of if......
{
printf("\nNumber you have entered is 'Zero'.\n\n");
}

if(num>0)     // you can use else here in place of if.......
{
printf("\nNumber you have entered is 'Positive'.\n\n");
}




return 0;
}