#include <stdio.h>
#include <stdlib.h>

// Function to load and execute the binary code
void executeBinary(const char* filePath) {
    FILE* file = fopen(filePath, "rb");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    // Determine the size of the file
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Allocate memory to store the binary code
    char* binaryCode = malloc(fileSize);
    if (binaryCode == NULL) {
        printf("Failed to allocate memory.\n");
        fclose(file);
        return;
    }

    // Read the binary code from the file
    fread(binaryCode, 1, fileSize, file);

    // Close the file
    fclose(file);

    // Execute the binary code by calling a function pointer
    void (*execute)() = (void (*)())binaryCode;
    
    // Call the function pointer to execute the binary code
    execute();

   // Free allocated memory
   free(binaryCode);
}

int main() {
    while (true){
       const char* filePath = opnfl;
       while (filepath =! "0"){
            int avtst = "1";
       }
       while (avsf == 1 && avtst == 0){
            executeBinary(filePath);
       }
    }
   return 0;
}