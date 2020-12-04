#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
#define mod 1000000007

template <typename T>
void print(T x){cout<<x<<"\n";}
template <typename T1, typename T2>
void print2(T1 x,T2 y){cout<<x<<" "<<y<<"\n";}
template <typename T1, typename T2,typename T3>
void print3(T1 x, T2 y,T3 z){cout<<x<<" "<<y<<" "<<z<<"\n";}

signed main()
{
    io;
    int test_case;
    cin>>test_case;
    //test_case=1;
    while(test_case--)
    {
        int w,m,n;
        cin>>w>>m>>n;
        int xmax=w/m;
        int s1,s2;
        int left_space=INT_MAX;
        int left,ans1,ans2;
        for(int i=xmax;i>=0;i--)
        {
            s1=i;
            s2=(w-m*i)/n;
            left=w-m*s1-n*s2;
            if(left<=left_space)
            {
                ans1=s1;
                ans2=s2;
                left_space=left;
            }
        } 
        print3(ans1,ans2,left_space);   
    }
}
