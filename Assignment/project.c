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
	printf("1���� 100������ ���� �� �Ҽ��� ���� %d�Դϴ�.\n", result);
	system("pause");
}