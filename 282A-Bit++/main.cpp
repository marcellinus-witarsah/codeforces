#include <iostream>

using namespace std;

int main()
{
    int c, ans=0;
    string input;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> input;
        if (input == "++X" || input == "X++"){
            ans++;
        }
        else if (input == "--X" || input == "X--"){
            ans--;
        }
    }
    cout << ans;
    return 0;
}
