#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x;
	scanf("%d",&t);

	do{
	    scanf("%d",&x);
	    if(x<=50)
	       printf("LEFT\n");
	    else
	       printf("RIGHT\n");
	       i++;
	}while(i<t);
	return 0;
}
