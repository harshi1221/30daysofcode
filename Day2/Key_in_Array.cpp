#include<bits/stdc++.h>
using namespace std;

int findkey(vector<int>&arr,int k){
    int n=arr.size();
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == k){
            return i;
        }
    }
    return 0;
}
int main(){
    vector<int>array;
    int size,k;
    cin>>size;
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        array.push_back(num);
    }
    cin>>k;
    cout<<"value of k is found at: " <<findkey(array,k);
}