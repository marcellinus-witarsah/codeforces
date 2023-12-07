#include <iostream>

using namespace std;

int main()
{
    int c;
    cin >> c;
    int arr[c];
    for (int i=0; i<c; i++){
        cin >> arr[i];
    }
    int l= 0, r = c-1, i=0, sum_s = 0, sum_d = 0;
    while (l <= r){
        if (arr[l] >= arr[r]){
            if (i%2==0) sum_s += arr[l];
            else if (i%2==1) sum_d += arr[l];
            l++;
        }
        else if (arr[l] < arr[r]){
            if (i%2==0) sum_s += arr[r];
            else if (i%2==1) sum_d += arr[r];
            r--;
        }
        i++;
    }
    cout << sum_s << " " << sum_d;
    return 0;
}
