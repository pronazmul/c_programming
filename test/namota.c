#include <stdio.h>

int main(){

        int x, y;
        char sign;

        scanf("%d %d", &x, &y);

        sign = '+';
        printf("Addition %d %c %d = %d\n", x, sign, y, x+y);

        sign = '-';
        printf("Substruction %d %c %d = %d\n", x, sign, y, x-y);

        sign = '*';
        printf("Multiplication %d %c %d = %d\n", x, sign, y, x*y);

        sign = '/';
        printf("Division %d %c %d = %d\n", x, sign, y, x/y);

        sign = '%';
        printf("Modulu %d %c %d = %d\n", x, sign, y, x%y);

        sign = '+';
        printf("Pre Increment Operator %c%c%d = %d \n", sign,sign, x, ++x);
        printf("Pre Increment Operator %d = %d \n", x, x);
        printf("Pre Increment Operator %d  = %d \n|n", x, x);

        sign = '+';
        printf("Post Increment Operator %d%c%c = %d \n", x, sign,sign,  x++);
        printf("Post Increment Operator %d = %d \n", x, x);
        printf("Post Increment Operator %d  = %d \n", x, x);

    return 0;
}
