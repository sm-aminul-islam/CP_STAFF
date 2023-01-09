#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool isPossible(vector<int>&a,int m,int n,int mid)
{
    int cnt=1,cmilk=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mid)
        {
            return false;
        }
        if(cmilk+a[i]<=mid)
        {
            cmilk+=a[i];

        }
        else{
            cnt++;
            cmilk=a[i];
        }
    }
    return cnt<=m;


}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<cs++<<": ";
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=1,r=1e16,ans=0;

        while(l<=r)
        {
           int mid=l+(r-l)/2;
            if(isPossible(a,m,n,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}
