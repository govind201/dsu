#include <bits/stdc++.h>
using namespace std;


struct DSU {
	vector <int> id;
	vector<vector<int>> members;
	void init(int n) {
		id.resize(n);
		members.resize(n);
		for(int i = 0; i < n; i++)  {
			id[i] = i;
			members[i] = {i};
		}
	}

	void uni(int a, int b) {
		if(id[a] == id[b])return;
		a = id[a];
		b = id[b];
		if(members[a].size() < members[b].size()) {
			swap(a, b);
		}

		for(int x : members[b]) {
			id[x] = a;
			members[a].push_back(x);
		} 
		members[b].clear();
	}
	int get_id(int row, int col, int W) {
		return row*W + col;
	}

	void uni_cells(int row, int col, int row2, int col2, int W) {
		uni(get_id(row, col, W), get_id(row2, col2, W));
	}
 };


int main() {
	cout << "Compiles succesfully";
		return 0;
}