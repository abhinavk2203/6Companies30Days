int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        
        //searching for false conditions
        
        if(L2[0]>R1[0] or L1[0]>R2[0]) return 0;
        if(L2[1]<R1[1] or L1[1]<R2[1]) return 0;
        
        return 1;
    }