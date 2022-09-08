#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define f(x)  x*x-x-6
int main(){
	float x0,x1,x2,f0,f1,f2,e=0.005;
	int step=1,N;
	
	printf("\nenter the initial gueses:\n");
	scanf("%f %f",&x0,&x1);
	printf("enter the maximum iteration:\n");
	scanf("%d",&N);
	
	
	printf("\nstep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	
	
	do{
		f0=f(x0);
		f1=f(x1);
		x2=x1-((x1-x0)*f1/(f1-f0));
		f2=f(x2);
		
		
		printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2,f2);
		x0=x1;
		f0=f1;
		x1=x2;
		f1=f2;
		step=step+1;
		
		
	}
	while(fabs(f2)>e);
	printf("\nroot is =%f",x2);
	printf("\nfunctional value=%f",f2);
	printf("\nsteps=%d",step-1);
}
