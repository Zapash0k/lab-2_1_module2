#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int a[size], b[size], c[size];
    int sum = 0, count = 0;

    for (int i = 0; i < size; ++i) {
        a[i] = 45 + 2 * i;
    }
    for (int i = 0; i < size; ++i) {
        b[i] = 61 - 2 * i;
    }
    for (int i = 0; i < size; ++i) {
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < size; ++i) {
        if (c[i] > 55) {
            sum += c[i];
            count++;
        }
    }
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Середнє арифметичне елементів, коди яких більше 55: " << average << endl;
    }
    else {
        cout << "Немає елементів, коди яких більше 55." << endl;
    }
    return 0;
}
