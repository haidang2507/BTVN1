#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Nhap so thu nhat ";
    cin >> num1;
    cout << "Nhap phep tinh (+, -, *, /): ";
    cin >> op;
    cout << "Nhap so thu hai ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Ket qua " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Ket qua " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Ket qua " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Ket qua " << num1 / num2 << endl;
            else
                cout << "Phep chia khong thoa man" << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}

