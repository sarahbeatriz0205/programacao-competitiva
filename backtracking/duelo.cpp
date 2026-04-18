#include <iostream>
#include <vector>
using namespace std;

struct carta{
    int ataque, defesa, habilidade;
};

bool backtracking(vector<carta> &cartas, int atual, carta p, int qtd){
    if (p.ataque == 0 and p.defesa == 0 and p.habilidade == 0 and qtd>1){ // se todos os atributos forem iguais a zero
        return true;
    }
    if (atual < 0){ // se ultrapassar o num de cartas e não atingir o valor esperado (0)
        return false;
    }
    // representa oq ainda falta para zerar depois de incluir a carta atual
    carta nova_p = {p.ataque - cartas[atual].ataque,
                    p.defesa - cartas[atual].defesa,
                    p.habilidade - cartas[atual].habilidade};
    // cartas[0] → { ataque, defesa, habilidade }
    // cartas[1] → { ataque, defesa, habilidade }
    // cartas[2] → { ataque, defesa, habilidade }
    return backtracking(cartas, atual - 1, nova_p, qtd+1) or backtracking(cartas, atual - 1, p, qtd);
}

int main() {
    int num_cartas; cin >> num_cartas;
    carta p; cin >> p.ataque >> p.defesa >> p.habilidade; // atributos do prassódia
    vector<carta> cartas(num_cartas);
    for  (auto &x: cartas) {cin >> x.ataque >> x.defesa >> x.habilidade;}
    cout << (backtracking(cartas, num_cartas-1, p, 0)?"Y\n":"N\n");
    return 0;
}