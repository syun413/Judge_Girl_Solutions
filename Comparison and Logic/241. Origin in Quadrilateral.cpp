#include <stdio.h>
#include <stdlib.h>
void whether_0_inside(int a, int b, int c, int d, int e, int f, int g, int h);
int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
	whether_0_inside(a,b,c,d,e,f,g,h);
	return 0;
}
void whether_0_inside(int a, int b, int c, int d, int e, int f, int g, int h)
{
	int x = (a * d - b * c > 0) && (c * f - d * e > 0) && (e * h - f * g > 0) && (g * b - h * a > 0);
		printf("%d",x);
}
/*
	a(a,b) b(c,d) c(e,f) d(g,h) a(a,b)
	a x b > 0
	b x c > 0
	c x d > 0
	d x a > 0
*/

