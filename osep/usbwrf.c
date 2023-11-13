#include <stdio.h>
#include <string.h>

// Function to format the USB drive
void formatUSB(const char* drive) {
    char command[50];
    sprintf(command, "mkfs.vfat -F 32 %s", drive);
    system(command);
}

// Function to read data from the USB drive
void readUSB(const char* drive) {
    FILE *file = fopen(drive, "rb");
    if (file) {
        // Read data using fread() or any other file reading technique
        // Example:
        char buffer[1024];
        size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer), file);
        printf("Read %zu bytes from USB drive.\n", bytesRead);
        fclose(file);
    } else {
        printf("Unable to open USB drive for reading.\n");
    }
}

// Function to write data to the USB drive
void writeUSB(const char* drive) {
    FILE *file = fopen(drive, "wb");
    if (file) {
        // Write data using fwrite() or any other file writing technique
        // Example:
        char data[] = "Hello, USB!";
        size_t bytesWritten = fwrite(data, sizeof(char), strlen(data), file);
        printf("Written %zu bytes to USB drive.\n", bytesWritten);
        fclose(file);
    } else {
        printf("Unable to open USB drive for writing.\n");
    }
}

int main() {
    const char* usbDrive = "/dev/sdb1";  // Replace with your USB drive path

    printf("Formatting USB drive...\n");
    formatUSB(usbDrive);

    printf("Writing data to USB drive...\n");
    writeUSB(usbDrive);

    printf("Reading data from USB drive...\n");
    readUSB(usbDrive);

    return 0;
}#include <stdio.h>
#include <string.h>

// Function to format the USB drive
void formatUSB(const char* drive) {
    char command[50];
    sprintf(command, "mkfs.vfat -F 32 %s", drive);
    system(command);
}

// Function to read data from the USB drive
void readUSB(const char* drive) {
    FILE *file = fopen(drive, "rb");
    if (file) {
        // Read data using fread() or any other file reading technique
        // Example:
        char buffer[1024];
        size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer), file);
        printf("Read %zu bytes from USB drive.\n", bytesRead);
        fclose(file);
    } else {
        printf("Unable to open USB drive for reading.\n");
    }
}

// Function to write data to the USB drive
void writeUSB(const char* drive, char* write[]) {
    FILE *file = fopen(drive, "wb");
    if (file) {
        // Write data using fwrite() or any other file writing technique
        // Example:
        char data[] = write[];
        size_t bytesWritten = fwrite(data, sizeof(char), strlen(data), file);
        printf("Written %zu bytes to USB drive.\n", bytesWritten);
        fclose(file);
    } else {
        printf("Unable to open USB drive for writing.\n");
    }
}

int main() {
    const char* usbDrive = "/dev/sdb1";  // Replace with your USB drive path

    printf("Formatting USB drive...\n");
    formatUSB(usbDrive);

    printf("Writing data to USB drive...\n");
    writeUSB(usbDrive);

    printf("Reading data from USB drive...\n");
    readUSB(usbDrive);

    return 0;
}