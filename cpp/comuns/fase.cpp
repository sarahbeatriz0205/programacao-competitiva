#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num_comp;
    int num_min;
    int p;
    cin >> num_comp;
    cin >> num_min;
    vector<int> pontuacoes;
    for (int i=0; i < num_comp; ++i){
        cin >> p;
        pontuacoes.push_back(p);
    }
    sort(pontuacoes.begin(), pontuacoes.end());
    int tam_total = pontuacoes.size();
    
}