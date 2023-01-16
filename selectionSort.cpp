#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main(){
    int n;
    vector<int>arr;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array one by one : ";
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    selectionSort(arr);
    cout<<"The elements of the array after sorting are : ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
