class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m.insert(pair<int,int>(nums[i],i));
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int comp= target- nums[i];
            map<int,int>:: iterator t= m.find(comp);
            if(t!=m.end() && t->second !=i ){
                ans.push_back(i);
                ans.push_back(t->second);
                break;
            }
        }
       return ans; 
    }
};
