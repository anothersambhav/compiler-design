#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int> &v1, vector<int> &v2)
{
    vector<vector<int>> ans;
    int prev = 0;
    vector<int> temp;
    unordered_map<int, int> m1, m2;
    for (auto i : v1)
    {
        m1[i]++;
    }
    for (auto i : v2)
    {
        m2[i]++;
    }
    for (int i : v1)
    {
        if (m2.find(i) == m2.end() && find(temp.begin(), temp.end(), i) == temp.end())
        {
            temp.push_back(i);
        }
        prev = i;
    }
    ans.push_back(temp);
    temp.clear();
    prev = 0;
    for (int i : v2)
    {
        if (m1.find(i) == m1.end() && find(temp.begin(), temp.end(), i) == temp.end())
        {
            temp.push_back(i);
        }
        prev = i;
    }
    ans.push_back(temp);
    return ans;
}

int main()
{
    vector<int> v1 = {1, 2, 3}, v2 = {2, 4, 6};
    vector<vector<int>> ans = findDifference(v1, v2);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
