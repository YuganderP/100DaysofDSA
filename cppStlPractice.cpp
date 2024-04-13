#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair data type
    pair<int, int> p = {1, 2};
    cout << p.first << p.second;
    cout << endl;
    // Nested pair
    pair<int, pair<int, int>> ps = {1, {2, 3}};
    cout << ps.first << ps.second.first << ps.second.second;
    cout << endl;

    //  Vector datatype;
    vector<pair<int, int>> vp;
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);     // simillar to pushback but faster;
    vp.push_back({1, 2});  // curly braces are necessary
    vp.emplace_back(1, 2); // curly braces are not necessary

    vector<int> vs(5, 100); // stores 5 100's
    vector<int> vt(vs);     // copying v  to vt
    //   to access vector elements

    // via index;
    //  using iterators
    //

    vector<int>::iterator it = v.begin();
    it++;

    // iterator points to memory address;
    // setting the iterator using auto keyword
    cout << endl
         << endl;

    for (auto its = vs.begin(); its != vs.end(); its++)
    {
        cout << (*its) << endl;
    }
    cout << endl
         << endl;
    for (auto itss : v)

    {
        cout << (itss);
    }
    // removing elements  in a vector

    v.erase(v.begin());
    cout << endl
         << endl;
    for (auto itss : v)

    {
        cout << (itss);
    }
    v.insert(v.begin(), 123);
    v.insert(v.begin() + 1, 2, 23); // insert 2 occurances of 23 after 1st element
    cout << endl
         << endl;

    for (auto itk : v)
    {
        cout << itk << " ";
    }
}