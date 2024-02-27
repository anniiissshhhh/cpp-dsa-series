#include <iostream>
using namespace std;

int main() {
    // subtract the product and sum of an integer
    // ip- 234
    // op- 15
    // explanation
    // 2 * 3 * 4 = 24
    // 2 + 3 + 4 = 9
    // 24 - 9 = 15

    // ---------- solution ----------
    int n;
    cout << "n: ";
    cin >> n;

    int sum = 0;
    int product = 1;

    int ans;

    while (n != 0) {
        sum += n % 10;
        product *= n % 10;

        n /= 10;
    }

    ans = product - sum;

    cout << ans;
    return 0;
}