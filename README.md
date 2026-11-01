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

<img width="682" height="821" alt="{28EF693D-FC3C-4830-A568-CE507FC23735}" src="https://github.com/user-attachments/assets/b46c110c-21f9-465a-8d25-65d7ee4df106" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22_iuYZesH0EMXVjER_gjp%22%3E7VlLb9swDP41BtoBHRw%2Fk2PzaHcZMKCHbUfVVmwhshXIcpPs14%2By5HfaJq5XdEFzcESKVCR%2BnyjKMexFsr%2FnaBt%2FZyGmhmWGe8NeGpY1cTwfvqTmoDS%2BN1WKiJNQG9WKB%2FIHa6WptTkJcdYyFIxRQbZtZcDSFAeipUOcs13bbM1o%2B1e3KMI9xUOAaF%2F7k4QiVtqp5df6b5hEcfnLE2%2BmehJUGuuVZDEK2a6hsleGveCMCdVK9gtMZfDKuCi%2Fu2d6q4lxnIpTHDKBuOg76XEycSiXDG4QXRDmu5gI%2FLBFgezZAcCgi0VCQZpAM%2BIoJDDQglHGQZeyVHqtCaWlisrQ3ISIb64My74rPoa1qNrX0p7VQ7TtzeKj7FVb2meCsw0%2Bx0Mt8QnRXC%2FRWJrGbCmfc9OAtUz9sg3PefFcaSfMBd43QqWDe49ZggU%2FgEncwN%2FVYO9qrkxKAuhRbFvLekfMtIg0U6Nq5BpMaGg8j2NL0m1%2BErbQiyjFlAF2ySUjnA6CzzsCn9OBz2rDNxkDP8heIRGEpadgyGOWPObZJaNHQDRWljGdGbcOtFMp23eDMJ2dj6ltjoEposFJcLI8DbF0Mi8Z0ixPChCXcvWqbYGVOSlaMEPz6kq6fJEhrHuvtepo3%2FUgQvh9QljTNiGqPK4J4TijJOlPPnS2eMEG0uTCSGfuKxvcdUfAk%2BXi89Q9sslHOnc7W7LKyRpCbwwIcRp%2BVsR1RXyrK1%2F5VNWxW1TH3nvVwr4%2FBqgaQBz2rnZ9kFnOg5K89QWpiT2M8qBFxkXMIpYiuqq183bCbrAB2HUrr6AgPlIWbN6AFEwtwqJT7PfDzzFFgjy1l%2F2mWNrDYtm4kPyzWOI9Eb%2Bk5VdXS79LY2gv93qQQjhoYYz4t4r1N2CgXX8wAoGst8SsvSWq3FgOocKsvTpIVtM4DVxnGLid28oH2iznJk6KHjGdo2ATFfPqpO0j0Fc1fTd1OvoFwjttS3cgctX8PxBoxzJc8F6B9Ibmt%2F8hjqNmKpggOjQMtjIDZc8nskknkbm%2B20TmVXvbcTtIqhkMznb%2BpWW7l7PXubmwT5%2FmBef4y1NVHlpn0EuDfWN%2BtWzfOflwLE3Yep3h1rl3Li0990WavWrvTc1xaTkdRssmOB%2BIk30W6TvW%2BMkcxPrfExX5%2Bj8oe%2FUX%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
