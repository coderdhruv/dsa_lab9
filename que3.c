#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int isPrime(int n){
	int i,j,flag=0;
	if(n==2||n==1){
		return 1;
	}
	if(n>2){
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}		
	}
	if(flag==0){
		return 1;
	}
	else{
		return 0;
	}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	double a[n];
	for(i=0;i<n;i++){		
		scanf("%lf",&a[i]);		
	}
	for(i=0;i<n;i++){
		int y1 = sqrt(a[i]);
		int y2 = a[i];
		int count = 0;
		while(y2 != 0){
			if(isPrime(y2)==1){
				y2 = y2-1;
				count = count+1;
			}
			for(j=y1;j<=n;j++){
				if(y2%j==0){
					count = count+1;
					int r = y2/j;
					int s = max(r,j);
					y1 = 
				}
			}
		}
	}
	
}
