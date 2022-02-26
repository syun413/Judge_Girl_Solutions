#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	z = a - c;
	y = (b - 8 * a + 6 * c) / 2;
	x = c - y;
	printf("%d\n%d\n%d\n",x,y,z);
	return 0;
 } 
