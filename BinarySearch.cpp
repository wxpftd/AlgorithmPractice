#include <iostream>

using namespace std;

template <class Type>
int BinarySearch(Type list[], const Type &x, int n)
{
    int left = 0, right = n-1;
    while (left <= right)
    {
        int middle = (left + right)/2;
        if (list[middle] == x)
            return middle;
        else if (list[middle] > x)
            right = middle-1;
        else if (list[middle] < x)
            left = middle+1;
    }
    return -1;
}

int main()
{
    int list[]{1,2,4,5,12,234,511,1234};
    cout << BinarySearch(list, 5, 8) << endl;
    return 0;
}
