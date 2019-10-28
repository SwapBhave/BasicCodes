
#include<stdio.h>

int main(void)
{
	int x, y;
	while (1)
	{
		printf("\n Enter x Co-ordinate of point:\n");
		scanf("%d", &x);
		printf("\n Enter y Co-ordinate of point:\n");
		scanf("%d", &y);

		if (x > 0)
		{
			if (y > 0)
			{
				printf("\n Point lies in 1st Quadrant\n");
			}
			else
			{
				printf("\n Point lies in 2nd Quadrant\n");
			}
		}
		else
		{
			if (y > 0)
			{
				printf("\n Point lies in 4th Quadrant\n");
			}
			else
			{
				printf("\n Point lies in 3rd Quadrant\n");
			}
		}
	}
	return 0;
}
