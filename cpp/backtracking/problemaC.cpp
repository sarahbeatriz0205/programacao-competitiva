#include <iostream>
#include <vector>
using namespace std;

int backtracking(vector<int> &p, int i){
    if (i >= p.size()){
        return 0;
    }
    
    int op1 = backtracking(p, i*2);
    int op2 = backtracking(p, (i*2) + 1);

    return p[i] + min(op1, op2);
}
    
int main(){
    int n;
    cin >> n;

    vector<int> p(1<<n);
    
    for (int j=1; j < 1<<n; j++){
        cin >> p[j];
    }

    int ans = backtracking(p, 1);
    cout << ans << endl;
    return 0;
}
    