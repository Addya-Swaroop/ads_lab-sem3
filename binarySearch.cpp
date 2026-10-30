#include <bits/stdc++.h>
using namespace std;

int binary(int arr[],int beg,int end,int item){
    if(beg>end){
        return -1;
    }
    int mid=beg+(end-beg)/2;
    if(arr[mid]==item){
        return mid;
    }
    if(item<arr[mid])
    return binary(arr,beg,mid-1,item);
   return binary(arr,mid+1,end,item);
}
int main(){
    int arr[5]={1,2,3,56,77};
    cout<<binary(arr,0,4,77);
}