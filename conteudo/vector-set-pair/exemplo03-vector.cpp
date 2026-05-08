// Método que já especifica o tamanho do array 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
        cout << "Vector: ";
    for(const int& x: v) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}