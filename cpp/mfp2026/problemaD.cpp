#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int mdc(int a, int b){
    if (b == 0){
        return a;
    }
    return mdc( b, a%b );
}

int main(){
    int n, a;
    int soma = 0;
    vector<int> figs;
    cin >> n;
    for (int b=0; b<n; b++){
        cin >> a;
        figs.push_back(a);
    }
    int m = figs[0];
    for (int y : figs){
        m = mdc(m, y);
    }
    for (int x : figs){
        soma += x/m;
    }

    cout << soma << endl;
    return 0;
}