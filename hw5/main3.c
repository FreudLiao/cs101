#include <stdio.h>

int main(){
    int x=1,y=1;
    for( y = 1 ; y <= 9; y++){
        printf("%d*%d=%d\t",x,y,x*y);
       
        if (y==9){
            x=x+1;
            y=0;
            printf("\n");
            if(x==10){
                break;
            }
        }
    }
    return 0;
}
