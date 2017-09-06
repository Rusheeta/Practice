#include<stdio.h>
#include<conio.h>
void main()
{
int no_terms;   //number of terms
int E[100];     //an array which size 100
int number=0;   //used for for loop
int terms;      //entering the terms
clrscr();
printf("Enter number of terms: \n");
scanf("%d",&no_terms);
printf("Enter %d numbers:\n",no_terms);
while(number<no_terms)
{
scanf("%d",&terms);
E[number]=terms;
printf("D[%d]=%d\n",number,terms);
number++;
}
number=0;
printf("\nMultiple(s) of 3 is/are: ");
while(number<no_terms)
{
if(E[number]%3==0)
printf("%d ",E[number]);
number++;
}
number=0;
printf("\nMultiple(s) of 4 is/are: ");
while(number<no_terms)
{
if(E[number]%4==0)
printf("%d ",E[number]);
number++;
}
getch();
}