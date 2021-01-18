#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n, int x, int y)
{
    int next_x[n],next_y[n],minimun_distance=INT_MAX;
    for(int i=0;i<n;i++)    
        next_x[i]=INT_MAX,next_y[i]=INT_MAX; 
    
    for(int i=n-1;i>=0;i--){
        if(i<n-1)
            next_x[i]=next_x[i+1],
            next_y[i]=next_y[i+1];
        if(arr[i]==x)
            next_x[i]=i,
            minimun_distance=min(minimun_distance,next_y[i]-i);
        if(arr[i]==y)
            next_y[i]=i,
            minimun_distance=min(minimun_distance,next_x[i]-i);
    } 
    cout<<"minimum distance between "<<x<<" and "<<y<<" = "<<minimun_distance;
}
int main()
{
    int size; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)    cin>>arr[i];
    int x,y; 
    cin>>x>>y;
    solve(arr,size,x,y);
    return 0;
}
