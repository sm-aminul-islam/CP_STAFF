#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(x<a[mid])
            {

                high=mid-1;

            }
            else{
                 ans=mid;
               low=mid+1;
            }
        }
        cout<<ans+1<<" ";
    }



    return 0;
}
