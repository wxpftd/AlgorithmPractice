#include <iostream>

using namespace std;

int integerDiv(int n, int m)
{
    if (m == 1)
        return 1;
    else if (n < m)
        return integerDiv(n, n);
    else if (n == m)
        return integerDiv(n, n-1) + 1;
    else if (n > m && m > 1)
        return integerDiv(n, m-1) + integerDiv(n-m, m);
    return -1;
}

int main()
{
    cout << integerDiv(6, 6) << endl;
    return 0;
}
