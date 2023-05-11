#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		if (v[i] % 2 != 0)
			++ans;
	}

	cout << ans;

	return 0;
}