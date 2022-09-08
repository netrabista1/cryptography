#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x)  cos(x)-3*x+1
#define g(x)   (1+cos(x))/3
int main(){
	float x0,x1,f1,e=0.005;
	int step=1,N;
	
	printf("\nenter the initial gueses:\n");
	scanf("%f ",&x0);
	printf("enter the maximum iteration:\n");
	scanf("%d",&N);
	
	
	printf("\nstep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	
	
	do{
		x1=g(x0);
		
		
		printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f(x0),x1,f(x1));
		
		step=step+1;
		x0=x1;
		
	}
	while(fabs(f(x1))>e);
	printf("\nroot is =%f",x1);
	printf("\nfunctional value=%f",f(x1));
	printf("\nsteps=%d",step-1);
}
