#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>arr, int num){
    int n=arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,toSrch;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>arr(n,0);
    cout<<"Enter the elements of the array one by one : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to search in the array : ";
    cin>>toSrch;
    int res = linearSearch(arr,toSrch);
    if(res!=-1){
        cout<<"Found at index "<<res<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
