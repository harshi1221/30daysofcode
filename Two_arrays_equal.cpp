#include<bits/stdc++.h>
using namespace std;

int checkEqualArrays(vector<int>&arr1,vector<int>&arr2,int n1,int n2){
    if(n1 != n2){
        return 0;
    }
    for(int i=0;i<n1;i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int size1,size2;
    cout<<"Enter the size of an array1"<<endl;
    cin>>size1;
    cout<<"Enter the size of an array2"<<endl;
    cin>>size2;

    vector<int>array1(size1);
    vector<int>array2(size2);
    cout<<"enter an array"<<endl;
    for(int i=0;i<size1;i++){
        cin>>array1[i];
    }
    for(int i=0;i<size2;i++){
        cin>>array2[i];
    }
    cout<<checkEqualArrays(array1,array2,size1,size2);
}