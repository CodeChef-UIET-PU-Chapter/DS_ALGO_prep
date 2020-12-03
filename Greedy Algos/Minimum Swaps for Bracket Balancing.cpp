#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000000
#define limit 10000

int balance(string s)
{
    int left=0,right=0;
    int imbalance=0,res=0;
    for(int i=0;i<s.size();i++)
    {
        //cout<<s[i]<<"\n";
        if(s[i]==']')
        {
            //cout<<"im hre\n";
            right++;
            imbalance=(right-left);
        }
        else
        {
            left++;
            if(imbalance>0)
            {
                res+=imbalance;
                imbalance--;
            }
        }
    }
    
    return res;
}

int main()
{
    io;
    ll test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        //cout<<s<<"\n";
        cout<<balance(s)<<"\n";
    }
}
