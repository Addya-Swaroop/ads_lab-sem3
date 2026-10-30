#include <bits/stdc++.h>
using namespace std;

int gcd(int n,int m){
    if(m==0) return n;
    return gcd(m,n%m);
}
int main(){
    int n=10;
    cout<<gcd(18,48);
}