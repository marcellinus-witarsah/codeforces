#include <iostream>

using namespace std;

int main()
{
    int l, b, ans=0;
    cin >> l >> b;
    while(l <= b){
        l *= 3;
        b *= 2;
        ans++;
    }
    cout << ans;
    return 0;
}
