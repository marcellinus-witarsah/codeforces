#include <iostream>

using namespace std;

int main()
{
    int c, x, sum_levels=0;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> x;
        sum_levels += x;
    }
    string ans = (sum_levels >= 1) ? "HARD": "EASY";
    cout << ans;
    return 0;
}
