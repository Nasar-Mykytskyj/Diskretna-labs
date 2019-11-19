#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int m=18;

	int n=12;

	vector < pair < int, pair<int, int> > > graf(m);  
	graf = {
	{1,{1,2}},

	{2,{1,3}},

	{4,{1,4}},

	{3,{2,5}},

	{7,{3,5}},

	{6,{3,6}},

	{2,{4,6}},

	{2,{2,7}},

	{3,{4,7}}
	,
	{3,{6,10}},

	{7,{6,8}},

	{7,{5,8}},

	{5,{5,9}},

	{5,{7,9}},

	{4,{7,10}},

	{1,{9,11}},

	{4,{8,11}},

	{4,{10,11}}
	};
	int cost = 0;
	vector < pair<int, int> > res;

	sort(graf.begin(), graf.end());

	vector<int> tree_id(n);

	for (int i = 1; i <n; ++i)
		tree_id[i] = i;
	for (int i = 0; i < m; ++i)
	{

		int a = graf[i].second.first, b = graf[i].second.second, l = graf[i].first;

		if (tree_id[a] != tree_id[b])
		{
			cost += l;

			res.push_back(make_pair(a, b));

			cout << a << "-" << b << "  ";

			int old_id = tree_id[b], new_id = tree_id[a];

			for (int j = 0; j < n; ++j)

				if (tree_id[j] == old_id)

					tree_id[j] = new_id;
		}
	}

}