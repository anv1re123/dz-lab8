# Домашнее задание к работе 8

## Условие задачи
Вычислить с использованием цикла `for` значение для заданного `n`:

<img width="224" height="74" alt="{D3716D3B-4CCE-4770-BC1A-DA82486671B9}" src="https://github.com/user-attachments/assets/d41bdddd-0958-4f6b-9bbb-205f5d356d2f" />


## 1. Алгоритм и блок-схема

1. Начало алгоритма.
2. Ввести номера команд `A` и `B`.
3. Проверить условие: номер команды `A` чётный, а номер команды `B` нечётный, или наоборот.
   - Если условие выполняется, присвоить переменной `res` значение `1`.
   - Если условие не выполняется, присвоить переменной `res` значение `0`.
4. Вывести значение переменной `res` на экран.
5. Конец алгоритма.

### Блок-схема

<img width="581" height="800" alt="{4FDA9D4B-FAAD-4D60-B90C-9B6B2BA171DD}" src="https://github.com/user-attachments/assets/460dd4c0-ff74-43e5-8679-4627903851f4" />



[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22_iuYZesH0EMXVjER_gjp%22%3E3ZhLb6MwEIB%2FDVK7Ulc8Qzg2j3YvK62Uw%2B4eXXDAqsGRMU2yv37H2LzTbUrZSGkOxDMeP5hvPAwYzjI9PHK0S76zCFPDNqOD4awM27Yc24Q%2FqTkqzSywlCLmJNJGjWJD%2FmCt1OPigkQ47xgKxqggu64yZFmGQ9HRIc7Zvmu2ZbS76g7FeKDYhIgOtT9JJBKlndt%2Bo%2F%2BGSZxUK1uzQPWkqDLWd5InKGL7lspZG86SMyZUKz0sMZXOq%2Fyixj280ltvjONMnDMgF4iL4SA9Ty6O1S3DMPAuCIt9QgTe7FAoe%2FYAGHSJSClIFjRjjiICEy0ZZRx0GcvkqC2htFJR6Zq7CPHnG8N2HsqfYS%2Fr9q20Z80UXXuz%2FCl71Zb2asMviBZ6w8bKNIKVvC5MA3Y296s2XBflda0HYS7woXXj2lWPmKVY8COYJC2anka3b8hbFU49i%2BNoWcd3oEWk4y6uZ27QQEPTOU2KZLviLFLQiyjFlAGJ9Hp4ZaNgzE7AcHsw7C4MawoakFkiIgjLziHCE5Y%2BFfn1sCAgGmvbmAfGvQvtTMrOwyhCwfsJOeYUhBANz4LDiizCcpB5PYDyIi2RrOS9qLYNVqZVtmA98%2BZGDvkiHdL03mrVyb7bUXj9IV573sVbZ0yN13UnSYefly6p2ZI22YmeVW8cPs%2BbgA4rxOd%2BWpWHbqLnVe%2B41NmvKo6nAIKz6PNWefe6mpNXVfF5ZcU3u1R95%2FtTINI4cDR4%2BRgiYwUPq1BsSvg2SZhlo0XGRcJiliG6brSLbmpssYVYuZcvSSA%2BURY%2B136HhWIseuXo0JkcUyTIS%2FcmPuQZZ5xnWiXzf%2FMMPhDxS1p%2B9bT0uzKG9uqgJymFoxaG3uyUkx%2FwqB76gxFwSxOuQTdc6yxUTaGcpkf1uNTbOA%2BVOw5Vr56%2BYCA3dWI%2Frbj6hfFCQe6N9Fy9%2F4ue%2FvBSbpmNPfuX98qkpxiWQ8eWwU6ezvz1Q271Drnne20%2Fv2nvuF6Pi9rB6EzgX1smaBetpz8kqbLCfgde7ew786vt%2BO7ZibsyYdttjjs5%2Bb1hMfP%2BiflN%2B9ncnDYs5uPCog3ngjGh6%2BbpEx2IzVde5cfmW7mz%2Fgs%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

Программа написана на языке **C++**.

```cpp
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
```
## 3. Результаты работы программы
```text
Введите число n: 5
Ответ: 0,192
```
## 4. Информация о разработчике
```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
