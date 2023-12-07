#include <iostream>

using namespace std;

int main()
{
    string x;
    int c;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> x;
        if ((x[0] == 'y' || x[0] == 'Y')
            && (x[1] == 'e' || x[1] == 'E')
            && (x[2] == 's' || x[2] == 'S')){
                cout << "YES" <<endl;
            }
        else {
            cout << "NO" <<endl;
        }
    }
    return 0;
}
