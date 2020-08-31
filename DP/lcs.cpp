class Solution {
public:
    int max(int i,int j){
       return (i>j)?i:j;
    }
    
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length())
            return false;
        
        int slen = s.length();
        int tlen= t.length();
        int dp[slen+1][tlen+1];
        
        for(int i=0;i<=slen;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=tlen;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=slen;i++){
            for(int j=1;j<=tlen;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+ dp[i-1][j-1];
                }
                else {
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        cout<<slen<<" "<<dp[slen][tlen]<<endl;
        if(dp[slen][tlen]==slen)
            return true;
        else
            return false;
        
            
    }
};