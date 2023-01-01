#include<stdio.h>

int main(void)
{
	int hour, min, output;

	scanf("%d %d", &hour, &min);

	if (min < 45)
	{

		if (hour == 0)
		{
			hour = 24;
		}
		hour -= 1;
		min += 15;
	}
	else
	{
		min -= 45;      
	}

	printf("%d %d", hour, min);
}