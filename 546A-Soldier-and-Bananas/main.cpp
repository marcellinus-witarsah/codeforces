#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int total = (2*k + (k * (w-1))) * w / 2;
    if (total < n){
        cout << 0;
    }
    else{
        cout << total - n;
    }
    return 0;
}

