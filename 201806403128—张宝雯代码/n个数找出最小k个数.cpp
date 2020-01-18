#include<stdio.h>
#include<Windows.h>
#define N 20
#pragma warning(disable:4996)
void findk(int a[], int n, int k) {
	int min = a[0];
	if (n == 1) {
		printf("%d\t", min);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < min ) {
			min = a[i];
			a[i] = a[0];
			a[0] = min;
		}
	}
	printf("%d\t", min);
	if (k > 1) {
		findk(a + 1 , n - 1, k - 1);
	}
}

int main()
{
	int n, k;
	printf("Input n:");
	scanf("%d", &n);
	int a[N];
	printf("\nInput the numbers:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Input k:");
	scanf("%d", &k);
	findk(a, n, k);
	system("pause");
	return 0;
}
