#include <iostream>
#include <vector>

using namespace std;

int B(int x)
{
   vector<bool> seen(x + 1, false);
   int j, count = 0;

   for (int i = 2; i <= x; ++i)
   {
       if (!seen[i])
       {
           count++;
           j = i + i;

           while (j <= x)
           {
               seen[j] = true;
               j += i;
           }
       }
   }

   return count;
}

int main() {
	int x;
	cin >> x;

	cout << B(x);

	return 0;
}