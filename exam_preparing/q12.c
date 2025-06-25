//
// Created by Erimsah Olut on 22.06.2025.
//

#include <stdlib.h>
#include <string.h>
#define MAX 100
#define filename "transactions.txt"

typedef struct {
    char iban[28];
    float amount;
    char date[11];
} transaction;

float computeBalance(transaction **selTransactions, int n_sel, char *init) {
    float total = atof(init);
    for (int i = 0; i < n_sel; ++i) {
        total += selTransactions[i]->amount;
    }
    return total;
};

int selectTransactions(transaction listTransactions[], int n, transaction **selTransactions,
                       char *iban) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (strcmp(listTransactions[i].iban, iban) == 0) {
            selTransactions[count++] = &listTransactions[i];
        }
    }
    return count;
}
