#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    vector<int>a(tamanho);
    for (int i = 0; i < tamanho; ++i){
        cin >> a[i];
    }
    int res = 0;
    for (unsigned int j = 0; j < a.size(); ++j){
        if (a[j-1] > a[j]){
            res += a[j-1] + a[j];
            a[j] = a[j-1];
        }
    }
    cout << res << endl;
    return 0;
}