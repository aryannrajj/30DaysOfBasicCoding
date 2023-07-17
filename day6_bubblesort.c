#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, j, a[5],s=0;
  printf("enter 5 elements in array: ");
  for(i=0;i<5;i++)
   scanf("%d",&a[i]);
  for(i=0; i<5; i++) 
  {
    for(j=0;j<5-i;j++)
    {
     if(a[j]>a[j+1])
     {
        s = a[j];
        a[j] = a[j+1];
        a[j+1] = s;
     }

    }
  }
  for(i=0; i<5; i++)
    printf("%d ",a[i]);
  return 0;

}