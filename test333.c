#include<stdio.h>	
#include<string.h>
main( )
{  int pc,u,v,ir,k[100],i=0,flag;FILE *fp;char fl[10];
    printf("Give filename");scanf("%s",fl);fp=fopen(fl,"r");
    do {fscanf(fp, "%d",&k[i]);  i++;} while(k[i-1]!=100);
    k[99]=0;
    do{ pc=k[99]; ir=k[pc];pc++; k[99]=pc; u=ir/100; v=ir%100;
           k[93]=k[91]+k[92]; k[94]=k[91]-k[92];
           k[95]=k[91]*k[92]; k[96]=k[91]/k[92];
           if(k[94]<0) flag=1; else flag=0;
           if(v==97){printf("give input");scanf("%d",&k[97]);}
           k[u]=k[v]; 
           if(u==98){ printf("output%d",k[98]);fflush(stdout);}

           if((u==90)&&(flag==0))k[99]=k[90];
     }while(1==1);
}