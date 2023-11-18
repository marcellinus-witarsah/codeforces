#include <iostream>

using namespace std;

int main()
{
    string input;
    int c;
    cin >> c;
    for (int i=0; i < c; i++){
        cin >> input;
        if (input.size()>10){
            cout << input[0] << input.size()-2 << input[input.size()-1] << endl;
        }
        else{
            cout << input << endl;
        }
    }
    return 0;
}
