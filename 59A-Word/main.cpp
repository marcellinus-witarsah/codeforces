#include <iostream>

using namespace std;

int main()
{
    string input;
    int n_lower=0, n_upper=0;
    cin >> input;
    for (int i=0; i<input.size(); i++){
        if (input[i] > 96) n_lower++;
        else n_upper++;
    }

    if (n_upper == n_lower || n_upper < n_lower){
        for (int i=0; i<input.size(); i++){
            input[i] = tolower(input[i]);
        }
    }
    else if (n_upper > n_lower){
        for (int i=0; i<input.size(); i++){
            input[i] = toupper(input[i]);
        }
    }
    cout << input;
    return 0;
}
