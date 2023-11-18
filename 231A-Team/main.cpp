#include <iostream>

using namespace std;

int main()
{
    int c, x, y, z, ans=0;
    cin >> c;
    for (int i=0; i<c; i++){
        cin>> x >> y >> z;
        if ((x + y + z) >= 2){
            ans ++;
        }
    }
    cout << ans;
    return 0;
}
