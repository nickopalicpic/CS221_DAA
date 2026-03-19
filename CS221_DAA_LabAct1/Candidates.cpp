// 3. Candidates 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combinations(vector<int>& n, int tar, vector<int>& cur, int index) {
    if (tar == 0) {
        cout << "{ ";
        for (int x: cur) cout << x << " ";
        cout << "}" << endl;
    }
    for(int i = index; i <n.size(); i++) {
        if(n[i] > tar) break;
        
        cur.push_back(n[i]);
        combinations(n, tar - n[i], cur, i);
        cur.pop_back();
    }
}
int main(){
    int num, tar;
    
    cout << "Enter number of candidates: ";
    cin >> num;
    
    vector<int> n(num);
    cout << "Enter the candidates: ";
    for(int i = 0; i < num; i++) {
        cin >> n[i];
    }
    
    cout << "Enter the target: ";
    cin >> tar;
    
    sort(n.begin(), n.end());
    vector<int> cur;
    cout << "Combinations are: " << endl;
    combinations(n, tar, cur, 0);
    
    return 0;
}