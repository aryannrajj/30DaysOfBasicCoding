#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, j, k, a[3][3], b[3][3], c[3][3]; 
  printf("enter first 3 * 3 matrix :\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
       scanf("%d", &a[i][j]);
  }
  
  printf("\nenter second 3 * 3 matrix :\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
        scanf("%d", &b[i][j]);
  }

   printf("\nthe multiplied 3 * 3 matrix is :\n");
   for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++) 
    {
      c[i][j] = 0;
      for (k = 0; k < 3; k++)
        c[i][j] += a[i][k] * b[k][j]; 
    }
   }

    for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
        printf("%d ",c[i][j]);
    printf("\n");
   }

  return 0;
}