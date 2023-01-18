#include <stdio.h>

int main(){
 int a, b, sum;
  printf("Enter two number: ");
    scanf("%d %d",&a,&b);
 //calculating the sum of two numbers
  sum = a+b;
    printf("sum : %d", sum);
  return(0);
  
}



#include<stdio.h>
 
int main() {
 
   int rad;
   float pi = 3.14, area, circum;
  taking the value of the radius.
   printf("Enter radius of circle: ");
   scanf("%d", &rad);
 // calculating the area of a circle.
   area = pi * rad * rad;
   printf("\nArea of circle : %f ", area);
 // used the formula to calculate circumstances of circle
   circum = 2 * pi * rad;
   printf("\nCircumference of circle: %f ", circum);
 
   return (0);
}

#include<stdio.h>
int main()
{
int p,t,r,sim_int;
 //taking input from the user for p, t, r.
  printf("Input principle: \n");
  scanf("%d",&p);
  printf("Input time: \n");
  scanf("%d",&t);
  printf("Input rate of interest: \n");
  scanf("%d",&r);
// calculating simple interest using formula.
sim_int=(p*t*r)/100;
  
printf("Simple interest = %d",sim_int);
return 0;
}



#include<stdio.h>

int main(){
  float celsius, Fahrenheit;
 
	printf("\nEnter temp in Celsius : ");
	scanf("%f", &celsius);
 // using a formula to convert temperature from degree centigrade to Fahrenheit
	Fahrenheit = (9/5 * celsius) + 32;
	printf("\nTemperature in Fahrenheit : %f ", Fahrenheit);
 
	return (0);
}

#include<stdio.h>
 
int main() {
   int sub1, sub2, sub3, sub4, sub5, sum ;
   float percentage;
 // entering the marks for 5 subjects.
   printf("\nEnter marks of subject 1 : ");
   scanf("%d", &sub1);
   printf("\n Enter the marks of subject 2: ");
   scanf("%d",&sub2);
   printf("\n Enter the marks of subject 3: ");
   scanf("%d",&sub3);
   printf("\n Enter the marks of subject 4: ");
   scanf("%d",&sub4);
   printf("\n Enter the marks of subject 5: ");
   scanf("%d",&sub5);
  // calculating the sum of marks of all subject
   sum = sub1 + sub2 + sub3 + sub4 + sub5;
   printf("\nSum : %d", sum);
 // calculating the percentage, where 500 is the total marks of all five subjects
   percentage = (sum * 100)/500 ;
   printf("\nPercentage : %.4f", percentage);
 
   return (0);
}
