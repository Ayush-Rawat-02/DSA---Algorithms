#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n=arr.size();
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int>arr;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array one by one : ";
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    bubbleSort(arr);
    cout<<"The sorted array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
