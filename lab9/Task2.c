#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    long long num, temp;
    char choice;

    do {
        printf("\n========================================\n");
        printf("Введите целое число (до 18 знаков): ");
        if (scanf("%lld", &num) != 1) {
            printf("Ошибка ввода. Завершение.\n");
            break;
        }

        // 5. сумма нечетных цифр
        int sum_odd = 0;
        temp = num;
        while (temp > 0) {
            int d = temp % 10;
            if (d % 2 != 0) sum_odd += d;
            temp /= 10;
        }
        printf("5) Сумма нечетных цифр: %d\n", sum_odd);

        printf("\nПродолжить? (Да - y, нет - n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}