#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) sin(x)- 5*x+6
#define g(x) cos(x)-5

void main(){
	float x0,x1,f0,f1,g0,e;
	int step=1,N;
	
	printf("enter the initial points:\n");
	scanf("%f",&x0);
	
	printf("enter tolerable error:\n");
	scanf("%f",&e);
	
	printf("enter maximum number of iteration:\n");
	scanf("%f",&N);
	
	do{
		g0=g(x0);
		f0=f(x0);
		
		x1=x0-f0/g0;
		
		printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		x0=x1;
		step=step+1;
		f1=f(x1);
	}
	while(fabs(f1)>e);
	
	printf("\nroot:%f",x1);
	printf("\nsteps:%d",step-1);
	printf("\nfunctional value:%f",f1);
}
