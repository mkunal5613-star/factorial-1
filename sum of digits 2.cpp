#include<stdio.h>
int sumofdigit(int n)
{
	if(n==0)
	return 0;
	else
	return (n%10)+ sumofdigit(n/10);
	

}
int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if (num <0){
		num = -num;
		
	}
	int result = sumofdigit(num);
	printf("sum of digit of %d is %d\n",num,result);
	return 0;
	
}
