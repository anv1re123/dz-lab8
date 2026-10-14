#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    double sum = 0;

    printf("Введите число n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / ((2 * i + 1) * (2 * i + 1));
    }

    printf("Ответ: %.3lf", sum);

    return 0;
}