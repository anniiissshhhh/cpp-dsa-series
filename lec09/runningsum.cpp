#include <iostream>
using namespace std;

int running_sum(int arr[], int size) {
    int running_sum = 0;
    for (int i = 0; i < size; i++) {
        running_sum += arr[i];
    }
    return running_sum;
}

int main() {
    int size;
    cout << "size: ";
    cin >> size;

    int num[100];

    // taking input in array
    cout << "array: \n";
    for (int i = 0; i < size; i++) {
        cout << "  elem[" << i << "]: ";
        cin >> num[i];
    }

    // printing the array
    cout << "\nnum: [";
    for (int i = 0; i < size; i++) {
        cout << " " << num[i] << " ";
    }
    cout << "]";

    // printing the running sum
    cout << "\n\nrunning sum: " << running_sum(num, size) << endl;

    return 0;
}