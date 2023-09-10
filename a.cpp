#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

bool canEscape(int n, int m, int k, int vika_x, int vika_y, const set<pair<int, int>> &friends)
{
  vector<vector<bool>> visited(n + 1, vector<bool>(m + 1, false));
  queue<pair<int, int>> q;
  q.push(make_pair(vika_x, vika_y));
  visited[vika_x][vika_y] = true;

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if (friends.find(make_pair(x, y)) == friends.end())
    {
      return true;
    }

    vector<pair<int, int>> neighbors = {
        {x - 1, y},
        {x + 1, y},
        {x, y - 1},
        {x, y + 1}};

    for (const auto &neighbor : neighbors)
    {
      int nx = neighbor.first;
      int ny = neighbor.second;

      if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && !visited[nx][ny])
      {
        visited[nx][ny] = true;
        q.push(make_pair(nx, ny));
      }
    }
  }

  return false;
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, m, k;
    cin >> n >> m >> k;

    int vika_x, vika_y;
    cin >> vika_x >> vika_y;

    set<pair<int, int>> friends;
    for (int j = 0; j < k; j++)
    {
      int x, y;
      cin >> x >> y;
      friends.insert(make_pair(x, y));
    }

    string result = canEscape(n, m, k, vika_x, vika_y, friends) ? "YES" : "NO";
    cout << result << endl;
  }

  return 0;
}
