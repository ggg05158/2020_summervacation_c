#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double x1, y1, x2, y2, r1, r2;
	int T;
	scanf_s("%d", &T);
	int* answer;
	answer = (int*)malloc(sizeof(int) * T);
	for (int i = 0; i < T; i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		double len = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				answer[i]=-1;
			else
				answer[i] = 0;
		}
		else {
			if (len > (r1 + r2))
				answer[i] = 0;
			else if (len == (r1 + r2))
				answer[i] = 1;
			else
				answer[i] = 2;
		}
	}
	for (int j = 0; j < T; j++) {
		printf("%d\n", answer[j]);
	}
	free(answer);
	return 0;
}