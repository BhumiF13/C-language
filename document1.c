//program to arrange all elements of a rows in ascending order
#include<stdio.h>
int main()
{
    int i,j,k,m,n,temp=0,a[10][10];
    printf("enter the value of m and n");
    scanf("%d %d",&m,&n);
    printf("enter elements");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
  for(k=j+1;k<n;k++)
    {
       if(a[i][j]>a[i][k])
       {
           temp=a[i][j];
           a[i][j]=a[i][k];
           a[i][k]=temp;
       }
    }
  }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
    printf("%d\t",a[i][j]);
    }
    printf("\n");
}
return 0;
}
