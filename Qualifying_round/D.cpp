#include <iostream>
#include <vector>

using namespace std;

void permute(vector<int>& arr, int n, int k, int idx, int l, vector<vector<int>>& ans)
{
	if (l == k)
	{
		ans.push_back(arr);
		return;
	}

	for (int i = idx; i <= n && k - arr.size() <= n - i + 1; ++i) {
		arr.push_back(i);
		permute(arr, n, k, i + 1, l + 1, ans);
		arr.pop_back();
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> ans; vector<int> arr;

	permute(arr, n, k, 1, 0, ans);

	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < k; ++j)
			cout << ans[i][j] << " ";

		cout << '\n';
	}

	return 0;
}