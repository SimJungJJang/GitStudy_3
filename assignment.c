#include <stdio.h>

//Coded by Wonho_Kim
double Max(double *, int);

int main(void)
{
	double ary1[5] = { 5.3, 1.4, 7.9, 0.4, -4.5 };
	double ary2[3] = { -4.3, -1.5, -10.7 };

	printf("ary1의 최댓값 : %f \n", Max(ary1, 5));
	printf("ary2의 최댓값 : %f \n", Max(ary2, 3));
	return 0;
}

double Max(double *a, int b)
{
	double max = a[0];

	for (int i = 0; i < b; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
