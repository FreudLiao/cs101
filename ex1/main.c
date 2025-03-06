#include <stdio.h>

int main()
{
    FILE* fp;
    int   a[] = {0,1,2};
    char  b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};
    
    fp = fopen("a.bin", "wb+");
    fwrite(a, sizeof(a), 3, fp);
    fseek(fp, 0, SEEK_SET);
    fread (a, sizeof(a), 3, fp);
    for (int i = 0; i<3; i++) {
        printf("%d ", a[i]);
    }
    fwrite(b, sizeof(b), 1, fp);
    for (int i = 0; i<3; i++) {
        printf("%c ", b[i]);
    }
    fread (b, sizeof(b), 1, fp);
    fwrite(c, sizeof(c), 1, fp);
    fread (c, sizeof(c), 1, fp);
    for (int i = 0; i<3; i++) {
        printf("%f ", c[i]);
    }
    return 0;
}
