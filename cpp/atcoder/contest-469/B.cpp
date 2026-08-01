#include <iostream>
#include <vector>
using namespace std;

// busque solução mais horrível e falhe miseravelmente

int main()
{
    int n;
    char s;
    int ans = 0;
    vector<char> c;
    
    cin >> n;
    
    for (int i=0; i < n; i++){
        cin >> s;
        c.push_back(s);
        
    }
    
    if (c.size() == 1 && c[0] == 'x'){
            ans += 1;
    }
    else {
        if (c[0] == 'x' && c[1] == 'x'){
        ans += 1;
        }
        if (c[n-1] == 'x' && c[n-2] == 'x'){
            ans += 1;
        }
    }
    
    for (int j = 1; j < n-1; j++){
        if (c[j] == 'x' && c[j+1] == 'x' && c[j-1] == 'x'){
            ans += 1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}