#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

#define STRSZIE 5000

using namespace std;

int main(void)
{
	char str[STRSZIE+1];
	int size = STRSZIE+1;
	int counter[26];
	memset(counter, sizeof(counter), 0);

	cin.getline(str, size);
	int len = strlen(str);
	char c;
	for (int i=0; i<len; ++i)
	{
		c = str[i];
		if (isalpha(c))
			++counter[toupper(c)-'A'];
	}
	for (int i=0; i<26; ++i)
		if (counter[i]!=0)
			printf("%c: %d\n", 'A'+i, counter[i]);
	return 0;
}
