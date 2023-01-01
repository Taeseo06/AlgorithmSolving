#include<stdio.h>

int main(void)
{
	int i, n, score[1000] = {0}, max = 0, sum = 0, m;
	double avg = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		max = (score[i] > max) ? score[i] : max;
	}

	for (i = 0; i < n; i++)
	{
		avg += (double)score[i] / max * 100;
	}

	avg /= (double)n;
	printf("%f", avg);

	return 0;
}