#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> fila(n);
    for (int i=0; i < n; i++){
        cin >> fila[i];
    }
    cin >> m;
    vector<int> saidas(m);
    for (int j=0; j < m; j++){
        cin >>  saidas[j];
    }

    vector<int> atual;
    for (int a=0; a < fila.size(); a++){
        for (int b=0; b < saidas.size(); b++){
            if (fila[a] == saidas[b]){
                atual.push_back(fila[a+1]);
            }
        } 
    }

    for (int x : atual) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}