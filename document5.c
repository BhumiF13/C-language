//program to count number of words in a string
#include<stdio.h>
int main()
{
    int i=0,c=0;
    char s[20];
    printf("enter the length of string");
    fgets(s,20,stdin);
    while(s[i]!='\0')
    { 
        if(s[i]==' ')
        {
           c++;
        } 
           i++;
    }
     printf("number of words are %d",c+1);
     return 0;
}
