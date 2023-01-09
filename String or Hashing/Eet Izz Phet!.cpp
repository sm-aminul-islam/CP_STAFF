#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int P=31,MOD=1e9+7,N=1e5+9;
int pw[N];
void cal()
{
    pw[0]=1;
    for(int i=1;i<N;i++)
    {
        pw[i]=pw[i-1]*P%MOD;
    }
}
set<int>st;
void hashing(string &s)
{
    int tot=0;
    for(int i=0;i<s.size();i++)
    {
        int t=(s[i]-'a'+1)*pw[i]%MOD;
        tot=tot+t%MOD;
    }
  
    st.insert(tot);
}
int f(string &s)
{
    int tot=0;
    for(int i=0;i<s.size();i++)
    {
        int t=(s[i]-'a'+1)*pw[i]%MOD;
        tot=tot+t%MOD;
    }


    return tot;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cal();
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         hashing(s);
     }
     int q;
     cin>>q;
     while(q--)
     {
         string s;
         cin>>s;
         if(st.find(f(s))!=st.end())
         {
             cout<<"yes"<<"\n";
         }
         else{
            cout<<"no"<<"\n";
         }
     }


    return 0;
}
