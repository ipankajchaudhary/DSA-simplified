int LIS(int nums[], int n) 
	{ 
        int lis[n];
        lis[0] = 1;
        for(int i = 1;i<n;i++){
            lis[i] = 1;
            for(int j = 0;j<i;j++){
                if(nums[j]<nums[i]){
                    lis[i] = max(lis[i],lis[j]+1);
                }
            }
        }
        int res = lis[0];
        for(int i = 1;i<n;i++){
            res = max(res,lis[i]);
        }
        return res;
	} 