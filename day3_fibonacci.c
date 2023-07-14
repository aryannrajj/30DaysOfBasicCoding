#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,f=0,s=1,d;
  printf("enter the no of terms u want in the series: ");
  scanf("%d", &n);
  printf("%d ", f);
  for(i=0; i<n; i++)
  {
      d=f+s;
    printf("%d ",d);
      s=f;
      f=d;
    
  }
   
  return 0;
}