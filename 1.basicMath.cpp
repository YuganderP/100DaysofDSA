#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =121121;
    int k=n;
    cout<<n<<endl;
    int sum=0;
    while(n>0){
     cout<<(n%10)<<endl;
     sum=(sum*10)+(n%10);
     n/=10;
    }
    cout<<sum<<endl;
// finding count of digits using logs

int count = (int)((log10(sum))+1);
cout<<"digits:"<<count<<endl;
if(k==sum) cout<<"palindrome"<<endl;



//  amstrong number sum of cubes of digit should be equal to number

n = 371;
k=n;
sum =0;
while(n > 0){
int digit = n%10;
sum+= pow(digit,3);
n/=10;
}
if(sum == k){
    cout<<"amstrong number"<<endl;
}

}