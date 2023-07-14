// LCM  wo lowest number jo dono ka multiple ho
//HCF wo highest number jo dono ko divide kar de
#include<stdio.h>
#include<stdlib.h>
int LCM(int, int);
int HCF(int, int);
int main()
{
  int a,b,c,res,res1;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
    if(a<b)
  {
    c=a;
    a=b;
    b=c;
  }
  res = LCM(a,b);
  printf("LCM: %d",res);
  res1 = HCF(a,b);
  printf("\nHCF: %d",res1);
}

int LCM(int a, int b)
{
  int i;

  for(i=1;i<=a;i++)
  {
    if((a*i) % b == 0 )
      break;  
  }   
  return a*i;
}

int HCF(int a, int b)
{
  int i;
  for(i=b;i>0;i--)
  {
    if(a % i == 0 && b % i == 0)
      break;  
  }  
  return i;
}