#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long long a,b;
	long long result;
	char op;
	scanf("%lld %c %lld", &a, &op, &b);
	switch(op)
	{
		case '+':
			result = a+b;
			break;
		case '-':
			result = a-b;
			break;
		default:
			result = a*b; //Note: int*int return int.
	}
	printf("%lld\n", result);
	return 0;
}
