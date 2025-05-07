#include <iostream>
#include <math.h>

using std::cout;
using std::cin;

// Tìm khoảng cách lớn nhất giữa hai phần tử có giá trị khác nhau lớn nhất
int max_distance(int size, int* array_pointer){
    int maxDistance = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            int distance = j - i;
            if (abs(array_pointer[i] - array_pointer[j]) > abs(array_pointer[maxDistance] - array_pointer[maxDistance + 1])) {
                maxDistance = i;
            }
        }
    }

    return maxDistance;
}

int main(){
    int n;
    cout << "Nhập số phần tử n: ";
    cin >> n;

    int* p = new int[n];

    // Nhập n phần tử
    cout << "Nhập " << n << " phần tử:\n";
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    // Xuất n phần tử
    cout << "Các phần tử đã nhập: ";
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
    cout << '\n';


    cout << "Khoảng cách lớn nhất giữa hai phần tử có giá trị khác nhau lớn nhất: " << max_distance(n, p) << '\n';

    // Giải phóng bộ nhớ
    delete[] p;

    return 0;
}