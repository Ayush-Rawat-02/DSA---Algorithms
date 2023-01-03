#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr, int num){
    int n=arr.size(), s=0, e=n-1, m=s-(s-e)/2;
    while(s<e){
        if(arr[m]>num){
            e=m-1;
        }
        else if(arr[m]<num){
            s=m+1;
        }
        else{
            return m;
        }
        m=s-(s-e)/2;
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
    sort(arr.begin(), arr.end());
    cout<<"Enter the number to search in the array : ";
    cin>>toSrch;
    int res = binarySearch(arr,toSrch);
    if(res!=-1){
        cout<<"Found at index "<<res<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
