#include<stdio.h>
#include"hello.h"
int b;
#ifdef MACRO
    int b = 10;
#endif
// int c;
extern int a;
extern void func(void);
int main(int argc, char const *argv[])
{
    /* code */
    printf("Welcome GCC compiler\n");
    printf("A variable is %d,m b = %d, c = %d\n",a,b,c);
    func();
    printf("Hello");
    return 0;
}
