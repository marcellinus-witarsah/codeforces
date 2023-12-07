#include <iostream>

using namespace std;

int main()
{
    int c, x, y, z;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> x >> y >> z;
        cout << ((x + y == z || x + z == y || y + z == x) ? "YES\n" : "NO\n"); ;
    }
    return 0;
}
