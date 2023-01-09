#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,cs=1;
    cin>>t;
    while(t--)
    {
       cout<<"Case "<<cs++<<":"<<"\n";
       int n,q;
       cin>>n>>q;
       vector<int> a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a.begin(),a.end());
       while(q--)
       {
           int x,y;
           cin>>x>>y;

          auto idx=lower_bound(a.begin(),a.end(),x)-a.begin();
          auto idx1=upper_bound(a.begin(),a.end(),y)-a.begin();
           cout<<idx1-idx<<endl;
       }

    }

    return 0;
}
