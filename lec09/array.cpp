#include <iostream>
using namespace std;

void print_int_array(int arr[], int length_of_arr) {
    // printing the array
    cout << "arr: ";
    for (int i = 0; i < length_of_arr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_char_array(char arr[], int length_of_arr) {
    // printing the array
    cout << "arr: ";
    for (int i = 0; i < length_of_arr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_int_array(arr, 10);

    char ch[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    print_char_array(ch, 8);
    return 0;
}