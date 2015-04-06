#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int a, b;
	int r = 1;
	scanf("%d%d", &a, &b);
	if (a<b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	while(r)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("%d\n", a);
	return 0;
}
