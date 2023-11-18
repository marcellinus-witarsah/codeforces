#include <iostream>

using namespace std;

int main()
{
    int c, a, b, total=0, max_pass=0;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> a >> b;
        total = total - a + b;
        if (max_pass < total){
            max_pass = total;
        }
    }
    cout << max_pass;
    return 0;
}
