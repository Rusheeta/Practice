#include<stdio.h>
#include<conio.h>
void main()
{
int no_terms;   //number of terms
int D[100];     //an array which size 100
int number=0;   //used for for loop
int terms;      //entering the terms
int even_count=0,odd_count=0;//to count number of even numbers and odd numbers in the array
clrscr();
printf("Enter number of terms: \n");
scanf("%d",&no_terms);
printf("Enter %d numbers:\n",no_terms);
while(number<no_terms)
{
scanf("%d",&terms);
D[number]=terms;
printf("D[%d]=%d\n",number,terms);
number++;
}
number=0;
while(number<no_terms)
{
if(D[number]%2==0)
even_count++;
else
odd_count++;
number++;
}
printf("\nThere is/are %d even number(s) and %d odd number(s) in the array.",even_count,odd_count);
getch();
}