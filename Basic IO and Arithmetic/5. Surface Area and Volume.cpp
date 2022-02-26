#include <stdio.h>
#include <stdlib.h>
int main()
{
	int h,w,d;
	int a,b;
	scanf("%d %d %d",&h,&w,&d);
	a = 2 * (h * w + h * d + w * d);
	b = h * w * d;
	printf("%d\n%d\n",a,b);
	return 0;
}
