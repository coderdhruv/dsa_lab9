#include<stdio.h>
#include<stdlib.h>
int main(){
	int k,curr_capi,n;
	scanf("%d %d %d",&k,&curr_capi,&n);
	int profit[n];
	int capital[n],i=0;
	for(i=0;i<n;i++){
		scanf("%d",&profit[i]);
	}
	int index[i];
	int visited[i];
	for(i=0;i<n;i++){
		visited[i] = 0;
		index[i] = i;
		scanf("%d",&capital[i]);
	}
	int cnt = 0;
	int max = 0;
	int max1 = 0;
	while(cnt!=k){
		int h;
		for(i=0;i<n;i++){
			if(curr_capi >= capital[i] && visited[i] == 0){
				if( profit[i] > max){
					max = profit[i];
						
					h = i;
				}		
			}
		}
		curr_capi = curr_capi + max;
		visited[h]=1;
		cnt++;
	}
	printf("%d",curr_capi);
	
	
}
