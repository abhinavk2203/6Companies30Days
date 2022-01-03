int *findTwoElement(int *arr, int n) {
        // code here
        int *res = new int[2];
        //method 1 : time -> O(n) : space -> O(n)
        // vector<int> v(n,1);
        
        // for(int i=0; i<n; i++){
        //     v[arr[i]-1]--;
        // }
        // for(int i=0; i<n; i++){
        //     if(v[i] == -1) res[0] = i+1;
        //     if(v[i] == 1) res[1] = i+1;
        // }
        // return res;
        
        //Method 2 : time -> O(n) : space -> O(1)
        for(int i=0; i<n; i++){
            if(arr[abs(arr[i])-1]>0) arr[abs(arr[i])-1] = -1*arr[abs(arr[i])-1];
            else res[0] = abs(arr[i]);
        }
        
        for(int i=0; i<n; i++){
            if(arr[i] > 0) res[1] = i+1;
        }
        return res;
    }