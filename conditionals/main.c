#include <stdio.h>


void compare(foo, bar) {
    if(foo < bar) {
        printf("%s", "Foo menor que bar");
    } else {
        printf("%s", "Foo maior que bar");
    }
}

int main() {
    int foo = 1;
    int bar = 2;

    compare(foo, bar);
}