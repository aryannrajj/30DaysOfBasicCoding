#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    if(n==0 || n==1) 
    {
      printf("neither prime nor composite");
      exit(1);
    }
    else
    {
     for( i = 2; i <= n; i++)
     {
       for( j=2; j<=i; j++)
        {
          if(i % j == 0)
            break;
        }
        if(i == j)
          printf("%d ",i);    
     }
    }
}


// int main()              // O(n*root(n))
// {
//     int n;
//     scanf("%d",&n);
//     for(int i = 2; i < n; i++){     // o(n)
//      if(IsPrime(i))               // o(root(n))
//      {
//          printf(" %d" , i);
//      }
//     }
    
//     return 0;
// }

// int IsPrime(int n)       //////  root of n   i=root(n)
// {
//     int flag=0;
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             flag++;
//             break;
//         }
//     }
//     if(flag==1)
//     {
//         return 0;
//     }
//     else
//     return 1;
// }