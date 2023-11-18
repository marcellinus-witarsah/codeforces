#include <iostream>

using namespace std;

int main()
{
    int c, ans=0;
    string input;
    cin >> c;
    cin >> input;
    for (int i=0; i<c-1; i++){
        if (input[i] == input[i+1]) ans ++;
    }
    cout << ans;
    return 0;
}
