#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "lib.h"

int LoAnyOvJEu() {
    time_t t;
    time(&t);
    int YfUCSBAxXv = (int)t;

    int tPFExbwaeB = ((YfUCSBAxXv * 110155689853693621) + 78120236348) % 4512038890;

    return tPFExbwaeB;
}

char* SPUpRbtwMO(const char* VQkFEOxKYm, int PmYcIHlRkG) {
    char* GHEDfuUoRc = (char*)malloc(PmYcIHlRkG + 1);
    char* eSwfMNqnrU = strdup(VQkFEOxKYm);

    for (int JnYfAbUgLt = 0; JnYfAbUgLt < PmYcIHlRkG; ++JnYfAbUgLt) {
        int ptPTBHjUih = LoAnyOvJEu() % strlen(eSwfMNqnrU);
        GHEDfuUoRc[JnYfAbUgLt] = eSwfMNqnrU[ptPTBHjUih];

        memmove(&eSwfMNqnrU[ptPTBHjUih], &eSwfMNqnrU[ptPTBHjUih + 1], strlen(eSwfMNqnrU) - ptPTBHjUih);
    }

    GHEDfuUoRc[PmYcIHlRkG] = '\0';
    free(eSwfMNqnrU);

    return GHEDfuUoRc;
}

char* kbQZRKFzSN(const char* VQkFEOxKYm, int PmYcIHlRkG) {
    char* GHEDfuUoRc = (char*)malloc(PmYcIHlRkG + 1);
    char* eSwfMNqnrU = strdup(VQkFEOxKYm);

    srand(time(NULL));

    for (int JnYfAbUgLt = 0; JnYfAbUgLt < PmYcIHlRkG; ++JnYfAbUgLt) {
        int ptPTBHjUih = rand() % strlen(eSwfMNqnrU);
        GHEDfuUoRc[JnYfAbUgLt] = eSwfMNqnrU[ptPTBHjUih];

        memmove(&eSwfMNqnrU[ptPTBHjUih], &eSwfMNqnrU[ptPTBHjUih + 1], strlen(eSwfMNqnrU) - ptPTBHjUih);
    }

    GHEDfuUoRc[PmYcIHlRkG] = '\0';
    free(eSwfMNqnrU);

    return GHEDfuUoRc;
}

char* FICsXMovet() {
    const char* IPaCtOHGzk = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-*!?";
    const int YryBuLUNGp = 67;
    return kbQZRKFzSN(IPaCtOHGzk, YryBuLUNGp);
}

char* xdPtwQHYVh() {
    const char* eEfsxOcpFD = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-*!?";
    const int bsgIiAJdve = 67;
    return SPUpRbtwMO(eEfsxOcpFD, bsgIiAJdve);
}

void OHcPTzSfhn(const char* GHEDfuUoRc) {
    FILE* foJabSPBdi = fopen("userkey.key", "r");
    if (foJabSPBdi == NULL) {
        foJabSPBdi = fopen("userkey.key", "w");
        if (foJabSPBdi == NULL) {
            perror("Erreur lors de la création du fichier userkey.key");
            exit(EXIT_FAILURE);
        }

        fprintf(foJabSPBdi, "%s", GHEDfuUoRc);
        fclose(foJabSPBdi);
        printf("fichier userkey.key généré\n");
    } else {
        fclose(foJabSPBdi);
    }
}

void aMEqZmlCwN(const char* GHEDfuUoRc) {
    FILE* foJabSPBdi = fopen("machinekey.key", "r");
    if (foJabSPBdi == NULL) {
        foJabSPBdi = fopen("machinekey.key", "w");
        if (foJabSPBdi == NULL) {
            perror("Erreur lors de la création du fichier machinekey.key");
            exit(EXIT_FAILURE);
        }

        fprintf(foJabSPBdi, "%s", GHEDfuUoRc);
        fclose(foJabSPBdi);
        printf("fichier machinekey.key généré\n");
    } else {
        fclose(foJabSPBdi);
    }
}

void FKRdYeOGZN() {
    FILE* foJabSPBdi = fopen("password.txt", "r");
    if (foJabSPBdi == NULL) {
        foJabSPBdi = fopen("password.txt", "w");
        if (foJabSPBdi == NULL) {
            perror("Erreur lors de la création du fichier password.txt");
            exit(EXIT_FAILURE);
        }
        char* GHEDfuUoRc = FICsXMovet();
        char* dXsTVRZxcA = xdPtwQHYVh();
        OHcPTzSfhn(GHEDfuUoRc);
        aMEqZmlCwN(dXsTVRZxcA);
        fclose(foJabSPBdi);
        printf("fichier password.txt généré\n");
    } else {
        fclose(foJabSPBdi);
    }
}

char* SQjGCJfmkH(const char* HfFOaoiCQM) {
    FILE* foJabSPBdi = fopen(HfFOaoiCQM, "r");
    if (foJabSPBdi == NULL) {
        perror("Erreur lors de l'ouverture du foJabSPBdi [Les fichiers .key ne sont pas dans le dossier parent]");
        sleep(5);
        exit(EXIT_FAILURE);
    }

    fseek(foJabSPBdi, 0, SEEK_END);
    long GIOflcWMom = ftell(foJabSPBdi);
    fseek(foJabSPBdi, 0, SEEK_SET);

    char* hsIjFmDnyl = (char*)malloc(GIOflcWMom + 1);
    if (hsIjFmDnyl == NULL) {
        perror("Erreur lors de l'allocation de mémoire");
        exit(EXIT_FAILURE);
    }

    fread(hsIjFmDnyl, 1, GIOflcWMom, foJabSPBdi);
    hsIjFmDnyl[GIOflcWMom] = '\0';

    fclose(foJabSPBdi);

    return hsIjFmDnyl;
}

char* lSTZQnGWtf() {
    char* amMvNylJhc = (char*)malloc(100);
    fgets(amMvNylJhc, 100, stdin);
    amMvNylJhc[strcspn(amMvNylJhc, "\n")] = '\0';
    return amMvNylJhc;
}

char* qeaNwCYFgt(const char* RWNLgwlrKB, size_t NrsucylEjB) {
    const char eMsGUPEOVB[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    size_t PWLVmKkCZz = ((NrsucylEjB + 2) / 3) * 4 + 1;
    char* bfMXcFRyHU = (char*)malloc(PWLVmKkCZz);

    size_t UFWawyofJK = 0;

    for (size_t JnYfAbUgLt = 0; JnYfAbUgLt < NrsucylEjB; JnYfAbUgLt += 3) {
        unsigned int YMlDwSkQzv = (unsigned char)RWNLgwlrKB[JnYfAbUgLt];
        YMlDwSkQzv = (JnYfAbUgLt + 1 < NrsucylEjB) ? (YMlDwSkQzv << 8) | (unsigned char)RWNLgwlrKB[JnYfAbUgLt + 1] : YMlDwSkQzv << 8;
        YMlDwSkQzv = (JnYfAbUgLt + 2 < NrsucylEjB) ? (YMlDwSkQzv << 8) | (unsigned char)RWNLgwlrKB[JnYfAbUgLt + 2] : YMlDwSkQzv << 8;

        bfMXcFRyHU[UFWawyofJK++] = eMsGUPEOVB[(YMlDwSkQzv >> 18) & 0x3F];
        bfMXcFRyHU[UFWawyofJK++] = eMsGUPEOVB[(YMlDwSkQzv >> 12) & 0x3F];

        if (JnYfAbUgLt + 1 < NrsucylEjB) {
            bfMXcFRyHU[UFWawyofJK++] = eMsGUPEOVB[(YMlDwSkQzv >> 6) & 0x3F];
        } else {
            bfMXcFRyHU[UFWawyofJK++] = '=';
        }

        if (JnYfAbUgLt + 2 < NrsucylEjB) {
            bfMXcFRyHU[UFWawyofJK++] = eMsGUPEOVB[YMlDwSkQzv & 0x3F];
        } else {
            bfMXcFRyHU[UFWawyofJK++] = '=';
        }
    }

    bfMXcFRyHU[UFWawyofJK] = '\0';

    return bfMXcFRyHU;
}

char* ALJUmOczMy(const char* RWNLgwlrKB, size_t NrsucylEjB) {
    const char eMsGUPEOVB[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    const size_t ESbatipQwL = NrsucylEjB;
    size_t ylrcpGBVsD = (ESbatipQwL / 4) * 3;

    if (RWNLgwlrKB[ESbatipQwL - 1] == '=') {
        ylrcpGBVsD--;
        if (RWNLgwlrKB[ESbatipQwL - 2] == '=')
            ylrcpGBVsD--;
    }

    char* HbUArvSzQk = (char*)malloc(ylrcpGBVsD + 1);
    size_t UFWawyofJK = 0;

    unsigned int YMlDwSkQzv = 0;
    int YMlDwSkQzv_bits = 0;

    for (size_t JnYfAbUgLt = 0; JnYfAbUgLt < ESbatipQwL; JnYfAbUgLt++) {
        char c = RWNLgwlrKB[JnYfAbUgLt];
        if (c == '=') {
            break;
        }

        char yOeSBFDGiW;
        const char* TDgOfGkXtI = strchr(eMsGUPEOVB, c);
        if (TDgOfGkXtI != NULL) {
            yOeSBFDGiW = TDgOfGkXtI - eMsGUPEOVB;
        } else {
            free(HbUArvSzQk);
            return NULL;
        }

        YMlDwSkQzv = (YMlDwSkQzv << 6) | yOeSBFDGiW;
        YMlDwSkQzv_bits += 6;

        while (YMlDwSkQzv_bits >= 8) {
            HbUArvSzQk[UFWawyofJK++] = (YMlDwSkQzv >> (YMlDwSkQzv_bits - 8)) & 0xFF;
            YMlDwSkQzv_bits -= 8;
        }
    }

    HbUArvSzQk[UFWawyofJK] = '\0';

    return HbUArvSzQk;
}

char* TLGFKqtnmC(const char* JbCdvODonp, const char* nebWdqysXZ, const char* DeLUsiZgyt) {
    size_t IFzumiXTfG = strlen(JbCdvODonp);
    char* BFQzjAyTiq = (char*)malloc(IFzumiXTfG + 1);
    for (size_t JnYfAbUgLt = 0; JnYfAbUgLt < IFzumiXTfG; JnYfAbUgLt++) {
        const char* PRpCIEQuSN = strchr(DeLUsiZgyt, JbCdvODonp[JnYfAbUgLt]);
        if (PRpCIEQuSN != NULL) {
            BFQzjAyTiq[JnYfAbUgLt] = nebWdqysXZ[PRpCIEQuSN - DeLUsiZgyt];
        } else {
            BFQzjAyTiq[JnYfAbUgLt] = JbCdvODonp[JnYfAbUgLt];
        }
    }

    BFQzjAyTiq[IFzumiXTfG] = '\0';
    return BFQzjAyTiq;
}

char* GSRAUKjhae(const char* JbCdvODonp, const char* nebWdqysXZ, const char* DeLUsiZgyt) {
    size_t IFzumiXTfG = strlen(JbCdvODonp);
    char* BFQzjAyTiq = (char*)malloc(IFzumiXTfG + 1);

    for (size_t JnYfAbUgLt = 0; JnYfAbUgLt < IFzumiXTfG; JnYfAbUgLt++) {
        const char* PRpCIEQuSN = strchr(nebWdqysXZ, JbCdvODonp[JnYfAbUgLt]);
        if (PRpCIEQuSN != NULL) {
            BFQzjAyTiq[JnYfAbUgLt] = DeLUsiZgyt[PRpCIEQuSN - nebWdqysXZ];
        } else {
            BFQzjAyTiq[JnYfAbUgLt] = JbCdvODonp[JnYfAbUgLt];
        }
    }

    BFQzjAyTiq[IFzumiXTfG] = '\0';
    return BFQzjAyTiq;
}

char* KrVIOpjuZg(const char* amMvNylJhc, const char* nebWdqysXZ, const char* DeLUsiZgyt, int BkbptQqhxZ) {
    char* LtCfQHkDYT = qeaNwCYFgt(amMvNylJhc, strlen(amMvNylJhc));

    for (int JnYfAbUgLt = 0; JnYfAbUgLt < BkbptQqhxZ; JnYfAbUgLt++) {
        LtCfQHkDYT = TLGFKqtnmC(LtCfQHkDYT, DeLUsiZgyt, nebWdqysXZ);
    }

    return LtCfQHkDYT;
}

char* MTGdCvmaiV(const char* LtCfQHkDYT, const char* nebWdqysXZ, const char* DeLUsiZgyt, int BkbptQqhxZ) {

    char* qglKZSweNC = strdup(LtCfQHkDYT);
    for (int JnYfAbUgLt = 0; JnYfAbUgLt < BkbptQqhxZ; JnYfAbUgLt++) {
        qglKZSweNC = GSRAUKjhae(qglKZSweNC, DeLUsiZgyt, nebWdqysXZ);
    }

    char* lekbTrxIAF = ALJUmOczMy(qglKZSweNC, strlen(qglKZSweNC));

    free(qglKZSweNC);

    return lekbTrxIAF;
}

void MTxsXZpnfg(const char* nebWdqysXZ, const char* DeLUsiZgyt, int BkbptQqhxZ) {
    FILE* foJabSPBdi = fopen("password.txt", "a");

    if (foJabSPBdi == NULL) {
        perror("Erreur lors de l'ouverture du foJabSPBdi");
        exit(EXIT_FAILURE);
    }

    char site[100], login[100], amMvNylJhc[100];

    printf("Site : ");
    fgets(site, sizeof(site), stdin);
    site[strcspn(site, "\n")] = '\0'; 

    printf("Login : ");
    fgets(login, sizeof(login), stdin);
    login[strcspn(login, "\n")] = '\0';

    printf("Mot de passe : ");
    strcpy(amMvNylJhc, lSTZQnGWtf());

    char* LtCfQHkDYT = KrVIOpjuZg(amMvNylJhc, nebWdqysXZ, DeLUsiZgyt, BkbptQqhxZ);

    fprintf(foJabSPBdi, "%s;%s;%d;%s\n", site, login, BkbptQqhxZ, LtCfQHkDYT);

    free(LtCfQHkDYT);
    fclose(foJabSPBdi);

    printf("Identifiants ajoutés avec succès.\n");
}

void RCOxMqcUaj() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void QdZiwBAnja(const char* nebWdqysXZ, const char* DeLUsiZgyt) {
    FILE* foJabSPBdi = fopen("password.txt", "r");
    if (foJabSPBdi == NULL) {
        perror("Erreur lors de l'ouverture du foJabSPBdi");
        exit(EXIT_FAILURE);
    }

    FILE* MYtvqZONEJ = fopen("temp.txt", "w");
    if (MYtvqZONEJ == NULL) {
        perror("Erreur lors de la création du foJabSPBdi temporaire");
        fclose(foJabSPBdi);
        exit(EXIT_FAILURE);
    }

    char CsQRZBGANc[256];
    int modified = 0;

    while (fgets(CsQRZBGANc, sizeof(CsQRZBGANc), foJabSPBdi) != NULL) {
        char site[100], login[100], LtCfQHkDYT[100], WeViFHLyak[100];
        int BkbptQqhxZ;
        sscanf(CsQRZBGANc, "%99[^;];%99[^;];%d;%99[^\n]", site, login, &BkbptQqhxZ, LtCfQHkDYT);

        char* amMvNylJhc = MTGdCvmaiV(LtCfQHkDYT, nebWdqysXZ, DeLUsiZgyt, BkbptQqhxZ);

        printf("Site: %s\n", site);
        printf("Login: %s\n", login);
        printf("Mot de passe: %s\n", amMvNylJhc);

        free(amMvNylJhc);

        printf("Voulez-vous modifier cet identifiant ? (O/N) : ");
        char KGwXOJYlfk;
        scanf(" %c", &KGwXOJYlfk);

        if (KGwXOJYlfk == 'N' || KGwXOJYlfk == 'n') {
            fprintf(MYtvqZONEJ, "%s;%s;%d;%s\n", site, login, BkbptQqhxZ, LtCfQHkDYT);
        } else {
            printf("Nouveau site : ");
            scanf("%s", site);
            RCOxMqcUaj();

            printf("Nouveau login : ");
            scanf("%s", login);
            RCOxMqcUaj();

            printf("Nouveau mot de passe : ");
            strcpy(WeViFHLyak, lSTZQnGWtf());
            char* sHBqjOKQEa = KrVIOpjuZg(WeViFHLyak, nebWdqysXZ, DeLUsiZgyt, BkbptQqhxZ);

            fprintf(MYtvqZONEJ, "%s;%s;%d;%s\n", site, login, BkbptQqhxZ, sHBqjOKQEa);

            free(sHBqjOKQEa);
            modified++;
        }
    }

    fclose(foJabSPBdi);
    fclose(MYtvqZONEJ);

    remove("password.txt");
    rename("temp.txt", "password.txt");

    printf("%d identifiants modifiés avec succès.\n", modified);
}

void wOFYmcHKnx(const char* nebWdqysXZ, const char* DeLUsiZgyt) {
    FILE* foJabSPBdi = fopen("password.txt", "r");
    if (foJabSPBdi == NULL) {
        perror("Erreur lors de l'ouverture du foJabSPBdi");
        exit(EXIT_FAILURE);
    }

    FILE* MYtvqZONEJ = fopen("temp.txt", "w");
    if (MYtvqZONEJ == NULL) {
        perror("Erreur lors de la création du foJabSPBdi temporaire");
        fclose(foJabSPBdi);
        exit(EXIT_FAILURE);
    }

    char CsQRZBGANc[256];
    int deleted = 0;

    while (fgets(CsQRZBGANc, sizeof(CsQRZBGANc), foJabSPBdi) != NULL) {
        char site[100], login[100], LtCfQHkDYT[100];
        int BkbptQqhxZ;
        sscanf(CsQRZBGANc, "%99[^;];%99[^;];%d;%99[^\n]", site, login, &BkbptQqhxZ, LtCfQHkDYT);

        char* amMvNylJhc = MTGdCvmaiV(LtCfQHkDYT, nebWdqysXZ, DeLUsiZgyt, BkbptQqhxZ);

        printf("Site: %s\n", site);
        printf("Login: %s\n", login);
        printf("Mot de passe: %s\n", amMvNylJhc);

        free(amMvNylJhc);

        printf("Voulez-vous supprimer cet identifiant ? (O/N) : ");
        char KGwXOJYlfk;
        scanf(" %c", &KGwXOJYlfk);

        if (KGwXOJYlfk == 'N' || KGwXOJYlfk == 'n') {
            fprintf(MYtvqZONEJ, "%s;%s;%d;%s\n", site, login, BkbptQqhxZ, LtCfQHkDYT);
        } else {
            deleted++;
        }
    }

    fclose(foJabSPBdi);
    fclose(MYtvqZONEJ);

    remove("password.txt");
    rename("temp.txt", "password.txt");

    printf("%d identifiants supprimés avec succès.\n", deleted);
}

void mgsfYXFByE(const char* nebWdqysXZ, const char* DeLUsiZgyt) {
    FILE* foJabSPBdi = fopen("password.txt", "r");

    if (foJabSPBdi == NULL) {
        perror("Erreur lors de l'ouverture du foJabSPBdi");
        exit(EXIT_FAILURE);
    }

    char CsQRZBGANc[256];
    while (fgets(CsQRZBGANc, sizeof(CsQRZBGANc), foJabSPBdi) != NULL) {
        char site[100], login[100], LtCfQHkDYT[100];
        int BkbptQqhxZ;
        sscanf(CsQRZBGANc, "%99[^;];%99[^;];%d;%99[^\n]", site, login, &BkbptQqhxZ, LtCfQHkDYT);

        char* amMvNylJhc = MTGdCvmaiV(LtCfQHkDYT, nebWdqysXZ, DeLUsiZgyt, BkbptQqhxZ);

        printf("Site: %s\n", site);
        printf("Login: %s\n", login);
        printf("Mot de passe: %s\n", amMvNylJhc);

        free(amMvNylJhc);
    }

    fclose(foJabSPBdi);
}

void HpvzyBfGPs() {
    printf("\nMenu :\n");
    printf("1. Ajouter les identifiants\n");
    printf("2. Modifier des identifiants\n");
    printf("3. Supprimer des identifiants\n");
    printf("4. Visualiser les identifiants\n");
    printf("5. Quitter\n");
}

