#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int maior_resposta_possivel = 1, maior_resposta_atual = 1;
    for (int i=1; i < s.size(); ++i){
        if (s[i] == s[i-1]){
            maior_resposta_atual++;
            if (maior_resposta_atual > maior_resposta_possivel){
                maior_resposta_possivel = maior_resposta_atual;
            }
        }
        else{
            maior_resposta_atual = 1;
        }
    }
    cout << maior_resposta_possivel << endl;
    return 0;
}