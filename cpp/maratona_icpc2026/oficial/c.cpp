// Problema C - Câmbio
#include <iostream>
using namespace std;

int main(){
    int t, c, k, conv;
    cin >> t >> c >> k;
    conv = t*k;

    if (conv <= c){
        cout << conv;
    }
    else {
        cout << c;
    }
    return 0;
}