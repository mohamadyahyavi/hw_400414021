#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	int l=0;
	int a=0;
	int b=0;
	int c=0;
	int mynumbers[101];
	int mynumbers1[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&mynumbers[i]);
	}
	
	for(int j=0;j<n;j++){
		a=0;
		for(int k=0;k<n;k++){
			
				if(mynumbers[j]==mynumbers[k] && j!=k){
			
			      mynumbers[j]=mynumbers[k]=0;
			      
				}
		}
		if(mynumbers[j]!=0){
			
		mynumbers1[l]=mynumbers[j];
		l++;	
			
		}
			
	}
	for(int i=0;i<l;i++){
		c^=mynumbers1[i];
		
	
	//printf("%d",mynumbers1[i]);
	
	
	}
	printf("%d",c);
	
	

}