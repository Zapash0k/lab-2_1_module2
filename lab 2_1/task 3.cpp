#include <iostream>
#include <vector>
using namespace std;

int main() {
    double arr1[4][5] = {
        {1.5, -2.3, 3.1, 4.0, -1.2},
        {2.1, 3.5, -4.6, 5.0, 6.7},
        {-3.2, 4.1, -5.0, 6.0, 2.9},
        {7.3, -2.1, 3.6, -4.5, 1.1}
    };
    vector<double> sum_positive(4, 0.0);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr1[i][j] > 0) {
                sum_positive[i] += arr1[i][j];
            }
        }
    }
    cout << "Сума додатних елементів для кожного рядка (4x5):\n";
    for (int i = 0; i < 4; i++) {
        cout << "Рядок " << i + 1 << ": " << sum_positive[i] << endl;
    }

    int arr2[5][4] = {
        {1, -3, 4, -2},
        {-5, 6, -7, 8},
        {-1, -2, 3, 4},
        {5, -6, 7, -8},
        {9, -10, 11, -12}
    };
    vector<double> avg_negative(4, 0.0);
    vector<int> negative_count(4, 0);
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 5; i++) {
            if (arr2[i][j] < 0) {
                avg_negative[j] += arr2[i][j];
                negative_count[j]++;
            }
        }
        if (negative_count[j] > 0) {
            avg_negative[j] /= negative_count[j];
        }
    }
    cout << "\nСереднє арифметичне від'ємних елементів для кожного стовпця (5x4):\n";
    for (int j = 0; j < 4; j++) {
        cout << "Стовпець " << j + 1 << ": " << avg_negative[j] << endl;
    }

    return 0;
}
