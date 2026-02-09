#include <iostream>
using namespace std;

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "How many terms? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fib(i);
        if (i < n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
