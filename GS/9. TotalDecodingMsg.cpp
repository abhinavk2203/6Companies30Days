int CountWays(string str){
		    

    //Method 1 : Brute Force : Some test cases miss
	// vector<int> v;
 //    for(int i=0; i<str.length(); i++){
 //        v.push_back(str[i] - '0');
 //    }
 //    int pair = 1;
 //    for(int i=0; i<v.size()-1; i++){
 //        if((v[i] == 0 and v[i+1] == 0) || (v[i] == 0 and v[i+1] != 0) || ((v[i]*10 + v[i+1])>26 and v[i+1]==0)){
 //        return 0;
    
 //        if(v[i]*10 + v[i+1] <=26){
 //            pair++;
 //        }
 //    }        
 //    return pair;



    //Method 2 : Dynamic programming based approach : O(1)
    if(s.length() == 0 || s[0] == '0') return 0;
        if(s.length() == 1) return 1;
        
    int LastVal = 1, LastToLastVal = 1;
    for(int i=1; i<s.length(); i++){
        int singleDigit = s[i] - '0';
        int doubleDigit = (s[i-1]-'0')*10 + singleDigit;
            
        int count = 0;
        if(singleDigit > 0) count += LastVal;
        if(doubleDigit >= 10 and doubleDigit <= 26) count += LastToLastVal;
            
        LastToLastVal = LastVal;
        LastVal = count;
    }
    return LastVal;
}