
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		long long m, k;
		cin >> m >> k;
		if(m < k) {cout << "<" << endl;}
		if(m > k) {cout << ">" << endl;}
		if(m == k) {cout << "=" << endl;}
	}
	return 0;
}

