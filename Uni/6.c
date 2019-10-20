//By : Soheil
#include <stdio.h>

main(){
	float x,y,z,max;
	scanf("%f%f%f",&x,&y,&z);
	max=x;
	if(y>max)
	max=y;
	if(z>max)
	max=z;
	printf("%f",max);
}
