#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,j=1;
  printf("Enter the number for factorial: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    j*=i;
  }
  printf("%d",j);
}
