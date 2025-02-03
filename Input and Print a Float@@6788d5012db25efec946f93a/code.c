#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num;
    scanf("%f", &num);
    printf(" you entered: %.2f\n", num);
    return 0;
}