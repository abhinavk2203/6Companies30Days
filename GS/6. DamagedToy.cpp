int solve(int n, int m, int k){
    if(n==0 or n==1){
        return n;
    }
    if(m==1) return k;
    
    while(m>n) m-=n;
    return k+m-1;
}