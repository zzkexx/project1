#include <stdio.h>
#include <iostream>
using namespace std;

void fun(int x, int y, int *c, int *d)
{
    *c = x + y;
    *d = x - y;
};

int main()
{
    int a = 4, b = 3, c = 0, d = 0;
    fun(a,b,&c,&d);
    printf("%d %d \n",c,d);

};

const char* a;
char const* b;

class Foo
{
    void Bar(void) const;
};
