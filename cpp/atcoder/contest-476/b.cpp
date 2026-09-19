#include <iostream>
using namespace std;

int main() {
    string s, t; int n;
    cin >> n; cin >> s >> t;
    
    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    else {
       for (int i=0; i < n; i++){
            if (t[i] == '*') { t[i] = s[i]; }   
        } 
    }
    
    if (s == t) { cout << "Yes" << endl; }
    else { cout << "No" << endl; }

    return 0;
}