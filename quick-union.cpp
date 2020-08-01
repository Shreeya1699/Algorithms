#include <bits/stdc++.h>
using namespace std;
bool connected(int p, int q, int id[]);
void _union(int p, int q, int id[]);
void printlist(int id[], int N);

int root(int i, int id[]){
	
	while(id[i]!=i)
		i=id[i];
	return i;	
}

bool connected(int p, int q, int id[]){
	return root(p,id)==root(q,id);
}

void _union(int p, int q, int id[]){
	int r1= root(p,id);
	int r2 =root(q,id);
	id[r2]=r1;
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
		_union(a,b,id);
	}
	int r= root(2, id);
	cout<<r<<" ger\n";
	printlist(id,n);

}