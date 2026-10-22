#include <stdio.h>
#include <math.h>
#include <locale.h>

int zad0();
int zad1();
int zad1A();
int zad2();
int zad3();

int main() {
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    zad0();
    zad1();
    zad1A();
    zad2();
    zad3();

    return 0;
}

int zad0() {
    int n, i;
    char c;

    printf("\nЗадание 0\n");
    printf("Введите количество символов: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    printf("Введите символ: ");
    scanf("%c", &c);

    printf("1) Базовый вывод:\n");
    for (i = 1; i <= n; i++) putchar(c);

    printf("\n2) Со знаком '+' в начале и в конце:\n");
    putchar('+');
    for (i = 1; i <= n; i++) putchar(c);
    putchar('+');

    printf("\n3) Первая половина одним, вторая другим:\n");
    for (i = 1; i <= n; i++) {
        if (i <= n / 2) putchar(c);
        else putchar('*');
    }

    printf("\n4) После каждого символа '!':\n");
    for (i = 1; i <= n; i++) {
        putchar(c);
        putchar('!');
    }
    printf("\n");
    while (getchar() != '\n');

    return 0;
}

int zad1() {
    int n, m, s = 0, k = 1;
    printf("\nЗадание 1\n");

    printf("Введите m: ");
    scanf("%d", &m);
    printf("Введите n: ");
    scanf("%d", &n);

    for (int i = m; i >= n; i--) {
        s += i;
        printf("выполнено %d раз\n", k++);
    }
    printf("результат %d\n", s);

    while (getchar() != '\n');
    return 0;
}

int zad1A() {
    int n, i, p = 1;
    printf("\nЗадание 1А\n");

    printf("Введите n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("2^%d = %d\n", i, p);
        p *= 2;
    }

    while (getchar() != '\n');
    return 0;
}

int zad2() {
    double a, b, h, x, y;
    printf("\nЗадание 2\n");
    printf("Функция: y = x^3 + 3x^2 - 3\n");

    printf("Введите начало a: ");
    scanf("%lf", &a);
    printf("Введите конец b: ");
    scanf("%lf", &b);
    printf("Введите шаг h: ");
    scanf("%lf", &h);

    printf("|   x   |  f(x)  |\n");
    printf("|-------|--------|\n");

    for (x = a; x <= b + 0.000001; x += h) {
        y = pow(x, 3) + 3 * pow(x, 2) - 3;
        printf("| %5.2f | %6.2f |\n", x, y);
    }

    while (getchar() != '\n');
    return 0;
}

int zad3() {
    int N, i;
    double sum = 0;
    printf("\nЗадание 3\n");

    printf("Введите целое N: ");
    scanf("%d", &N);

    for (i = N; i <= 2 * N; i++) {
        sum += pow(i, 2);
    }
    printf("Результат: %.2f\n", sum);

    while (getchar() != '\n');
    return 0;
}