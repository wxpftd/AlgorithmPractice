#include <iostream>
#include <string>

using namespace std;

string oneMutil(char one, string y)
{
    char result[y.size()+2];
    int c=0, a, b=one-'0';
    for (int pos = y.size()-1; pos >= 0; --pos)
    {
        a = y[pos]-'0'; 
        c = a * b + c/10;
        result[y.size()-pos-1] = c%10+'0';
    }
    if (c >= 10)
    {
        result[y.size()] = c/10+'0';
        result[y.size()+1] = '\0';
    }
    else
        result[y.size()] = '\0';
    string tempResult(result);
    for (int pos = 0; pos < int(tempResult.size()); ++pos)
    {
        result[pos] = tempResult[tempResult.size()-pos-1]; 
    }
    return string(result);
}

string BigMutil(string x, string y)
{
    char result[x.size() + y.size() + 10];
    string tempResult[10];
    for (int i=0; i < 10; ++i)
        tempResult[i] = "-1";
    tempResult[0] = 0;
    tempResult[1] = y;
    for (int pos = x.size()-1; pos >= 0; --pos)
    {
        if (tempResult[x[pos]] == "-1") 
            tempResult[x[pos]] = oneMutil(x[pos], y);
             
    }
    return result; 
}

string BaseBigPlus(string x, string y)
{
    string result = "";      
    return result; 
}

int main()
{
    cout << oneMutil('9', "1232") << endl;
    return 0;
}
