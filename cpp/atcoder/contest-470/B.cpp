#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s;
    vector<int> c;
    cin >> n;
    
    for (int i=0; i < n; i++){
        cin >> s;
        c.push_back(s);
    }
    
    int inc = 0;
    for (int j : c){
        int k = 0;
        if (k < n){
            // questão errada por conta dessa condição
            if (j == c[k+1] || j == c[k-1]){
                inc++;
            }
            k++; 
        }
        else {
            break;
        }
        
    }
    
    int ans = n - inc;
    cout << ans << endl;

    return 0;
}