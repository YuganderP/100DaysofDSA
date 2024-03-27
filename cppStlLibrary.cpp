#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    for (int i = 0; i < 4; i++)
        v1.push_back(i);
    v1.erase(v1.begin() + 2);
    v1.insert(v1.begin() + 1, 4, 2);
    // vector<int>::iterator it = v1.begin();
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it;
    }
}