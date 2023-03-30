#include <stdio.h>
#include <stdlib.h>

typedef struct PolyNode *Polynomial;
struct PolyNode {
    int coef;       // 系数
    int expon;      // 指数
    Polynomial next;    // 下一个节点
};

Polynomial ReadPoly();      // 读入多项式
Polynomial AddPoly(Polynomial P1, Polynomial P2);    // 多项式加法
void PrintPoly(Polynomial P);      // 输出多项式

int main()
{
    Polynomial P1, P2, PS;

    P1 = ReadPoly();
    P2 = ReadPoly();
    PS = AddPoly(P1, P2);
    PrintPoly(PS);

    return 0;
}

Polynomial ReadPoly()
{
    Polynomial P, rear, t;
    int N, c, e;

    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->next = NULL;
    rear = P;

    scanf("%d", &N);
    while (N--) {
        scanf("%d %d", &c, &e);
        t = (Polynomial)malloc(sizeof(struct PolyNode));
        t->coef = c;
        t->expon = e;
        t->next = NULL;
        rear->next = t;
        rear = t;
    }

    return P;
}

Polynomial AddPoly(Polynomial P1, Polynomial P2)
{
    Polynomial t1, t2, rear, t;
    int sum;

    t1 = P1->next;
    t2 = P2->next;
    rear = (Polynomial)malloc(sizeof(struct PolyNode));
    rear->next = NULL;
    t = rear;

    while (t1 && t2) {
        if (t1->expon > t2->expon) {
            t->next = t1;
            t = t1;
            t1 = t1->next;
        } else if (t1->expon < t2->expon) {
            t->next = t2;
            t = t2;
            t2 = t2->next;
        } else {
            sum = t1->coef + t2->coef;
            if (sum) {
                t->next = (Polynomial)malloc(sizeof(struct PolyNode));
                t = t->next;
                t->coef = sum;
                t->expon = t1->expon;
                t->next = NULL;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
    }

    while (t1) {
        t->next = t1;
        t = t1;
        t1 = t1->next;
    }

    while (t2) {
        t->next = t2;
        t = t2;
        t2 = t2->next;
    }

    t->next = NULL;

    t = rear;
    rear = rear->next;
    free(t);

    return rear;
}

void PrintPoly(Polynomial P)
{
    int flag = 0;

    if (!P) {
        printf("0 0\n");
        return;
    }

    while (P) {
        if (!flag) {
            flag = 1;
        } else {
            printf(" ");
        }
        printf("%d %d", P->coef, P->expon);
        P = P->next;
    }
    printf("\n");
}
