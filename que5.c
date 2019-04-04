#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int *x,int *y){
	int r = *x;
	*x = *y;
	*y = r;
}
void sort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]<a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}
int main(){
	char s[1000];
	scanf("%s",s);
	int a[26],i=0,j=0;
	for(i=0;i<26;i++){
		a[i]=0;
	}
	for(i=0;i<strlen(s);i++){
		int t = s[i]-97;
		a[t]++;
	}
	int b[26];
	int e=0;
	for(i=0;i<26;i++){
		if(a[i]>0){
			b[e]=a[i];
			e++;
		}
	}
	printf("b array is:\n");
	for(i=0;i<e;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	sort(b,e);
	int flag=1;
	int y=0;
	while(flag == 1){
	int sum = 0;		
		int u = b[0];
		for(i=1;i<e;i++){
			sum = sum + b[i];
			if(sum >= u-1){
				b[0]=0;
				if(sum == u-1){
					b[i]=0;
				}
				else if(sum>u-1){
					b[i] = b[i] - (sum - u + 1);
				}
				break;
			}
			b[i] = 0;
		}
		if(sum<u-1){
			printf("NOT POSSIBLE\n");
			break;
		}
		sort(b,e);
		for(j=0;j<e;j++){
			printf("%d ",b[j]);
			if(b[j]!=0){
				flag = 2;
			}
		}
		printf("\n");
		if(flag == 2){
			flag = 1;
		}
		else{
			flag = 0;
		}
	}
	if(flag==0){
		printf("POSSIBLE");		
	}
}
