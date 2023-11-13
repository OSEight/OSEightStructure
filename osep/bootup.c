#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int character[100];
    printf("--> Booting log.sys <--\n");
    FILE *logFile = fopen("log.sys", "r+");
    fprintf(logFile, "bUp?/s=y.;");
    printf("--> Booting elin.sys <--\n");
    fclose(logFile);
    FILE *elinFile = fopen("elin.sys", "r");
    fread(&character, sizeof(int), 1, elinFile);
    fclose(elinFile);
    
    return 0;
}