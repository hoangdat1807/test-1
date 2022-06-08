#include<stdio.h>
#include<math.h>
int main()
{ 
  int a,b;
  scanf("%d%d",&a, &b);
  int pow=1;
  for(int i=1; i<=b; i++)
  {
  	pow*=a;
  }
  printf("%d", pow);
}
