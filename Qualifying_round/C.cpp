#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, q;
	cin >> n >> m;
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
		cin >> v[i];

	while (m--)
	{
		cin >> q;
		int l = 0, r = n - 1;

		while (l < r)
		{
			int mid = l + (r - l) / 2;

			if (v[mid] <= q)
				r = mid;
			else
				l = mid + 1;
		}

		if (v[l] <= q)
			cout << l + 1 << '\n';
		else
			cout << "NO SOLUTION" << '\n';
	}
	
	return 0;
}