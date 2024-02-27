#include <iostream>
using namespace std;

void pattern2(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern3(int size) {
    int count = 1;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

void pattern4(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern5(int size) {
    int count = 1;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

void pattern6(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern7(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
}

void pattern8(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
}

void pattern9(int size) {
    char ch = 'A';
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

void pattern10(int size) {
    char ch = 'A';
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << char(ch + i + j - 2) << " ";
        }

        cout << endl;
    }
}

void pattern11(int size) {
    char ch = 'A';
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char(ch + i - 1) << " ";
        }

        cout << endl;
    }
}

void pattern12(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            cout << " "
                 << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern13(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " "
                 << " ";
        }

        for (int j = 1; j <= size - i + 1; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern14(int size) {
    for (int i = 1; i <= size; i++) {
        // printing spaces
        for (int j = 1; j <= size - i; j++) {
            cout << " "
                 << " ";
        }

        // print numbers triangle(left)
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // print number triangle(right)
        for (int j = 1; j <= i - 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern15(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i + 1; j++) {
            cout << j << " ";
        }

        for (int j = 1; j <= i - 1; j++) {
            cout << "* ";
        }

        for (int j = 1; j <= i - 1; j++) {
            cout << "* ";
        }

        for (int j = 1; j <= size - i + 1; j++) {
            cout << size - j + 1 << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "-------- pattern2 --------\n";
    pattern2(4);
    cout << endl;

    cout << "-------- pattern3 --------\n";
    pattern3(4);
    cout << endl;

    cout << "-------- pattern4 --------\n";
    pattern4(4);
    cout << endl;

    cout << "-------- pattern5 --------\n";
    pattern5(4);
    cout << endl;

    cout << "-------- pattern6 --------\n";
    pattern6(4);
    cout << endl;

    cout << "-------- pattern7 --------\n";
    pattern7(4);
    cout << endl;

    cout << "-------- pattern8 --------\n";
    pattern8(4);
    cout << endl;

    cout << "-------- pattern9 --------\n";
    pattern9(4);
    cout << endl;

    cout << "-------- pattern10 --------\n";
    pattern10(4);
    cout << endl;

    cout << "-------- pattern11 --------\n";
    pattern11(4);
    cout << endl;

    cout << "-------- pattern12 --------\n";
    pattern12(4);
    cout << endl;

    cout << "-------- pattern13 --------\n";
    pattern13(4);
    cout << endl;

    cout << "-------- pattern14 --------\n";
    pattern14(4);
    cout << endl;

    cout << "-------- pattern15 --------\n";
    pattern15(4);
    cout << endl;
    return 0;
}