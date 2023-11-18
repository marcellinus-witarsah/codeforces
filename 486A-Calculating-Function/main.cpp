#include <iostream>

using namespace std;

int main()
{
    /*formula = n /2 * (2a + b * (n-1))*/
    long long int n, sum_neg, sum_pos;
    cin >> n;
    if (n % 2 == 0){
        n /= 2;
        sum_pos = (4 + (2 * (n-1))) * n / 2;
        sum_neg = (2 + (2 * (n-1))) * n / 2;
        sum_neg *= -1;
    }
    else {
        long long int n_neg = n/2+1, n_pos = n/2;
        sum_pos = (4 + (2 * (n_pos - 1))) * n_pos / 2;
        sum_neg = (2 + (2 * (n_neg - 1))) * (n_neg) / 2;
        sum_neg *= -1;
    }
    cout << sum_pos + sum_neg;
    return 0;
}
