#include <iostream>

using namespace std;

int main()
{
    int c, h, x, ans=0;
    cin >> c >> h;
    for (int i=0; i<c; i++){
        cin >> x;
        if (x <= h){
            ans++;
        }
        else{
            ans+=2;
        }
    }
    cout << ans;
    return 0;
}
