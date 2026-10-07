#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0; // index for non-zero
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    moveZeroes(arr, n);

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}


