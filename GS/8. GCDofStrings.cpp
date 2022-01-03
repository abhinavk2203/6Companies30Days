string gcdOfStrings(string str1, string str2) {
        //Largest string that divides both str1 and str2
        
        //method 1 : 1-liner solution
//         return str1+str2 == str2+str1 ? str1.substr(0,gcd(str1.length(), str2.length())) : "";
        
        //method 2 : intutive recursion solution
        if(str1.length() < str2.length())
            return gcdOfStrings(str2, str1);
        
        if(str2 == "")
            return str1;
        
        if(str1.substr(0, str2.size()) != str2)
            return "";
        
        return gcdOfStrings(str1.substr(str2.length()), str2);
}