// APPROACH 1 : HASHING  TC = O(n)/O(nlogn)  SC = O(n) 
// APPROACH 2 : setting the vslue of the  nums[element ] to -ve


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[abs(nums[i]) -1] < 0){
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i]) -1] *= -1;
        } 
        return ans; 
    }
};