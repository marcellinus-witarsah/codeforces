#include <iostream>

using namespace std;

int main()
{
    int num;
    bool found = false;
    cin >> num;
    while (!found){
        int n_distinct=0, arr[10];
        for (int i=0; i<10; i++) arr[i] = 0;
        num++;
        for (int i=num; i>0; i/=10){
            arr[i%10] = 1;
        }
        for (int element: arr){
            n_distinct += element;
        }
        if (n_distinct == 4){
            found=true;
        }
    }
    cout << num;
    return 0;
}
