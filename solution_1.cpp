#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n)
{
    set<int> positives,negatives;
    
    for(int i=0;i<n;i++)
        if(arr[i]>=0)    
            positives.insert(arr[i]);
        else
            negatives.insert(-arr[i]);
    
    vector<int> selected_elements;
    int count=0;
    for(auto i : positives){
        selected_elements.push_back(i),count++;
        if(count==2)
            break;
    }
    count=0;
    for(auto i : negatives){
        selected_elements.push_back(-i),count++;
        if(count==2)
            break;
    }

    int sum=INT_MAX;
    pair<int,int> ans;
    for(int i=0;i<selected_elements.size();i++)
        for(int j=i+1;j<selected_elements.size();j++)
            if(abs(selected_elements[i]+selected_elements[j])<sum)
                sum=abs(selected_elements[i]+selected_elements[j]),
                ans={selected_elements[i],selected_elements[j]};
    cout<<ans.first<<" "<<ans.second<<"\n";
}
int main()
{
    int size; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)    cin>>arr[i];
    solve(arr,size);
    return 0;
}
