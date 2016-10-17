#include<stdio.h>
int main(){
	int n=10;
	int A[10]={10,9,8,2,6,5,4,3,7,1};
	int i,j,c=0,d,smallest,temp;
	for(i=0;i<n-1;i++){
		smallest = i ;
		for(j=i+1;j<n;j++){
			if(A[j]<A[smallest]){
				smallest=j;
			}
			c++;
		}

		for(d=0;d<n;d++){
				printf("%d",A[d]);
			}
		printf("\n");
		temp=A[i];
		A[i]=A[smallest];
		A[smallest]=temp;
	}
	printf("\n%d",c);
	
}
