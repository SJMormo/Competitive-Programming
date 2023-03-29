#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

	bool col0 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!matrix[i][j]) {
				if (!j) col0 = 1;
				else matrix[0][j] = 0;
				matrix[i][0] = 0;
			}
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (!matrix[i][0] or !matrix[0][j])
				matrix[i][j] = 0;
		}
	}

	if (!matrix[0][0])
		for (int j = 0; j < m; j++)
			matrix[0][j] = 0;

	if (col0)
		for (int i = 0; i < n; i++)
			matrix[i][0] = 0;

	return matrix;
}