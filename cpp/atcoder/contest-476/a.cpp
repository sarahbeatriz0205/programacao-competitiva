#include <iostream>
using namespace std;

int main() {
    string s = ""; cin >> s;
    if (s[s.length()-1] == 'e') { s += 'r'; } else { s += "er"; }
    cout << s << endl;
    return 0;
}