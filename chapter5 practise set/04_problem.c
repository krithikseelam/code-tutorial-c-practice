#include <stdio.h>
int febonachi(int);

int febonachi(int n){
    if(n == 1||n == 2){
        return n-1;
    }
    return febonachi(n-1) + febonachi(n-2);
}

int main(){
    int nth_febo;
    printf("which febonachi number you want:\n");
    scanf("%d",&nth_febo);
    printf("%d th febonachi series is %d",nth_febo,febonachi(nth_febo));

    return 0;
}