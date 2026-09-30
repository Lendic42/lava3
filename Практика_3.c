#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define D 2.54

void task1(void)
{
    int num;
    int num2;

    puts("введите число");
    scanf("%d", &num);
    printf("Введено число %d\n", num);
    puts("введите второе число");
    scanf("%d", &num2);

    printf("Сумма: %d\n", num + num2);
    printf("Разность: %d\n", num - num2);
    printf("Произведение: %d\n", num * num2);
    printf("Частное второго числа на первое: %d\n", num2 / num);
    printf("Остаток от деления второго числа на первое: %d\n", num2 % num);
}

void task2(void)
{
    int dym;
    float result;

    puts("Введите количество английских дюймов:");
    scanf("%d", &dym);
    result = D * dym;
    printf("%d английских дюймов — это %.2f см\n", dym, result);
    result = 2.32166 * dym;
    printf("%d испанских дюймов — это %.2f см\n", dym, result);
}

void task3(void)
{
    float a;
    float b;

    puts("Введите два вещественных числа a и b через пробел:");
    scanf("%f %f", &a, &b);

    printf("+-------------------------+-------------------------+-------------------------+\n");
    printf("| %23s | %23s | %23s |\n", "a * b", "a + b", "a - b");
    printf("| %9.2f * %9.2f | %9.2f + %9.2f | %9.2f - %9.2f |\n",
           a, b, a, b, a, b);
    printf("| %23.2f | %23.2f | %23.2f |\n", a * b, a + b, a - b);
    printf("+-------------------------+-------------------------+-------------------------+\n");
}

void homework(void)
{
    float candy_price;
    float cookie_price;
    float apple_price;
    float X;
    float Y;
    float Z;

    puts("Домашнее задание, вариант 27. Введите цены за кг и количество кг конфет, печенья и яблок:");
    scanf("%f %f %f %f %f %f", &candy_price, &cookie_price, &apple_price, &X, &Y, &Z);
    printf("Стоимость покупки: %.2f\n", candy_price * X + cookie_price * Y + apple_price * Z);
}

int main(void)
{
    task1();
    task2();
    task3();
    homework();
    system("pause");
    return 0;
}