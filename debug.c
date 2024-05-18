#include <stdio.h>
#include <stdlib.h>

struct tr {
    char name;
    int value;
};
struct tr Traces[20];
int nTr = 0;


void add_TT(char var) {
    if (nTr < 20) {

        Traces[nTr].name = var;
        Traces[nTr].value = 0;

        printf("Variable %c added to Traces array.\n", var);
        nTr++;
    } else {
        printf("Traces array is full. Cannot add more variables.\n");
    }
}

void display_TT(char var) {
    for (int i = 0; i < nTr; i++) {
        if (Traces[i].name == var) {
            printf("%c:%d\n", Traces[i].name, Traces[i].value);
            return;
        }
    }

    printf("Variable %c not found in Traces array.\n", var);
}

void update_TT(char var, int val) {
    for (int i = 0; i < nTr; i++) {
        if (Traces[i].name == var) {
            Traces[i].value = val;
            printf("Variable %c updated to %d in Traces array.\n", var, val);
            return;
        }
    }

    printf("Variable %c not found in Traces array.\n", var);
}

void remove_TT(char var) {
    for (int i = 0; i < nTr; i++) {
        if (Traces[i].name == var) {
            for (int j = i; j < nTr - 1; j++) {
                Traces[j] = Traces[j + 1];
            }
            nTr--;
            printf("Variable %c removed from Traces array.\n", var);
            return;
        }
    }
    printf("Variable %c not found in Traces array.\n", var);
}
