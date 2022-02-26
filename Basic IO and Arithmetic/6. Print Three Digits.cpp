#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b = a % 10;
	c = ((a - b) % 100) / 10;
	d = (a - (a % 100)) / 100;
	printf("%d\n%d\n%d\n",d,c,b);
	return 0;
}
