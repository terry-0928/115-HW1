#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int multiple_num;
	int base_num;

	printf("輸入第一個整數: ");
	scanf("%d", &multiple_num);

	printf("輸入第二個整數: ");
	scanf("%d", &base_num);

	printf("\n");

	if (base_num != 0)
	{
		if (multiple_num % base_num == 0)
		{
			printf("%d 是 %d 的倍數\n", multiple_num, base_num);
		}
		else
		{
			printf("%d 不是 %d 的倍數\n", multiple_num, base_num);
		}
	}
	else
	{
		printf("第二個輸入不能為0\n");
	}
	system("pause");
	return 0;
}