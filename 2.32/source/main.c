#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height;
	float weight;
	float BMI_result = 0;

	printf("請輸入身高(公尺): ");
	scanf("%f", &height);

	printf("請輸入體重(公斤): ");
	scanf("%f", &weight);

	BMI_result = weight / (height * height);

	printf("\n");

	printf("BMI 數值:\n");

	if (BMI_result < 18.5)

		printf("過輕: 低於 18.5\n");
	else if (BMI_result < 25)
		printf("正常: 18.5 到 24.9 \n");
	else if (BMI_result < 30)
		printf("過重: 25 到 29.9 \n");
	else
		printf("肥胖: 超過 30\n");

	printf("\n");

	system("pause");
	return 0;
}