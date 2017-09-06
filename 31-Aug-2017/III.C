#include<stdio.h>
#include<conio.h>
void main()
{
int no_terms;   //number of terms
int C[100];     //an array which size 100
int number=0;   //used for for loop
int terms;      //entering the terms
int num;        //random number
int above_count=0,below_count=0;//to count number of elements above and below the random number
clrscr();
printf("Enter number of terms: \n");
scanf("%d",&no_terms);
printf("Enter %d numbers:\n",no_terms);
while(number<no_terms)
{
scanf("%d",&terms);
C[number]=terms;
printf("C[%d]=%d\n",number,terms);
number++;
}
printf("Enter a random number: \n",num);
scanf("%d",&num);
number=0;
while(number<no_terms)
{
if(C[number]>num)
above_count++;
if(C[number]<num)
below_count++;
number++;
}
printf("\nThere is/are %d number(s) above %d and %d number(s) below %d in the array.",above_count,num,below_count,num);
getch();
}