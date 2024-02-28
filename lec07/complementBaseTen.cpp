#include <iostream>
using namespace std;

int complement_base_ten(int n) {
    int m = n;
    int mask = 0;

    // loop to make mask
    while (m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    // answer
    int ans = (~n) & mask;

    return ans;
}

// 0000 0000 0000 0101 // n = 5
// 0000 0000 0000 0101 // m = n
// right shifting m till it becomes 0000 0000 0000 0000 (0)
// and making a mask-
// mask = 0 (initial)
// left shifting by 1 and doing OR(|) with 1
// it makes mask 0000 0000 0000 0001
// this will happen 3 times in this case,
// as that loop which is making mask will run 3 times
// so the final mask will be
// 0000 0000 0000 0111 // mask
// 1111 1111 1111 1010 // ~n = ~5
// 0000 0000 0000 0010 // ans

int main() {
    cout << complement_base_ten(5);  // outputs 2
    return 0;
}