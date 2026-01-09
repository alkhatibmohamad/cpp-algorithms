#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t;
    cout<<"Enter the number of elements?\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array?\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter a target\n";
    cin>>t;
    for(int i=0; i<n; i++){
        if(arr[i] == t){
            cout<<"Target found at index: ";
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"Target was not found in the array!\n";
}
