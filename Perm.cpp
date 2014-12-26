#include <iostream>

using namespace std;

template <class Type>
inline void Swap(Type &a, Type &b)
{
    Type temp = a;
    a = b;
    b = temp;
}

template <class Type>
void Perm(Type list[], int k, int m)
{
    if (k == m)
    {
        for (int i = 0; i < k; ++i) 
            cout << list[i] << " ";
        cout << endl;
    }
    else
    {
        for (int i=k; i<m; ++i) 
        {
            Swap(list[k], list[i]); 
            Perm(list, k+1, m);
            Swap(list[k], list[i]); 
        }
    }
}

int main()
{
    int list[]{45,6};
    Perm(list, 0, 2);
    return 0;
}
