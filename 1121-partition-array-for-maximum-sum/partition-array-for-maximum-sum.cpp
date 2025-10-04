class Solution {
public:
int find(int i,int k,vector<int>&arr,int n,vector<int>&dp){
    if(i==n)return 0;
    if(dp[i]!=-1)return dp[i];
    int maxelement=INT_MIN;
    int maxi=INT_MIN;
    int length=0;
    for(int j=i;j<min(n,i+k);j++){
        length++;
        maxelement=max(maxelement,arr[j]);
        int sum=length*maxelement+find(j+1,k,arr,n,dp);
        maxi=max(maxi,sum);
    }
    return dp[i]=maxi;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n,-1);
        return find(0,k,arr,n,dp);
        
    }
};