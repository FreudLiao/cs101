#include <stdio.h>

int main(){
    int i =1;
    int thousand,unit;
    thousand = (i /1000)%10;
    unit = i %10;
    i=i-(1000*thousand)-(unit);
    int newi= i+(1000*unit)+(thousand);
    printf("%d",newi);
    return 0;
}
