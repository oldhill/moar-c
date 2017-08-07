#include <stdio.h>


#define MULTIPLIER 5


void say_hello(void);
int const_multiply(int n);


int main()
{
    say_hello();
    printf("%d\n", const_multiply(5));

    return 0;
}


void say_hello(void)
{
    printf("Hello, world\n");
}


int const_multiply(int n) {
    return MULTIPLIER * n;
}
