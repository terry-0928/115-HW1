#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("叫块俱计\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d 琌案计\n", num);
    }
    else {
        printf("%d 琌膀计\n", num);
    }

    system("pause");
    return 0;
}
