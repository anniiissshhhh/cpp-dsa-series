#include <iostream>
using namespace std;

bool is_prime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
        return true;
    }
}

int main() {
    int num;
    cout << "num: ";
    cin >> num;

    is_prime(num) ? cout << num << " is a prime number" : cout << num << " is not a prime number";
    return 0;
}