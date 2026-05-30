#include <iostream>
using namespace std;

int main(){
    int x, y, a, b;
    cin >> x >> y;
    a = (x/1)*(y/7);
    b = (x/7)*(y/1);
    if (a > b){
        cout << a << endl;
    } else{
        cout << b << endl;
    }
    return 0;
}
