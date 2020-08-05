#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double x1, y1, x2, y2, r1, r2;
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		double len = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
				printf("-1\n");
			else
				printf("0\n");

		}
		else if ((r1 > r2 ? r1 : r2) >= len + (r1 > r2 ? r2 : r1))
		{
			if ((r1 > r2 ? r1 : r2) == len + (r1 > r2 ? r2 : r1))
				printf("1\n");
			else
				printf("0\n");
		}
		else if (len > (r1 + r2))
			printf("0\n");
		else if (len == (r1 + r2))
			printf("1\n");
		else
			printf("2\n");

	}
	return 0;
}