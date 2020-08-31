
int replace_min(int arr, int i){
	int j=i+1;
	while(true){
		int k=2;
		while(k<j){
			if(j%k==0)
				break;
			else
				k++;
			
		}
		if(k=j)
			return j;
		else
			j++;
		}
}

int is_lis( int arr[], int n, int *max) 
{ 
    
    if (n == 1) 
        return 1; 
  
    int res, max_here = 1;  
  
    for (int i = 1; i < n; i++) 
    { 
        res = is_lis(arr, i, max); 
        if (arr[i-1] < arr[n-1] && res + 1 > max_here) 
            max_here = res + 1; 
    } 
  
    if (*max< max_here) 
    	*max = max_here; 
  
    return max_here; 
} 

void lis(int arr,int n){
	int max_arr[n];
	int min_arr[n];
	int lis[n];
	
}