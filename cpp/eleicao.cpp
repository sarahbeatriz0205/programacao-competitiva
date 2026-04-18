#include <iostream>
#include <map> // equivalente ao dict do python
using namespace std;


int main(){
    map<string, int> nomes;
    int votos;
    cin >> votos;
    for (int i = 0; i < votos; ++i){
        string nome;
        cin >> nome;
        auto it = nomes.find(nome); // busca nome em nomes -. esse iterator já é um par (chave, valor) 
        if (it != nomes.end()){ // se ele chegou ao final do map, significa que ele encontrou
            //nomes[nome] = nomes[nome] + 1; // incremente a qtd de votos desse cara
            it->second = it->second + 1;
        } else{ // senão, insira esse nome com 1 voto
            nomes.insert({nome, 1});
        }

    }
    string res;
    int qtd = 0;
    for (auto &x: nomes){
        if (x.second > qtd){
            qtd = x.second; // second: valor
            res = x.first; // first: chave
        }
    }
    cout << res << endl;
    return 0;
}