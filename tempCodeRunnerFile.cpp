#include <iostream>
using namespace std;

int sumIter(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}

int sumRec(int a[], int n) {
    if (n == 0) return 0;
    return a[n - 1] + sumRec(a, n - 1);
}

int main() {
    int n, a[100];
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Iterative sum: " << sumIter(a, n) << endl;
    cout << "Recursive sum: " << sumRec(a, n) << endl;
    return 0;
}
