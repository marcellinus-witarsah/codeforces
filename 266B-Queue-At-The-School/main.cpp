#include <iostream>

using namespace std;

int main()
{
    int n, t;
    string line;
    cin >> n >> t;
    cin >> line;
    for (int i=0; i<t; i++){
        for (int j=0; j < line.length(); j++){
            if (line[j] == 'B' && line[j+1] == 'G'){
                char temp = line[j];
                line[j] = line[j+1];
                line[j+1] = temp;
                j++;
            }
        }
    }
    cout << line;
    return 0;
}
