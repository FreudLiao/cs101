#include <stdio.h>

int myStrlen(char* s) {
    if (!*s) return 0;
    return 1 + myStrlen(s+1);
}

int main() {
    char s[] = "IU is a girl";
    printf("(%s) len = %d\n",s , myStrlen(s));
    return 0;
}
