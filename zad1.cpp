#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int s, n;
    cout << "Enter Kirito's power and the number of Dragons:";
    cin >> s >> n;
    int x[1000], y[1000];

    for (int i = 0; i < n; ++i) {
        cout << "Enter the Dragon's power and reward for victory:";
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (x[j] > x[j + 1]) {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (s > x[i]) {
            s += y[i];
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

