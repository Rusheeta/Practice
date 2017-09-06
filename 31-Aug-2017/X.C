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
char paragraph[400]={NULL};  //paragraph array which has a many sentences
char word[20]={NULL};        //to store word that is misspelled
char word1[20]={NULL};        //to store corrected word
int len;                     //length of string in the paragraph array
int len1;                     //length of string in the word array
int len2;                     //length of string in the word1 array
int idx=0;                  //index of mispelled word in the paragraph
int idx1=0;                 //index of the mispelled word given
int idx2=0,idx3=0;          //indices used to replace the mispelled word with correct word
int count=0,count1=0;         //no. of mispelled word
char ch;                      //to confirm the continuity of the loop for correction
clrscr();
printf("Enter a paragraph:\n");
scanf("%[^\n]s",&paragraph);
len=cal_length(paragraph);
do
{
count1=0;
printf("Enter the word you misspelled:\n");
scanf("%s",&word);
len1=cal_length(word);
printf("Enter the correct word:\n");
scanf("%s",&word1);
len2=cal_length(word1);
for(idx=0;idx<len-len1;idx++)
{
count++;
for(idx1=0;idx1<len1;idx1++)
{
if(paragraph[idx+idx1]!=word[idx1])
{
count=0;
break;
}
}
if(count>0)
{
printf("Mispelled word:'%s' at index:%d\n",word,idx);
for(idx2=idx,idx3=0;idx2<idx+len1,idx3<len2;idx2++,idx3++)
{
paragraph[idx2]=word1[idx3];
}
count1++;
}
}
printf("Number of mispelled words= %d\n",count1);
printf("Paragraph after correction:\n%s\n",paragraph);
printf("Do you wish to continue with correction of words (y/n):\n");
scanf(" %c",&ch);
}while(ch=='y');
getch();
}