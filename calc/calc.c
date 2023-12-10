#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Введите оператор (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Введите два числа: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Результат: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Результат: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Результат: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Результат: %.2lf\n", result);
            } else {
                printf("Ошибка: деление на ноль\n");
            }
            break;
        default:
            printf("Ошибка: некорректный оператор\n");
    }

    return 0;
}
