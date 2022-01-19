#include <stdio.h>

int main() {
	int a, x;
	scanf("%d %d", &a, &x);

	int val;
	for (int i = 0; i < a; i++) {
		scanf("%d", &val);
		if (val < x) printf("%d ", val);
	}
	return 0;
}