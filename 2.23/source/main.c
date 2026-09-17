#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int largest;
	int smallest;

	printf("請輸入第一個整數: ");
	scanf("%d", &num1);
	printf("請輸入第二個整數:");
	scanf("%d", &num2);
	printf("請輸入第三個整數:");
	scanf("%d", &num3);

	if ((num1 > num2) && (num2 > num3))	{
		largest = num1;
		smallest = num3;
	}
	else if ((num1 > num3) && (num3 > num2)) {
		largest = num1;
		smallest = num2;
	}

	if ((num2 > num1) && (num1 > num3))	{
		largest = num2;
		smallest = num3;
	}
	else if ((num2 > num3) && (num3 > num1)) {
		largest = num2;
		smallest = num1;
	}

	if ((num3 > num1) && (num1 > num2))	{
		largest = num3;
		smallest = num2;
	}
	else if ((num3 > num2) && (num2 > num1)) {
		largest = num3;
		smallest = num1;
	}

	printf("\n");

	printf("最大整數是 %d\n", largest);
	printf("最小整數是 %d\n", smallest);

	system("pause");
	return 0;
}