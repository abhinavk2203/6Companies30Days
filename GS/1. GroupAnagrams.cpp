bool check(string s, string t){
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        //method 1 : n^2
//         vector<vector<string>> res;
//         int n = strs.size();
//         for(int i=0; i<n; i++){
            
//             if(strs[i] != "."){
                
//                 vector<string> v;
                
//                 v.push_back(strs[i]);
            
//                 for(int j=i+1; j<n; j++){

//                     if(strs[j] != "." && check(strs[i], strs[j])){
//                         v.push_back(strs[j]);
//                         strs[j] = ".";
//                     }
//                 }
                
//                 strs[i] = ".";
//                 res.push_back(v);
//             }   
//         }
//         return res;
        
        //method 2 : map method - nlogn
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        
        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            m[s].push_back(strs[i]);
        }
        
        for(auto x:m){
            res.push_back(x.second);
        }
        return res;
}