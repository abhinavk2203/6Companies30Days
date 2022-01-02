int getNthUglyNo(int n) {

	   vector<int> dp(n);
	   int p2 = 0, p3 = 0, p5 = 0;  //pointers of 2,3,5
	   dp[0] = 1;
	   for(int i=1; i<n; i++){
	       int fact2 = 2 * dp[p2];
	       int fact3 = 3 * dp[p3];
	       int fact5 = 5 * dp[p5];
	       
	       int mini = min(fact2, min(fact3, fact5));
	       dp[i] = mini;
	       if(fact2 == mini) p2++;
	       if(fact3 == mini) p3++;
	       if(fact5 == mini) p5++;
	   }
	   return dp[n-1];
}