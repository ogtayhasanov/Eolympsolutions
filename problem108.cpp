#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (c>a && c<b || c>b && c<a) {
		printf("%d",c);
	}
	else if (a>c && a<b || a>b && a<c){
		printf("%d",a);
	}
	else {
		printf("%d",b);
	}
	return 0;
}