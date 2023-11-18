#include <iostream>

using namespace std;

int main()
{
    long long int x;
    int c=0;
    cin >> x;
    while (x > 0){
        if (x%10 == 4 || x%10 == 7){
            c++;
        }
        x /= 10;
    }
    if (c==7 || c==4) cout << "YES";
    else cout << "NO";
    return 0;
}
