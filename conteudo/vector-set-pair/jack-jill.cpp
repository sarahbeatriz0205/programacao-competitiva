#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> jack;
    int N, M, qtd, n;
    while (cin >> N >> M, N && M){
        jack.clear();
    for (int i=0 ; i<N; i++){
        cin >> n;
        jack.insert(n);
    }
    qtd=0;
    for (int i=0 ; i<M; i++){
        cin >> n;
    if (jack.find(n)!=jack.end())
        qtd++;
    }
    cout << qtd << endl;
    }
}