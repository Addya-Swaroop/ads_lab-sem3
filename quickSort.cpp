#include <bits/stdc++.h>
using namespace std;
// void Traverse(int a[],int pivot){
//     for(int i=0;i<n;i++){
        
//     }
// }
void quicksort(vector<int>&arr,int low,int high){
    if(low<high){
        int q=partition(arr,low,high);
        quicksort(arr,low,q-1);
        quicksort(arr,q+1,high);
    }
}
int partition(vector<int>&arr,int low,int high){
    int q=low;
    int left=low;
    int right=high;
    while(left<right){
        while(arr[q]<=arr[right] && q!=right){
            right--;
        }
        if(arr[q]>arr[right]){
            swap(arr[q],arr[right]);
            q=right;
        }
        
    }
    return q;
}
int main() {
	// your code goes here
	

}