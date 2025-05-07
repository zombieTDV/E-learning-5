#include <iostream>

using std::cout;
using std::cin;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void ascent_sort(int array[], int size) {
    for (int i = 0; i < (size-1); i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                swap(array[i], array[j]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhập số phần tử n: ";
    cin >> n;

    int* q = new int[n];

    // Nhập n phần tử
    cout << "Nhập " << n << " phần tử:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Nhập phần tử thứ " << i << ": ";
        cin >> q[i];
    }

    // Xuất n phần tử
    cout << "\nCác phần tử đã nhập: ";
    for (int i = 0; i < n; ++i) {
        cout << q[i] << " ";
    }
    cout << '\n';

    // Sắp xếp dãy số tăng dần
    ascent_sort(q, n);

    // Xuất dãy số sau khi sắp xếp
    cout << "\nDãy số sau khi sắp xếp tăng dần: ";
    for (int i = 0; i < n; ++i) {
        cout << q[i] << " ";
    }
    cout << '\n';

    // Loại bỏ các phần tử là số lẻ
    int newSize = 0;
    for (int i = 0; i < n; ++i) {
        if (q[i] % 2 == 0) {
            q[newSize++] = q[i];
        }
    }

    // Xuất dãy số sau khi loại bỏ số lẻ
    cout << "\nDãy số sau khi loại bỏ số lẻ: ";
    for (int i = 0; i < newSize; ++i) {
        cout << q[i] << " ";
    }
    cout << '\n';

    // Giải phóng bộ nhớ
    delete[] q;

    return 0;
}