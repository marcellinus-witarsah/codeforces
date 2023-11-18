#include <iostream>

using namespace std;

int main()
{
    int c, x;
    cin >> c;
    int arr[c];
    for (int i=0; i<c; i++){
        cin >> x;
        arr[x-1] = i+1;
    }
    for (int i=0; i<c; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
