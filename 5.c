#include<stdio.h>
#include<math.h>

int main(){
	int x,degree,i;
	float sum=0.0;
	int a[10];
	
	
	printf("enter the value of x:\n");
	scanf("%d",&x);
	
	printf("enter the degree of polynomial:\n");
	scanf("%d",&degree);
	
	printf("enter the coefficient of the x:\n");
	for(i=degree;i>=0;i--){
		printf("enter the coefficient of x^%d\n",i);
		scanf("\n%d",&a[i]);
	}
	
	for(i=degree;i>0;i--){
		sum=(sum+a[i])*x;
	}
	sum=sum+a[i];
	
	printf("\nvalue of the polynomial is=%f\n",sum);
	return 0;
}
