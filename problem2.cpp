#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    long b,a,n=1;
    scanf("%ld",&b);
    while(b>0)
    {
       a=b/10;
	   b/=10;
	   if(a!=0)
	   {
	   	  n+=1;
	   }	
	}
	printf("%ld",n);
	return 0;
}