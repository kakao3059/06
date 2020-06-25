#include <stdio.h>
    
void foo()
{
        printf("foo\n");
}

void bar()
{
        printf("bar\n");
}

int main()
{
    char bb[2]="";
    strcpy(bb, "abcdefghijklmnop");
        foo();
        bar();
    
        return 0;
}
