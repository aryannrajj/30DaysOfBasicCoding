#include <stdio.h>
void main()
{
    int s,i,n,d;
    system("CLS");
    printf("All Armstrong numbers between 1 and 999 are: \n");
    
    for(int i=1;i<=999;i++)
    {
        s=0;
        n=i;
        while(n>0)
        {
            d=n%10;  
            s=s+(d*d*d);
            n=n/10;
        }
	       if (s == i)
                printf("%d ", i);  
         
    }
}