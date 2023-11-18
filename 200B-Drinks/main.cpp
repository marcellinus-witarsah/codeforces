#include <iostream>

using namespace std;

int main()
{
    double ans;
    int c, x;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> x;
        ans += x;
    }
    cout << ans/c;
    return 0;
}

