#include <stdio.h>

int main(){
    if(lg == 1){
        const char unm[10];
        int epin;
        int pin;
        const char usrc[10];
        printf("Login\nEnter Username Allocation: ");
        scanf("%d", unm[10]);
        FILE* file = fopen(unm[10], "rb");
        if (file == "NULL"){
            system("clear");
            printf("FATAL ERROR: 'sysusrinfo.sys' NOT FOUND.")
            printf("\nRESTART PC PLEASE\n")
        }
        char* flsz = malloc(fileSize);
        if (flsz == NULL) {
            printf("Failed to allocate memory.\n");
            fclose(file);
            return;
        }
        fread(usrc[10], flsz, FILE);
        if (unm[10] == usrc[10]){
            printf("\nEnter Password: ")
            scanf("%d", epin);
            fread(pin, flsz, FILE);
            if (pin == epin){
                int verif = 1;
            } else {printf("Restart PC: Wrong Password.")}
        } else {printf("Restart PC: Wrong Username.");}
        fclose(FILE);
    }
    return 0;
}