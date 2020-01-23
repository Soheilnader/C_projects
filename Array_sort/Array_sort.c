//By:Soheil
#include <stdio.h>
main()
{
	int x[11]={5,3,7,2,1,7,3,4,2,74,43}, t, i, j;
	for (i=0;i<10;i++)
	{
		for(j=i+1 ; j<11; j++)
		{
			if(x[j]<x[i])
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
	for(i=0;i<11;i++)
	printf("%d ",x[i]);
}
