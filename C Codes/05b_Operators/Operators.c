
#include<stdio.h>

int main()
{
	int a, b,c;
	printf("\n Enter Two Numbers:\n");
	scanf("%d %d", &a, &b);
	printf("\n Entered number is:%d and %d\n", a, b);
	printf("\n a&b is:%d\n", a&b);
	printf("\n a&&b is:%d\n", a&&b);
	printf("\n a|b is:%d\n", a | b);
	printf("\n a||b is:%d\n", a || b);
	printf("\n !a and !b is: %d %d\n", !a, !b);
	printf("\n ~a and ~b is: %d %d\n", ~a, ~b);
	printf("\n a^b is: %d \n", a^b);
	printf("\n a<<2 and b<<1 is: %d %d\n", a << 2, b << 1);
	printf("\n a>>2 and b>>1 is: %d %d\n", a >> 2, b >> 1);
	return 0;
}
