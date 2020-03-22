#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int k, xdiv, ydiv;
	cin >> k;
	cin >> xdiv >> ydiv;
	for(int i = 0; i < k; i++){
		int x, y;
		cin >> x >> y;
		if(x == xdiv || y == ydiv) {cout << "divisa" << endl;}
		else if (x > xdiv && y > ydiv) {cout << "NE" << endl;}
		else if (x > xdiv && y < ydiv) {cout << "SE" << endl;}
		else if (x < xdiv && y > ydiv) {cout << "NO" << endl;}
		else if (x < xdiv && y < ydiv) {cout << "SO" << endl;}
	}
	return 0;
}

