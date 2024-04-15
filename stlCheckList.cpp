#include <bits/stdc++.h>
#include<utility>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    for(auto its=v.begin(); its!=v.end();its++){
        cout<<*(its);
    }
    cout<<endl;
    v.erase(v.begin()+1); // remove element at the desired position. 
    for(auto its:v){
        cout<<its;
    }
    cout<<endl;

list <int> a;
a.push_back(1);
a.push_back(12);
a.push_back(13);
a.push_back(14);
a.push_back(15);
a.push_back(16);
a.push_back(16);
a.push_back(16);
a.push_back(123);
a.push_back(132);

for(auto lis:a){
    cout<<lis<<" ";

}
cout<<endl;

}

