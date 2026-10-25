#include <stdio.h>
int main()

//1. Write a program to make use of basic I/O functions using different data types. 
//2. Write a program to calculate the area of a circle. 
//3. Write a program to calculate the average of three numbers.
{

    // 1. answer......................

    char name[10];
    char year[10];
    char college[20];
    char branch[10];
    char hobby[10];
    char town[12];
    
    float percentage10;
    float percentage12;
    
    int rollno;
    int age;
    int semester;
    int passingyear;

printf("Enter your first name :- ");
scanf("%9s",name);

printf("Enter your college study year ( first / second / third / fourth ) :- ");
scanf("%9s",year);

printf("Enter your college name (instead of using space in the college name use underscore(_) / hyphen(-) or any other symbol ) :- ");
scanf("%19s",college);

printf("Enter your degree (like B.Tech , civil , mechanicle , etc) :- ");
scanf("%9s",branch);

printf("Enter the game which is your hobby :- ");
scanf("%9s", hobby);

printf("Enter your hometown :- ");
scanf("%10s",town);

printf("Enter your 10th board percentage :- ",percentage10);
scanf("%f",&percentage10);

printf("Enter your 12th board percentage :- ",percentage12);
scanf("%f",&percentage12);


printf("Enter your current age :- ");
scanf("%d",&age);

printf("Enter your current semester (in number) :- ");
scanf("%d",&semester);

printf("Enter your passing year :- ");
scanf("%d",&passingyear);

printf("\n\n\n");

printf("----------------------------------------------------------STUDENT DEAILS----------------------------------------------------------\n\n");

printf("My name is %s.\n",name);
printf("I am %s year %s student , studying in %s college.\n",year,branch,college);
printf("My hobby is to play %s.\n",hobby);
printf("My hometown is %s.\n",town);
printf("I got %.2f percentage in 10th board and %.2f in 12th board.\n", percentage10, percentage12);
printf("My roll number in college is %d.\n",rollno);
printf("I am %d years old.\n",age);
printf("My current semester is %d. \n", semester);
printf("My passing year is %d.\n\n\n\n",passingyear);

  // 2. answer..................... 

  float radius;


  printf("Enter the radius for which we have to find the area of circle :- ");
  scanf("%.2f",&radius);

  float area = 3.14*radius*radius;

  printf("Area of circle is %.2f", area);

  // 3. answer.............................

  float a ;
  float b ;
  float c ;

  printf("Enter the value of first number 'a' :- ");
  scanf("%f",&a);

  printf("Enter the value of second number 'b' :- ");
  scanf("%f",&b);

  printf("Enter the value of third number 'c' :- ");
  scanf("%f",&c);

  float average = (a+b+c)/3 ;

  printf("Average of three numbers a,b,c desired by you is %.2f", average);


return 0 ;

}