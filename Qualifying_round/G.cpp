#include <iostream>
#include <vector>

using namespace std;

void dfs(int v, vector<bool>& visited, vector<vector<int>>& graph, int& componentSize)
{
   visited[v] = true;
   ++componentSize;

   for (const auto& to : graph[v])
   {
       if (!visited[to])
           dfs(to, visited, graph, componentSize);
   }
}

int main() {
   int n, m;
   cin >> n >> m;
   vector<vector<int>> graph(n);

   for (int i = 0; i < m; ++i)
   {
       int u, v;
       cin >> u >> v;
       u--;
       v--;
       graph[u].push_back(v);
       graph[v].push_back(u);
   }

   vector<bool> visited(n, false);
   int maxComponentSize = 0;
   
   for (int i = 0; i < n; ++i)
   {
       if (!visited[i])
       {
           int componentSize = 0;
           dfs(i, visited, graph, componentSize);
           maxComponentSize = max(maxComponentSize, componentSize);
       }
   }

   cout << maxComponentSize << '\n';

   return 0;
}