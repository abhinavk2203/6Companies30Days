int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    
        if(k<=1)
            return 0;
        
        int product = 1, left = 0, ans = 0;
        for(int right = 0; right < nums.size(); right++){
            product *= nums[right];
            
            while(product >= k){
                product /= nums[left];
                left++;
            }
            ans += (right-left)+1;
        }
        return ans;
    }