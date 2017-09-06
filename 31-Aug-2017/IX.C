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
char sentence[100]={NULL};  //array to store sentence
int idx=0;                  //index to count vowels
int count=0;                //no. of vowels
int len;                    //length of the sentence
clrscr();
printf("Enter a sentence:\n");
scanf("%[^\n]s",&sentence);
len=cal_length(sentence);
for(idx=0;idx<len;idx++)
{
if(sentence[idx]=='a'| sentence[idx]=='e'| sentence[idx]=='i'|
   sentence[idx]=='o'| sentence[idx]=='u'| sentence[idx]=='A'|
   sentence[idx]=='E'| sentence[idx]=='I'| sentence[idx]=='O'|
   sentence[idx]=='U')
count++;
}
printf("Total number of vowels in the given sentence= %d",count);
getch();
}