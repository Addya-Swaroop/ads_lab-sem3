# include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int p, int q, int r){
                         
    int n1 = q - p + 1;
    int n2 = r - q;

    vector<int> L(n1+1), R(n2+1);

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    int i = 0, j = 0;
    int k = p;
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;

    for(k=p;k<=r;k++){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else    {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<int>& arr, int p, int r){
    
    if (p < r){
    int q = (p+r) / 2;
    mergeSort(arr, p, q);
    mergeSort(arr, q + 1, r);
    merge(arr, p, q, r);
}
} 

int main(){
    
    vector<int> arr = {38, 27, 43, 10,56,6 ,0};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}