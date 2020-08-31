class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int> ans;
        if(num==0)
            ans.push_back(0);
        else{
            int n= num;
            ans.push_back(0);
            ans.push_back(1);
            for(int i=2;i<=n;i++){
                ans.push_back(ans[i%2]+ ans[i/2]);
            }
        }
        return ans;
        
    }
};