#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function  
    int temp;
    int *ptemp=&temp;
    *ptemp = *a;
    (*a)=(*a) + (*b);
    (*b)=abs((*ptemp) - (*b));  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Enter the values of a and b : ");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}