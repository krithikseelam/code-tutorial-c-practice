#include <stdio.h>

struct vecator{
    int i;
    int j;
};


int main(){
    struct vecator v = {1,2};
    printf("The value of vector is %di + %dj",v.i,v.j);
    return 0;
}