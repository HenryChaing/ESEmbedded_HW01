#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int(*func_ptr_arr[4])(int,int);

int main()
{
	int a, c;
	char b;
	func_ptr_arr[0] = plus;
	func_ptr_arr[1] = minus;
	func_ptr_arr[2] = multiply;
	func_ptr_arr[3] = divide;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//IF ELSE IF
	if (b == '+')
		printf("%d %c %d = %d\n", a, b, c, (*func_ptr_arr[0])(a,c));
	else if (b == '-')
		printf("%d %c %d = %d\n", a, b, c, (*func_ptr_arr[1])(a,c));
	else if (b == '*')
		printf("%d %c %d = %d\n", a, b, c, (*func_ptr_arr[2])(a,c));
	else if (b == '/')
		printf("%d %c %d = %d\n", a, b, c, (*func_ptr_arr[3])(a,c));
}
