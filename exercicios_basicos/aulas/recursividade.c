#include <stdio.h>

void func (int n) {
    /*   CRESCENTE   */
    if (n>0) {
        printf ("%d\n",n);
        func(n-1);
    }
}


void func(int n);
int main () {
    func(10);
    return 0;
}