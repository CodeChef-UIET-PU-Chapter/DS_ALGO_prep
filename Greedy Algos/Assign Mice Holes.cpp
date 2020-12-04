class Solution {
  public:
    int assignMiceHoles(int N , int M[] , int H[]) {
        sort(M,M+N);
        sort(H,H+N);
        int ans=INT_MIN;
        for(int i=0;i<N;i++)
        ans=max(ans,abs(M[i]-H[i]));
        
        return ans;
    }
};
