#include <stdio.h>
#include <stdlib.h>

int main() {
	int result = 0;
	for (int i = 2; i <= 100; i++) {
		int check = 0;
		for (int x = 1; x <= i; x++) {
			if (i % x == 0)
				check++;
		}
		if (D == 2)
			result += i;
	}
	printf("1부터 100까지의 숫자 중 소수의 합은 %d입니다.\n", result);
	system("pause");
}