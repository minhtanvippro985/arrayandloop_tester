#include <stdio.h>

int main() {
    int i, y, flag;

    printf("cac so nguyen to tu 1 den 20 la:\n");

    for (i = 2; i <= 20; i++) { 
        flag = 1; //flag1
        for (y = 2; y < i; y++) {
            if (i % y == 0) {
                flag = 0; //khongphai
                break;    
            }
        }
        if (flag == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
