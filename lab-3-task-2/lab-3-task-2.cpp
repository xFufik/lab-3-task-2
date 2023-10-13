#include <iostream>
#include<clocale>

using namespace std;

/*
Лабораторная работа 3. Задание 2. Индивидуальный вариант 24.
Дано три числа. Для каждого числа: если число больше или равно 100, то увеличить в 1,5 раза, иначе увели-чить
в 2 раза.
*/


int main() {
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "Введите 3 числа: " << endl;
    cin >> a >> b >> c;
    if (a >= 100) {
        a = a * 1.5;
    }
    else {
        a = a * 2;
    }
    if (b >= 100) {
        b = b * 1.5;
    }
    else {
        b = b * 2;
    }
    if (c >= 100) {
        c = c * 1.5;
    }
    else {
        c = c * 2;
    }
    cout << a << " " << b << " " << c;
}