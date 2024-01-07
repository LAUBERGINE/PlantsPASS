#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "lib.h"

int main() {
    int choix, BkbptQqhxZ;

    srand(time(NULL));
    FKRdYeOGZN();
    const char* userKey = "userkey.key";
    const char* machineKey = "machinekey.key";
    const char* nebWdqysXZ = SQjGCJfmkH(userKey);
    const char* DeLUsiZgyt = SQjGCJfmkH(machineKey);

    do {
        HpvzyBfGPs();
        printf("Choix : ");
        scanf("%d", &choix);
        getchar(); 

        switch (choix) {
            case 1:
                system("cls");
                BkbptQqhxZ = rand() % 73 + 1;
                MTxsXZpnfg(nebWdqysXZ, DeLUsiZgyt, BkbptQqhxZ);
                break;
            case 2:
                system("cls");
                QdZiwBAnja(nebWdqysXZ, DeLUsiZgyt);
                break;
            case 3:
                system("cls");
                wOFYmcHKnx(nebWdqysXZ, DeLUsiZgyt);
                break;
            case 4:
                system("cls");
                mgsfYXFByE(nebWdqysXZ, DeLUsiZgyt);
                break;
            case 5:
                break;
            default:
                system("cls");
        }
    } while (choix != 5);

    return 0;
}
