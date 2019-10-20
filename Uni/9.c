//By : Soheil
#include <stdio.h>

main(){
	int x,y=0;
	scanf("%d",&x);
	y=y+x%10;
	x=x/10;
	y=y+x%10;
	x=x/10;
	y=y+x%10;
	x=x/10;
	y=y+x%10;
	printf("%d",y);
}
