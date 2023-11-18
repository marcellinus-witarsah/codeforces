#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int n_drinks = k * l / nl;
    int n_limes = c * d;
    int n_salts = p / np;
    int ans = min(min(n_drinks, n_limes), n_salts) / n;
    cout << ans;

    return 0;
}
