int longestMountain(vector<int>& A) {
        //amazon
        if(A.size() == 0)
            return 0;
        
        int maxLen = 0; 
        for(int i=1; i<A.size()-1; i++)
        {
            if(A[i] > A[i+1] && A[i] > A[i-1])
            {
                int left = i-1;
                int right = i+1;
                
                while(left > 0 && A[left-1] < A[left])
                    left--;
                while(right < A.size()-1 && A[right+1] < A[right])
                    right++;
                maxLen = max(maxLen, right-left+1);
            }
        }
        return maxLen;
    }