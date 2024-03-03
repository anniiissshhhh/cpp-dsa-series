#include <iostream>
using namespace std;

int calculator(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
            break;

        case '-':
            return a - b;
            break;

        case '*':
            return a * b;
            break;

        case '/':
            return a / b;
            break;

        case '%':
            return a % b;
            break;

        default:
            return 0;
            break;
    }
}

int main() {
    int a;
    cout << "a: ";
    cin >> a;

    int b;
    cout << "b: ";
    cin >> b;

    char op;
    cout << "op: ";
    cin >> op;

    cout << a << " " << op << " " << b << " = " << calculator(a, b, op);

    return 0;
}