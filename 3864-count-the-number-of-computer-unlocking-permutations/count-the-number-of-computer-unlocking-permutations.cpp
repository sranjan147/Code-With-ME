class Solution {
public:
    const int MOD=1e9+7;
    int factorial (int n){
        int f=1;
        for(int i=1;i<=n;i++){
            f=1LL*f*i%MOD;
        }
        return f;
    }
    int countPermutations(vector<int>& complexity) {
        int mini=*min_element(complexity.begin(),complexity.end());
        if(mini!=complexity[0]){
            return 0;
        }
        int cnt=0;
        for(int i=0;i<complexity.size();i++){
            if(complexity[i]==mini){
                cnt++;
            }
            if(cnt>1)return 0;
        }
        int n=complexity.size();

        int ans=factorial(n-1);
        return ans;
        
        
        
    }
};