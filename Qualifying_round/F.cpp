#include <iostream>
#include <vector>

using namespace std;

int main() {
   int n, sum = 0;
   cin >> n;
   vector<int> p(n);

   for (int i = 0; i < n; ++i)
   {
       cin >> p[i];
       sum += p[i];
   }

   if (sum % 2 != 0 || n == 1)
   {
       cout << "NO" << '\n';
       return 0;
   }

   vector<vector<bool>> dp(n + 1, vector<bool>(sum / 2 + 1, false));
   dp[0][0] = true;

   for (int i = 1; i <= n; ++i)
   {
       for (int j = 0; j <= sum / 2; ++j)
       {
           dp[i][j] = dp[i - 1][j];

           if (j >= p[i - 1])
               dp[i][j] = dp[i][j] || dp[i - 1][j - p[i - 1]];
       }
   }

   if (dp[n][sum / 2])
       cout << "YES" << '\n';
   else
       cout << "NO" << '\n';

   return 0;
}