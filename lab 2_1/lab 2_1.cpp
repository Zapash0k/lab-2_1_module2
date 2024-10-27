#include <iostream>
// Варіант 8, Дійсний, 10, i + 5.8, i – 2.0, По спаданню
int main()
{
    float a[10];
    for (int i = 0; i <= 9; i++) {
        if (i % 2 == 0) {
            a[i] = i + 5.8;
        }
        else
        {
            a[i] = i - 2.0;
        }
    }
    int n = 10;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}
