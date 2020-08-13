#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    vector<int> v;
	    int n;
	    scanf("%d",&n);
	    for(int j=0;j<n;j++){
	        int a;
	        scanf("%d",&a);
	        v.push_back(a);
	    }
	    int k;
	    scanf("%d",&k);
	    make_heap(v.begin(),v.end());
	    for(int j=0;j<(n-k);j++){
	        pop_heap(v.begin(),v.end());
	        v.pop_back();
	    }
	    printf("%d\n",v.front()
	}
	return 0;
}
