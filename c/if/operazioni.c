#include <stdio.h>

int main() {
	int a,b;
	printf("Insert two numbers\n");
	scanf("%d%d",&a,&b);
	printf("\na=%d,b=%d\n",a,b);
	printf("\nsum is worth %d ",a+b);
    if (a>=b){
		printf("\ndifference is worth %d ",a-b);
	}else{
		printf("\ndifference is worth %d ",b-a);
	}
    printf("\nmultiplications is worth %d ",a*b);
	if (a%b==0){
		printf("\ninteger division is worth %d ",a/b);
	}else{
		float c=a,d=b;
		printf("\nfractional division is worth %f ",c/d);
	}
	return 0;
}