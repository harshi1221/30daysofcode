#include<bits/stdc++.h>
using namespace std;

void reverseString(string& name){
    int n=name.size();
    int i=0;
    while(i<n){
        char temp = name[i];
        name[i] = name[n-1];
        name[n-1] = temp;
        i++;
        n--;
    }
}
int main(){
    int size;
    string a;
    cout<<"Enter the size of string"<<endl;
    cin>>size;
    cout<<"enter a string"<<endl;
    cin>>a;
    reverseString(a);
    cout<<a;
}
