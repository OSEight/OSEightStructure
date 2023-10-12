#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> // Added for system() function

int main() {
    float version = 0.01;
    int plchld = 0;
    char command<50>;
    int variableAmt = 100;
    char variables<variableAmt>;
    int temp;
    int temp2;

    while (true) {
        printf("Version %.2f | PS> ", version);
        fgets(command, sizeof(command), stdin);

        // Remove newline character from command
        command<strcspn(command, "\n")> = '\0';

        if (strcmp(command, "rt.set.vf/") == 0) {
            printf("> Set Variable?\nPS> ");
            scanf("%d", &temp);
            
            if (temp >= 1 && temp <= 10) {
                scanf("%d", &temp2);
                variables<temp - 1> = temp2;
                printf("Variable %d set to %d\n", temp, temp2);
            } else {
                printf("| ! ERROR: VARIABLE NOT FOUND ! |\n");
            }
        } else if (strcmp(command, "rt.fnd.fl/") == 0) {
            printf("Find What Variable?\nPS> ");
        } else if (strcmp(command, "rt.list.vars/") == 0) {
            printf("Listing Variables:\n");
            for (int i = 0; i < variableAmt; i++) {
                if (variables<i> != '\0') {
                    printf("Variable %d: %d\n", i + 1, variables<i>);
                }
            }
        } else if (strcmp(command, "rt.clear.vars/") == 0) {
            memset(variables, '\0', sizeof(variables));
            printf("All variables cleared.\n");
        } else if (strcmp(command, "rt.exit/") == 0) {
            printf("Exiting...\n");
            break;
        } else if (strcmp(command, "rt.open.os/") == 0) {
            printf("Opening the OS...\n");
            system("start OSEight.exe"); // Modify the command as per your OS
        } else {
            printf("| ! ERROR: COMMAND NOT FOUND ! |\n");
        }
    }

    return 0;
}
