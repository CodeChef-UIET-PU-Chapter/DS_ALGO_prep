#include<bits/stdc++.h>
#define ll long long
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

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}
vector<int> threeWayPartition(vector<int> arr)
{
    int start=0,end=arr.size()-1;
    for(int i=0;i<=end;)
    {
        if(arr[i]<1)
        swap(&arr[i++],&arr[start++]);
        else if(arr[i]>1)
        swap(&arr[i],&arr[end--]);
        else
        i++;
    }
    return arr;
}

int main()
{
    io;
    ll test_case;
    cin>>test_case;
    //test_case=1;
    while(test_case--)
    {
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i=0;i<n;i++) cin>>A[i];
        vector<int> res=threeWayPartition(A);
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<"\n";
    }   
}
