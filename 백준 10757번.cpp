#include <stdio.h>
#include <stdlib.h>

int main() {

	int N;
	scanf_s("%d", &N);

	for (int i = 0; i < N;) {

		if (N / i == 0) {

			printf("%d", i);
		}
		else {

			i++;
		}
	}
}
