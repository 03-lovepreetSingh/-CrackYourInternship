// APPROACH : MATHAMATICAL


class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        int zero = 0 ;
         vector<long long int> ans ;
        long long int temp = 1;
        for(int i = 0  ; i < n ; i++){
            if(nums[i] == 0) {
               zero++;
               continue ;
            } ;
            temp  *= nums[i];
        }
        for(int i = 0  ; i < n ; i++){
            long long temp1 = temp ;
            if(zero > 1){
                ans.push_back(0);
                continue;
            }
            if(nums[i] == 0){
                ans.push_back(temp);
            }
            else if(zero > 0 ){
                ans.push_back(0);
            }
            else{
            temp1 /= nums[i];
            ans.push_back(temp1);
        
            }    
            }
        return ans;
    }
};