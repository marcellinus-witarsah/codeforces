#include <iostream>

using namespace std;

int main()
{
    string x, y;
    int x_n=0, y_n=0;
    cin >> x >> y;
    for (int i=0; i<x.length(); i++)
	{
		x[i] = tolower(x[i]);
		y[i] = tolower(y[i]);
	}
    if (x < y) cout << "-1";
    else if (x> y) cout << "1";
    else if (x== y) cout << "0";
    return 0;
}
