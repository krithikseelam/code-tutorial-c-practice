#include <stdio.h>


typedef V{
    int i;
    int j;
}V;


V sumVector(V v1, V v2){
    V v3 = {v1.i + v2.i,v1.j + v2.j};
    return v3;
    
};

int main(){
    V v1 = {1,2};
    V v2 = {2,3};
    V v3 = sumVector(v1,v2);
    printf("The value of vector v3 is %di + %dj",v3.i,v3.j);
    return 0;
}