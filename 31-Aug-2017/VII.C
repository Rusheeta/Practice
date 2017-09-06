#include<stdio.h>
#include<conio.h>

int cal_length(char characters[100] )
{
int length;   //to store no. of characters
int index=0;  //to show the index in which a character is stored
while(characters[index]!='\0')
{
printf("%c\n",characters[index]);
index++;
}
length=index;
return length;
}

void main()
{
char word[100]={NULL};  //character array
int len;         //length of string or no. of characters
clrscr();
printf("Enter an array of characters:\n");
scanf("%s",&word);
printf("Characters in the array:\n");
len=cal_length(word);
printf("No. of characters in an array= %d",len);
getch();
}