#include<stdio.h>
#include<conio.h>
void main()
{
int no_terms;   //number of terms
int A[100];     //an array which size 100
int number=0;   //used for for loop
int terms;      //entering the terms
int largest=0;  //to display the largest number
int element=0;  //to store array value having largest number
clrscr();
printf("Enter number of terms: \n");
scanf("%d",&no_terms);
printf("Enter %d numbers:\n",no_terms);
while(number<no_terms)
{
scanf("%d",&terms);
A[number]=terms;
printf("A[%d]=%d\n",number,terms);
number++;
}
largest=A[0];
number=0;
while(number<no_terms)
{
if(A[number]>=largest)
{
largest=A[number];
element=number;
}
number++;
}
printf("\nA[%d]=%d is the largest number in the array",element,largest);
getch();
}