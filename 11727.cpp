#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		vector<int> v;
		int x,y,z;
		cin >> x >> y >> z;
		v.push_back(x);
		v.push_back(y);
		v.push_back(z);
		sort(v.begin(),v.end());
		cout << v[1] << endl;
	}
	return 0;
}

