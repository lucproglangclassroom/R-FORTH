# include <stdio.h> 

int main() {
    char filename[] = "example.txt";

    FILE* fw = fopen(filename, "w");
    if (fw == NULL) {
        perror("Error opening file for writing"); 
        return 1;
    }
    fprintf(fw, "Hello, World!"); 
    fclose(fw);

    FILE* fr = fopen(filename, "r");
    if (fr == NULL) {
        perror("Error oepning file for reading");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), fr) != NULL) {
        printf("%s\n", line);
    }

    fclose(fr);

    return 0; 
}