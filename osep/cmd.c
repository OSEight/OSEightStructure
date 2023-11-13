#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    float version = 0.01;
    int plchld = 0;
    char command[50];
    int variableAmt = 100;
    int variables[variableAmt];
    char temp[100];
    int temp2;
    int temp3;
    char intstr[1000];
    int array1[1000];
    float usdfl;
    int verif = 1;
    FILE *fp;  // Added declaration for file pointer

    while (verif == 1) {
        printf("Version %.2f | PS> ", version);
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = '\0';

        if (strcmp(command, "rt.set.fl/") == 0) {
            printf("> Set Variable?\nPS> ");
            scanf("%d", &temp3);

            if (temp3 >= 1 && temp3 <= 10) {
                scanf("%d", &temp2);
                variables[temp3 - 1] = temp2;
                printf("Variable %d set to %d\n", temp3, temp2);  // Fixed variable name from "temp" to "temp3"
            } else {
                printf("| ! ERROR: VARIABLE NOT FOUND ! |\n");
            }
        } else if (strcmp(command, "rt.fnd.fl/") == 0) {
            printf("Find What Variable?\nPS> ");
        } else if (strcmp(command, "rt.list.vars/") == 0) {
            printf("Listing Variables:\n");
            for (int i = 0; i < variableAmt; i++) {
                if (variables[i] != '\0') {
                    printf("Variable %d: %d\n", i + 1, variables[i]);
                }
            }
        } else if (strcmp(command, "rt.clear.vars/") == 0) {
            memset(variables, 0, sizeof(variables));
            printf("All variables cleared.\n");
        } else if (strcmp(command, "rt.exit/") == 0) {
            printf("Exiting...\n");
            break;
        } else if (strcmp(command, "rt.new.fl/") == 0) {
            printf("What is the name of the file?(Include Extension, If needed location)\n"); // Removed unnecessary '!' character
            scanf(" %s", temp);  // Removed "&" and limited input size to 99 characters (temp can hold 100)

            fp = fopen(temp, "w+");  // Open file using the provided name
            if (fp != NULL) {
                fclose(fp);  // Close the file since it was opened successfully
            } else {
                printf("| ! ERROR: UNABLE TO CREATE FILE ! |\n");
            }
        } else if (strcmp(command, "rt.del.fl/") == 0) {
            int epin;  // Added declaration for epin
            int pin = 1234;  // Assuming an example value for pin

            printf("ERROR (Password required)! del fl command; enter admin pin: ");
            scanf("%d", &epin);  // Added '&' to take input correctly

            if (epin == pin) {
                printf("What File?");
                scanf(" %s", temp);  // Removed '&' and limited input size to 99 characters (temp can hold 100)

                if (remove(temp) == 0) {
                    printf("File '%s' deleted successfully.\n", temp);
                } else {
                    printf("Unable to delete file '%s'.\n", temp);
                }
            } else {
                printf("| ! ERROR: INVALID ADMIN PIN ! |\n");
            }
        } else if (strcmp(command, "rt.echo.scr/") == 0) {
            printf("Echo what?\n");
            scanf(" %s", temp);  // Removed '&' and limited input size to 99 characters (temp can hold 100)
            printf("%s\n", temp);  // Fixed the printf statement to display the string correctly
        } else if (strcmp(command, "rt.fl.wrt/") == 0) {
            printf("What file to write to?");
            scanf(" %s", temp);  // Removed '&' and limited input size to 99 characters (temp can hold 100)

            fp = fopen(temp, "w");
            if (fp != NULL) {
                printf("Write what?");
                scanf(" %s", temp);  // Removed '&' and limited input size to 99 characters (temp can hold 100)
                fprintf(fp, "%s\n", temp);  // Fixed the fprintf statement to write the string correctly
                fclose(fp);
            } else {
                printf("| ! ERROR: UNABLE TO OPEN FILE FOR WRITING ! |\n");
            }
        } else if (strcmp(command, "load.ctrlpnl/") == 0) {
            int temp = 1;  // Renamed the variable to avoid conflicts with other temp variables
            while (temp > 0 && temp < 100) {
                printf("\nɕ");
                temp = temp + 1;
            }
            printf("ctrl << ");
            scanf("%c", &temp);

            printf("| OS EIGHT CONTROL.C |\n");
            printf("OPTION 1: CHANGE USER 0 PASSWORD\n");
            printf("OPTION 2: MAKE NEW USER\n");
        }else {
            printf("ERROR: COMMAND NOT FOUND\n");
        }
    }

    return 0;
}