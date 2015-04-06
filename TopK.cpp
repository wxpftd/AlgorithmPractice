#include <iostream>
using namespace std;

int TopK(int num[], int l, int r,  int k)
{
	if (l > r || k < 1 || k > (r-l+1))	
	{
		cout << "wrong" << endl;
		return -1;
	}
	int i=l, j=r, X=num[j];
	while (i<j)
	{
		while (i<j && num[i]<X)	
			++i;
		if (i<j)
			num[j--] = num[i];
		while (i<j && num[j]>=X)
			--j;
		if (i<j)
			num[i++] = num[j];
	}
	num[j] = X;
	if (k < (j-l+1))
		return TopK(num, l, j-1, k);
	else if (k > (j-l+1))
		return TopK(num, j+1, r, k-(j-l)-1);
	else
		return num[j];
}

void qSort(int num[], int l, int r)
{
	if (l >= r)
		return ;
	int i = l, j = r, X = num[r];
	while (i < j)
	{
		while (i<j && num[i]<X)
			++i;
		if (i<j)
			num[j--] = num[i];
		while (i<j && num[j]>=X)
			--j;
		if (i<j)
			num[i++] = num[j];
	}
	num[j] = X;
	qSort(num, l, j-1);
	qSort(num, j+1, r);
}

int main()
{
	int num[]{2,34,42,1,23,5,2,5,6,7,7,5,4,3,2,3,4};
	cout << TopK(num, 0, sizeof(num)/sizeof(int)-1, 2) << endl;
	cout << TopK(num, 0, sizeof(num)/sizeof(int)-1, 3) << endl;
	cout << TopK(num, 0, sizeof(num)/sizeof(int)-1, 4) << endl;
	cout << TopK(num, 0, sizeof(num)/sizeof(int)-1, 16) << endl;
	return 0;
}
