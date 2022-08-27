#include <bits/stdc++.h>
using namespace std;

void dssUtil(vector<int>& A, vector<vector<int> >& res,
                vector<int>& ds, int index)
{
    res.push_back(ds);
    for (int i = index; i < A.size(); i++) {
        ds.push_back(A[i]);
        dssUtil(A, res, ds, i + 1);
        ds.pop_back();
    }

    return;
}

vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> ds;
    vector<vector<int> > res;
    int index = 0;
    dssUtil(A, res, ds, index);

    return res;
}

int main()
{
    vector<int> array = { 1, 2, 3 };
    vector<vector<int> > res = subsets(array);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
