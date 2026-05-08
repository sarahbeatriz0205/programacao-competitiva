#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {7, 5, 16, 8};
    v.push_back(25);
    v.push_back(13);
    v[3]=6;
    cout << "Tamanho do vetor: " << v.size() << endl;
    cout << "Capacidade do vetor: " << v.capacity() << endl;
    cout << "Elementos do vetor: ";
    for(int n : v) { // equivalente ao for x in list do python
    cout << n << ' ';
    }
    cout << endl;
}