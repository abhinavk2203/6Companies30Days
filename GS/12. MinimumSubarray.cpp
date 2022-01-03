int minSubArrayLen(int target, vector<int>& nums) {
        if(nums.size() == 0 || (nums.size() == 1 and target != nums[0]))
            return 0;
        
        int n = nums.size();
        vector<int> dp(n);
        for(int i=0; i<n; i++){
            int sum = 0, j = i, count = 0;
            
            while(sum<target and j<n){
                sum += nums[j++];
                count++;
            }
            if(i == n-1 and nums[i] >= target) dp[i] == 1;
            else if(i == n-1 and nums[i] < target) dp[i] = INT_MAX;
            else dp[i] = count;
        }
        
        return *min_element(dp.begin(), dp.end());
    }