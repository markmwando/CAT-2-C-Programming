#include <stdio.h>

int main()
{
	int i,j,k;
	int scores[2][2][2]={{{84,72},{65,92}},{{59,67},{35,70}}};
	
	for(i=0;i<2;i++)
		for(k=0;k<2;k++)
			for (j=0;j<2;j++)
				
printf("scores[%d][%d][%d]=%d\n",i,j,k,scores[i][j][k]);	
	
	return 0;
}