#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    bool same=true;
    cin >> s1;
    cin >> s2;
    for (int i=0; i<s1.length(); i++){
        if (s1[i] != s2[s2.size()-1-i]){
            same = false;
            break;
        }
    }
    if (same) cout << "YES";
    else cout << "NO";
    return 0;
}
