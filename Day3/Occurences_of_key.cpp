#include<bits/stdc++.h>
using namespace std;

int occurences(vector<int>&arr,int k){
    int n=arr.size();
    int count=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(k == arr[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int size;
    cout<<"enter size of an array:";
    cin>>size;
    vector<int>array(size);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int k;
    cout<<"enter the key: "<<endl;
    cin>>k;
    cout<<"occurence of key in array: "<< occurences(array,k);
}
