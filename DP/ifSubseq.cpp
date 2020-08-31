class Solution {
public:
    
    bool isSubsequence(string s, string t) {
        int slen= s.length();
        int tlen= t.length();
        if(slen==0){
            return true;
        }
        int i=0, j=0;
        int count=0;
        while(i!=slen && j!=tlen){
            if(s[i]==t[j]){
                i++;
                j++;
                count++;
            }
            else
                j++;
        }
        cout<<i<<" "<<j<<endl;
        cout<<slen<<" "<<tlen<<endl;
        if(count==slen)
            return true;
        else
            return false;
            
    }
};