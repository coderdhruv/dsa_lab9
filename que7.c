#include<stdio.h>
#include<stdlib.h>
int b[10000];
int visited[10000];
int top2 = -1;
int min = 100000;
int matrix[100][100];
void dfs(int matrix[100][100],int visited[],int source,int dest,int k,int n){
	int m;
	if(source == dest){
		if(top2 == k+1){
			int j;
			int sum=0;
			for(j=0;j<top2;j++){
				sum = sum + matrix[b[j]][b[j+1]];				
			}
			if(sum < min){
				min = sum;
			}
			sum=0;			
		}		
	}
	int i=0;
	for(i=0;i<n;i++){
		if(matrix[source][i]!=0 && visited[i]==0 ){
			visited[i] = 1;			
			b[++top2] = i;			
			dfs(matrix,visited,i,dest,k,n);
		}
	}	
	int h = b[top2];
	if(top2>=1){
		visited[h]=0;
		top2 = top2-1;		
	}	
}
int main(){
	int n;
	int m;
	scanf("%d %d",&n,&m);
	int k1,k2,cost;
	int i=0,j=0;
	for(i=0;i<n;i++){		
		for(j=0;j<n;j++){
			visited[i]=0;
			matrix[i][j]=0;
		}
	}
	for(i=0;i<m;i++){
		scanf("%d %d %d",&k1,&k2,&cost);		
		matrix[k1][k2] = cost;
		matrix[k2][k1] = cost;
	}
	int m2;
	scanf("%d",&m2);
	int source,dest,k;
	for(i=0;i<m2;i++){
		scanf("%d %d %d",&source,&dest,&k);
		min = 100000;
		visited[source] = 1;
		b[++top2] = source;		
		dfs(matrix,visited,source,dest,k,n);
		for(j=0;j<n;j++){
			visited[j]=0;
		}
		top2=-1;
		printf("minimum sum is: %d",min);
	}
}
