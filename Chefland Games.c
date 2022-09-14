#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c,d;
	scanf("%d",&t);

	do{
	    scanf("%d %d %d %d",&a, &b, &c, &d);
	    if(a==0 && b==0 && c==0 && d==0)
	       printf("IN\n");
	    else
	       printf("OUT\n");
	    i++;
	}while(i<t);
	return 0;
}


