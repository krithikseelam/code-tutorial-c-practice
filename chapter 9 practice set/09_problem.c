#include <stdio.h>

 typedef struct Date{
    int dd;
    int mm;
    int yyyy;
}DT;

int compare(DT d1,DT d2){
    // if d1 in the future, return 1
    if((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd)){
        return 0;
    }
    else if(d1.yyyy > d2.yyyy){
        return 1;
    }
    else if(d1.mm > d2.mm){
        return 1;
    }
    else if(d1.dd > d2.dd){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
    DT d1 = {22,03,2009};
    DT d2 = {11,02,1979};
    printf("%d",compare(d2,d1));
    return 0;
}