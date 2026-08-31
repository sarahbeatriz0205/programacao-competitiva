// Problema C - Parque de Diversões
#include <iostream>
using namespace std;

int main(){
    int n, h, a;
    int c = 0;
    cin >> n >> h;

    for (int i=0; i < n; i++){
        cin >> a;
        if (h >= a){
            c++;
        }
    }
    cout << c << endl;
}