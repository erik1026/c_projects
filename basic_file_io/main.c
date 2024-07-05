#include <stdio.h>

#define FILE_TEXT "This is an example file text"
#define FILE_EXIT -1
#define BUFFER_SIZE 1024

int main(){

    FILE *file;
    char text[BUFFER_SIZE];

    file = fopen("file.txt", "w");
    if (file == NULL){
        printf("The file was not able to open...exiting\n");
        return FILE_EXIT;
    }

    // Write to the file
    printf("Printing to file...\n");
    fputs(FILE_TEXT, file);

    printf("Closing the file...\n");
    fclose(file);

    // Read from the file
    file = fopen("file.txt", "r");

    if(fgets(text, BUFFER_SIZE, file) != NULL){
        printf("%s\n", text);
    } else {
        printf("Unable to read from the file...\n");
    }

    return 0;
}