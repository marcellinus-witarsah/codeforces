#include <iostream>

using namespace std;

int main()
{
    int chars[26], n_unique = 0;
    for (int i=0; i<26; i++) chars[i]=0;

    string input;
    cin >> input;

    for (int i=0; i<input.size(); i++){
        if (chars[input[i]-97] == 0){
            chars[input[i]-97] = 1;
            n_unique++;
        }
    }
    if (n_unique % 2 == 0) cout<< "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
