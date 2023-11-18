#include <iostream>

using namespace std;

int main()
{
    string input;
    int temp;
    cin >> input;
    for (int i=0; i < input.size(); i+=2){
        for (int j=i+2; j< input.size(); j+=2){
            if (input[i]>input[j]){
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    cout << input;
    return 0;
}
