#include <stdio.h>
#include <stdlib.h>
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