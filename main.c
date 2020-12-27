#include<stdio.h>

int main(){
	
	int num, lastd, firstd;
	printf("Please give a number: ");
	scanf("%d", &num);
	firstd=num;
	lastd=num%10;
	while(firstd/10!=0){
		firstd/=10;
	}
	printf("First Digit of %d is: %d\n", num, firstd);
	printf("Last Digit of %d is: %d", num, lastd);
	
	return 0;
}
