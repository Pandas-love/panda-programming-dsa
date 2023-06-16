#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>mai(n);
    bool matching = true;
    
    for(int i=0;i<n;i++)
    {
        cin>>mai[i];
    }
    
    sort(mai.begin(),mai.end());
    
    for(int i=0;i<n-1;i++)
    {
        if(mai[i]==mai[i+1])matching=0;
    }

    if(matching)cout<<"NO";
    else cout<<"YES";  
    return 0;
}