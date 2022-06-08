#include<stdio.h>
int main(){
int a,b;
int c=1;
scanf("%d %d",&a,&b);
for(int i=1; i<=b;i++)
{
	c*=a;
}
printf("%d",c);
}
