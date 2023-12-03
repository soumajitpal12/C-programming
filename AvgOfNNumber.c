#include<stdio.h>
void main(){
	int n[100],a,b,c,big,i;
	float avg,sum =0;
	printf("Enter how many numbers: ");
	scanf("%d",&a);
	printf("Enter the elements: ");
	for(i=0;i<a;i++){
		scanf("%d",&n[i]);
	}
	//big= n[0];
	for(i=0;i<a;i++)
	sum = sum+n[i];
	avg = sum/a;
	printf("the avg =%f",avg);
}
