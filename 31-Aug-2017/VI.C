#include<stdio.h>
#include<conio.h>
void main()
{
float pol_measure;   //pollution measurement
float P[30]={NULL};     //an array which size 100
int number=0;   //used for for loop
int days=30;      //number of days in a month
float max,min;    //record max and min pollution.
int day1;      //to display day of aug for max pollution
int day2;      //to display day of aug for max pollution
clrscr();
printf("Enter pollution measurement for 1st Aug to 31st Aug:\n");
while(number<=days)
{
scanf("%f",&pol_measure);
P[number]=pol_measure;
printf("P[%d]=%f\n",number,pol_measure);
number++;
}
number=0;
max=P[0];
min=P[0];
while(number<=days)
{
if(P[number]>=max)
{
max=P[number];
}
if(P[number]<=min)
{
min=P[number];
}
number++;
}
number=0;
printf("Max. pollution:\n");
while(number<=days)
{
if(P[number]==max)
{
day1=number+1;
printf("%f on Aug %d\n",max,day1);
}
number++;
}
number=0;
printf("Min. pollution:\n");
while(number<=days)
{
if(P[number]==min)
{
day2=number+1;
printf("%f on Aug %d\n",min,day2);
}
number++;
}
getch();
}