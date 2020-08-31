class Solution {
public:
    int ans=0;
    int slices(vector<int> &A, int i){
        if(i<2)
            return 0;
        int ap=0;
        if(A[i]-A[i-1] == A[i-1]-A[i-2]){
            ap= 1+slices(A,i-1);
            ans+=ap;
        }
        else
            slices(A,i-1);
        return ap;
    }
    int numberOfArithmeticSlices(vector<int>& A) {
        slices(A, A.size()-1);
        return ans;
    }
};