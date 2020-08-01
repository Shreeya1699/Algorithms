#include<bits/stdc++.h>

using namespace std;
void _union(int p, int q, int id[], int N);
void printlist(int id[], int N);

bool connected(int p, int q, int id[]){
		if(id[p]==id[q])
			return true;
		else
			return false;
	}

void _union(int p, int q, int id[],int N){
		int pid=id[p];
		int qid =id[q];
		for(int i=0;i<N;i++){
			if(id[i]==pid)
				id[i]=qid;
		}
	}
void printlist(int id[], int N){
		for(int i=0;i<N;i++){
			cout<<id[i]<<" ";
		}
	}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif 
	int n,u;
	cin>>n>>u;
	int id[n];
	for(int i=0;i<n;i++)
		id[i]=i;
	for(int i=0;i<u;i++){
		int a,b;
		cin>>a>>b;
		_union(a,b,id,n);
	}
	printlist(id,n);
	return 0;

}