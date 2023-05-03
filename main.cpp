#include <iostream>
using namespace std;

int main() {
    int number1, number2, sum = 0;
    cout << "Отправь мне 2 числа для указания диапазона: ";
    cin >> number1 >> number2;
    for (int i = min(number1, number2); i <= max(number1, number2); i++) {
        sum += i;
    }
    cout << "Сумма чисел в заданном диапазоне - " << sum;
}
