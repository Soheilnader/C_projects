//By : Soheil
#include <stdio.h>
#include <math.h>

main(){
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d = b*b-4*a*c;
	float x1 = (-b+sqrt(d))/(2*a), x2 = (-b-sqrt(d))/(2*a);
	d>=0 ? printf("x1=%g x2=%g",x1,x2) : printf("no roots");
}
