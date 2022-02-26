#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int f,g;
	f = (a * c + b * c + a * b) * 2 + (a - 2 * e) * d * 8 + (b - 2 * e) * d * 8 + (c - 2 * e) * d * 8;
	g = a * b * c -((a - 2 * e) * (b - 2 * e) * d + (a - 2 * e) * (c - 2 * e) * d + (b - 2 * e) * (c - 2 * e) * d) *2;
	printf("%d\n%d",f,g);
	return 0;
}
