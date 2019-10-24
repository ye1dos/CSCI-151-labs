# include<stdio.h>
int main()
{
  int n,i=0,sum =0;
  scanf("%i",&n);
  printf("%i=",n);
  while (n!=0)
   {
       sum = n%8;
       n = n/8;
  printf("+(%i+8^%i)", sum,i);
  i++;
   }
}
