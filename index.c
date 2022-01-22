#include <stdio.h>
#include <stdlib.h>

void helloworld() {
    printf("Hello World\n");
    printf("\n\n");
    return;
}

int memory() {
    int a;
    a = 10;
    int *p = &a;
    printf("値：%d\n",a);
    printf("メモリ領域：%d\n",p);

    printf("\n\n");

    int *mem = malloc(100);
    printf("mallocされたメモリ領域：%d\n",mem);
    free(mem);
    printf("freeされたメモリ領域：%d\n",mem);

    printf("\n\n");
}

void struc() {
    typedef struct {
        char name[20];
        int tires;
        int doors;
    } Car;

    Car prius = {"プリウス", 4, 4};
    
    printf("車の名前は%sで、タイヤの数は%d個、ドアの数は%d個です。\n", prius.name, prius.tires, prius.doors);
    printf("Carインスタンスのサイズ：%d\n",sizeof(prius));
}

void forTest() {
    int count;
    for (count = 1; count <= 3; count = count + 1)
        printf("count：%d\n", count);
}

void main() {
    helloworld();
    memory();
    struc();
    forTest();
    return;
}