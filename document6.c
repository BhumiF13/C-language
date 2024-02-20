//To input a string and remove extra wide spaces
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,c=0,l,t,j;
	char s[20];
	printf("Input string\n");
    gets(s);
	l=strlen(s);
	while(i<=l)
	{
		if(s[i]==' ')
		{
			j=i;
		    while(j<=l)
			{
				s[j]=s[j+1];
				j++;
			}
			l--;
		}
		i++;
	}
	printf("String is %s",s);
	return 0;
}
