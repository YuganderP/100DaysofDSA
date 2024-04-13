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
    // inserting 1 vector into another
    vs.insert(vs.end(), 3, 324);
    v.insert(v.end(), vs.begin(), vs.end());
    cout << endl
         << endl;
    for (auto itk : v)
    {
        cout << itk << " ";
    }
    cout << endl;

    cout << v.size();
    // list datatype;

    list<int> l;

    l.push_back(1);
    l.emplace_back(2);
    l.push_front(0);
    l.emplace_front(-1);
    cout << endl
         << endl;
    for (auto lt : l)
    {
        cout << lt << " ";
    }
    cout << endl
         << endl;
    // stack : lifo (last in first out00)
    stack<int> st;
    cout << endl;
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    st.pop(); // four goes out
    st.emplace(43);
    cout << st.size();
    cout << endl;

    // queue datatype : fifo

    queue<int> q;
    q.push(1);
    q.push(2);
    cout << endl
         << endl;
    cout << q.front() << q.back();

    // priority queue  priority_queue : the largest element always stays at the top

    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(34);
    cout << endl
         << endl;
    cout << pq.top();

    // set datatype: stores only unique elements and stores in sorted order
    // inserting and popping happens in log time complexity
    cout << endl
         << endl;
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.erase(2);
    cout << s.count(1);
    // read about lower_bound and upper_bound:

    // multi set: everyting same as set
    // stores duplicate elements as well

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    cout << endl
         << endl
         << ms.count(1);

    // unordered set

    unordered_set<int> us;
    // lower and upper bound function doesn't work rest all works s
    // it does not store in any pirticular order hence has better time complexity;
    // time complexity is big0(1);

    //  map container: stores in key value pair
    cout << endl
         << endl;

    //   map stores unique keys in sorted order;
    map<int, int> mpp;
    mpp.insert({1, 2});
    cout << mpp[1];
    cout << endl;
    for (auto it : mpp)
    {
        cout << it.first << it.second;
    }

    // multi map : we can store duplicate keys:
}