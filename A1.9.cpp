#include <iostream>
#include <cstring>
using namespace std;
char *concat(const char* a, const char* b)
{
    int l = strlen(a) + strlen(b);
    char *s = new char[l];
    for (int i=0; i<strlen(a); i++)
    {
        s[i] = a[i];
    }
    for (int i=strlen(a); i<l; i++)
        s[i] = b[i-strlen(a)];
        s[l] = '\0';
    return s;
}
int main()
{
    char a[] = "Hello";
    char b[] = "World";
    cout << concat(a,b);
    return 0;
}
