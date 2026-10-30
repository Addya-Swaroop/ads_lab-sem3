// program to check if the given number is palindrome using stack
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="12345";
    stack<char> st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    bool yes=true;
    int i=0;
    while(!st.empty()){
        if(st.top()!=s[i]){
            yes=false;
            cout<<"Not a palindrome"<<endl;
            break;
        }
        i++;
        st.pop();
    }
    if(yes){
        cout<<"palindrome "<<endl;
    }

}