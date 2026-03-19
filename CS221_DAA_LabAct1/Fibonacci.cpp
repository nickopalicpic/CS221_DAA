// 1. Fibonacci number 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    if (n == 0) {
        cout << "0-th Fibonacci number is: 0\n";
        return 0;
    }
    
    long long pr2 = 0;
    long long pr1 = 1;
    long long c = 1;
    
    for (int i = 2; i <= n; i++) {
        c = pr1 + pr2;
        pr2 = pr1;
        pr1 = c;
    }
    
    
    cout << n << "-th Fibonacci number is: " << c << "\n";
    return 0;
}