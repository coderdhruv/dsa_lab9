#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],i=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	int petrol=0,j;
	for(i=0;i<n;i++){
		int flag = 0;
		for(j=i;j<n;j++){
			petrol = petrol + a[i];
			if(petrol>b[i]){
				petrol = petrol - b[i];
			}
			else{
				flag = 1;
				break;
			}
		}		
		for(j=0;j<i%n;j++){
			petrol = petrol + a[i];
			if(petrol>b[i]){
				petrol = petrol - b[i];
			}
			else{
				flag = 1;
				break;
			}  	
		}
		if(flag == 1){
			
		}
		else{
			printf("minimum index is : %d ",i);
			break;
		}
	}
}
