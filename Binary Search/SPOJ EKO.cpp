#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
vector<int>a;
bool possible(int n,int H,int m)
{
    ll gain=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>H)
        {
            gain+=(a[i]-H);
        }

    }
    if(gain>=m)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    a.resize(n);
    for(int i=0;i<n;i++ ) cin>>a[i];
    int low=1,high=1000000;
    int ans;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(possible(n,mid,m))
        {
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<"\n";

    return 0;
}
