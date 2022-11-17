#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int c;
	int b=1;
	int e=0;
	int d=0;
	int f=0;
	int g=0;
	int o=0;
	int q=0;
	int r=0;
	int m=0;
	int p=0;
	scanf("%d",&a);
	int n=a;
	while(b<11){
		
		scanf("%d",&c);
		b++;
		if(a==c){
			printf("Win");
			exit(0);
		}
		
		int h=a%10;
		a=a/10;
		int i=a%10;
		a=a/10;
		int j=a%10;
		a=a/10;
		int k=a%10;
		int l=a/10;
		
		int h1=c%10;
		c=c/10;
		int i1=c%10;
		c=c/10;
		int j1=c%10;
		c=c/10;
		int k1=c%10;
		int l1=c/10;
		if(h==h1){
	
		e=e+1;
		int m=h;
			}
		else if(h==l1 || h==i1 || h==j1 || h==k1 ){
			d=d+1;
		}
		if(i==i1){
		
		e=e+1;
		int o=i;
			}
		else if((i==l1 || i==h1 || i==j1 || i==k1) && i!=m){
			d=d+1;
		}
		if(j==j1)
		{
		
		e=e+1;
		 int p=j;
			}
		else if((j==l1 || j==h1 || j==i1 || j==k1) && (j!=m || j!=o )){
			d=d+1;
		}
		if(k==k1){
		
		
		e=e+1;
		int q=k;
		}
			else if((k==l1 || k==h1 || k==i1 || k==j1) && (k!=m || k!=o || k!=p)){
			d=d+1;
		}
		if(l==l1){
		
		e=e+1;
		int r=l;
		}
			else if((l==k1 || l==h1 || l==i1 || l==j1) && (l!=m || l!=i || l!=j || l!=k) ){
			d=d+1;
		}
	
	   printf("%d\t%d\n",d,e);
	   a=n;
	   d=g;
	   e=f;
		
	}
	printf("Lose");
	
}