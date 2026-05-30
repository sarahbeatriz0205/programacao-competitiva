#include <iostream>
#include <algorithm>
using namespace std;
// antes de enviar a string, ordenar 
// dica: ver a ocorrência dos caracteres

int main(){
    string s, sa, sp;
    int q, t, k;
    int x, y;
    for (int i = 0; i < q; i++){
        cin >> t >> k >> s;
        if (t==1){
            sa = sa + s;
        } else if (t == 2){
            sp = sp + s;
        }
        else {
            sort(sa.begin(), sa.end());
            sort(sp.begin(), sp.end());
            
        }
    }
}