#include <iostream>
#include <vector>
using namespace std;
int n;

void checkarr(vector<vector<bool>> arr)
{
	for (int i = 0; i < n; i++)
	{
		for (int ii = 0; ii < n; ii++)
		{
			cout << (bool)arr[i][ii];
		}
		cout << endl;
	}
}
bool dfs(vector<vector<bool>> graph, int vertex, vector<int> color, vector<bool> visited, int curr_col)
{
	if (!visited[vertex])
	{
		visited[vertex] = true;
		color[vertex] = curr_col;
		bool temp = true;
		//cout << "Checking vertex: " << vertex << endl;
		for (int i = 0; i < n; i++)
		{
			if (i == vertex)
				continue;
			if (graph[vertex][i])
			{
				//cout << "    going to: " << i << " with expected color: " << (curr_col + 1) % 2 << endl;
				temp = temp && dfs(graph, i, color, visited, (curr_col + 1) % 2);
				if (!temp)
				{
					return false;
				}
			}
		}
		return temp;
	}
	//cout << "       Checked, color: " << color[vertex] << endl;
	if (color[vertex] != curr_col)
	{
		return false;
	}
	return true;
}
int main()
{
	int m;
	cin >> n >> m;
	vector<vector<bool>> arr(n,vector<bool>(n));
	vector<bool> visit(n);
	vector<int> color(n, -1);
	
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		arr[a][b] = true;
		arr[b][a] = true;
	}
	//checkarr(arr);
	//dfs(Graph,vertex,color,visited)

	if (dfs(arr, 0, color, visit, 0))
	{
		cout << "YA" << endl;
	}
	else
	{
		cout << "TIDAK" << endl;
	}
}