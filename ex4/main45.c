#include <stdio.h>

void tower0fHanoi(int n, char fromRod, char toRod, char auxRod){
    if(n == 1) {
        printf("\n Move disk 1 from rod %c to rod %c", fromRod, toRod);
        return;
    }
    tower0fHanoi(n-1, fromRod, auxRod, toRod);
    printf("\n Move disk %d from rod %c to rod %c", n, fromRod, toRod);
    tower0fHanoi(n-1, auxRod, toRod, fromRod);
}

int main() {
    int n = 3;
    tower0fHanoi(n, 'A', 'B', 'C');
    return 0;
}
