#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n)
{
    for (int i=0;i<n;i++) {
        if (arr[abs(arr[i])]<0)
            cout<<abs(arr[i])<<" ";
        else
            arr[abs(arr[i])]=-arr[abs(arr[i])];   
    }
}
int main()
{
    freopen("inpput.txt", "r", stdin);
    int size; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)    cin>>arr[i];
    cout<<"Repeating elements are : ";
    solve(arr,size);
    return 0;
}
