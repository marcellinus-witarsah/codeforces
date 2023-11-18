#include <iostream>

using namespace std;

int main()
{
    int c, ans=0, p, q;
    cin >> c;
    for (int i=0; i<c; i++){
        cin  >> p >> q;
        if (q-p >= 2){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
