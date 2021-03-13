#include <stdio.h>

int main(void) {
	int n;
	scanf_s("%d", &n);

	n = 3*n/8;
	for (int y = n; y >= -5*n/3; y--) {
		for (int x = -2*n-1; x <= 2*n+1; x++)
			printf((y <= 2*x+n) + (y <= -2*x+n) + (y >= x/2-n) + (y >= -x/2-n) + (y <= 0) >= 4 ? "*" : " ");
		puts("");
	}

	return 0;
}