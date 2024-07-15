// APPROACH : ONE COSTANT POINTER AND TWO MOVIVING POINTER

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
       int n = nums.size();
        for(int i = 0;i<n;i++){
          if(i>0 && nums[i]== nums[i-1])continue;
                int s = i+1,e = n-1;
                while(s<e){
                    int sum = nums[i] + nums[s] +nums[e];
                    if(sum == 0){
                        ans.push_back({nums[i] ,nums[s++] ,nums[e--]});
                        while(s<e &&nums[s] == nums[s-1])s++;
                        while(s<e && nums[e] == nums[e+1])e--;
                    }
                    else if(sum > 0){
                        e--;
                    }
                    else{
                        s++;
                    }
                }
            
        }
        return  ans;
    }
};