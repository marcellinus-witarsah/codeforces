#include <iostream>

using namespace std;

int main()
{
    int c, n_groups = 1;
    string prev, curr;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> curr;
        if (prev.empty()){
            prev = curr;
            continue;
        }
        if (prev[1] == curr[0]){
            n_groups ++;
        }
        prev = curr;
    }
    cout << n_groups;
    return 0;
}
