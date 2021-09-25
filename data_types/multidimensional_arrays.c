#include <stdio.h>


int foo = 1;
int bar = 2;

if(foo < bar) {
    printf('Foo menor que bar');
} else { 
    printf('Bar menor que foo');
};

int main() {
    char vowels[1][5] = {
        {'a', 'e', 'f', 'g', 'h'}
    };

    printf("%c", vowels[1][5]);
}