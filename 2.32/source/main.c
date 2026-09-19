#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double height;
    double weight;
    double bmi;

    printf("請輸入身高(公尺): ");
    scanf("%lf", &height);

    printf("請輸入體重(公斤): ");
    scanf("%lf", &weight);

    bmi = weight / (height * height);

    printf("\n您的 BMI 數值為: %.1f\n\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n\n");

    if (bmi < 18.5)
    {
        printf("評估結果: 您的體重過輕 (Underweight)\n");
    }
    else if (bmi < 25.0)
    {
        printf("評估結果: 您的體重正常 (Normal)\n");
    }
    else if (bmi < 30.0)
    {
        printf("評估結果: 您的體重過重 (Overweight)\n");
    }
    else
    {
        printf("評估結果: 您的體型肥胖 (Obese)\n");
    }

    system("pause");
    return 0;
}