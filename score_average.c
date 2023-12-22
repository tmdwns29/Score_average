#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
	int N, K;
	int* score;
	double* average;
	score = (int*)malloc(sizeof(int));
	average = (double*)malloc(sizeof(double));

	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < K; i++) {
		int a1, a2, b, sum;
		scanf("%d %d", &a1, &b); // 1 3
		a2 = a1; // a2 = 6
		sum = score[a2 - 1]; // s[5]
		while (a2 < b) { // 8 < 9
			sum = sum + score[a2]; // ((s[5]+s[6])+s[7])+s[8]
			a2++;
		}
		average[i] = (double)sum / (b - a1 + 1);
	}

	for (int i = 0; i < K; i++) {
		printf("%.2lf\n", average[i]);
	}
}