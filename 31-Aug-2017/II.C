#include<stdio.h>
#include<conio.h>
void main()
{
int no_terms;   //number of terms
int B[100];     //an array which size 100
int number=0;   //used for for loop
int terms;      //entering the terms
int smallest=0;  //to display the smallest number
int element=0;  //to store array value having smallest number
clrscr();
printf("Enter number of terms: \n");
scanf("%d",&no_terms);
printf("Enter %d numbers:\n",no_terms);
while(number<no_terms)
{
scanf("%d",&terms);
B[number]=terms;
printf("B[%d]=%d\n",number,terms);
number++;
}
smallest=B[0];
number=0;
while(number<no_terms)
{
if(B[number]<=smallest)
{
smallest=B[number];
element=number;
}
number++;
}
printf("\nB[%d]=%d is the smallest number in the array",element,smallest);
getch();
}