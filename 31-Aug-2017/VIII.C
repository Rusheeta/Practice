#include<stdio.h>
#include<conio.h>
int cal_length(char characters[100] )
{
int length;   //to store no. of characters
int index=0;  //to show the index in which a character is stored
while(characters[index]!='\0')
{
index++;
}
length=index;
return length;
}

void main()
{
char firstName[10]={NULL};  //character array to store first name
char lastName[10]={NULL};   //character array to store last name
char name[20]={NULL};       //character array to store first and last name
int len1;            //length of firstName
int len2;            //length of lastName
int len3;            //sum of len1 and len2
int idx1=0,idx2=0;             //index of the array
clrscr();
printf("Enter your first name:\n");
scanf("%s",&firstName);
printf("Enter your last name:\n");
scanf("%s",&lastName);
len1=cal_length(firstName);
len2=cal_length(lastName);
for(idx1=0;idx1<len1;idx1++)
{
name[idx1]=firstName[idx1];
}
for(idx1=len1,idx2=0;idx1<len3,idx2<len2;idx1++,idx2++)
{
name[idx1]=lastName[idx2];
}
printf("Name is %s",name);
getch();
}