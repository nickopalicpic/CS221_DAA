// 2. Stair
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    
    if (n == 0 || n == 1) {
        cout << "Number of distinct ways: 1";
        return 0;
    }
    
    int w[n + 1];
    w[0] = 1;
    w[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        w[i] = w[i - 1] + w[i - 2];
    }
    
    cout << "Number of distinct ways: " << w[n] << endl;
    return 0;
}