#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "div.h"
#include "mult.h"
int main()
{
	int x , y ;
	char op;
	printf("Enter your first number :");
	scanf("%d",&x);
	printf("\nEnter your operator :");
	scanf(" %c",&op);
	printf("\nEnter your second number :");
	scanf("%d",&y);
	
	switch(op)
	{
		case '+':printf("the result is : %d\n", add(x,y));
		break;
		case '-':printf("the result is : %d\n",sub(x,y));
		break;
		case '*':printf("the result is : %d\n",mult(x,y));
		break;
		case '/':printf("the result is : %d\n",div(x,y));
		break;
		default: printf("default\n");
	}
	return 0;
}
