#include <iostream>

using namespace std;

int main()
{
    int n, n_a=0, n_d=0;
    char x;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        if (x == 'A') n_a++;
        if (x == 'D') n_d++;
    }
    if (n_a > n_d) cout << "Anton";
    else if (n_a < n_d) cout << "Danik";
    else cout << "Friendship";
    return 0;
}
