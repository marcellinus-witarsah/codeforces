#include <iostream>

using namespace std;

int main()
{
    int c, n;
    cin >> c;
    for (int i=0; i<c; i++){
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

    }
    return 0;
}
