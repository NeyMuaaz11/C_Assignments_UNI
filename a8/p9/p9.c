/*CH230-A a8p9
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    FILE *fptr1, *fptr2;
    int number, i;
    
    // Declaring and initialzing buffer //
    char buff[64], c;
    memset(buff, '\0', sizeof(buff));
    
    /* Getting number of files as input
        and creating array to store the
        names of those files by getting 
        them as input in a loop*/
    scanf("%d", &number);
    char names[number][20];
    for(i = 0; i < 3; i++){
        scanf("%s", names[i]);
    } 
    printf("Concating the content of %d files ...\nThe result is:\n", number);

    // Opening output file in write mode //
    fptr2 = fopen("output.txt", "w"); 

    // Setting buffer settings to full buffering with limit of 64 elements //
    setvbuf(fptr2, buff, _IOFBF, 64); 

    /* For-Loop to open files one by one by accessing their names
        through the array and then reading each character
        and printing it into the output file using buffer to
        print 64 characters at once and using flush to empty buffer
        if 64 character limit not reached*/
    for (i = 0; i < number; i++){
        fptr1 = fopen(names[i], "r");
        while (getc(fptr1) != EOF){
            fseek(fptr1, -1, SEEK_CUR);
            fread(&c, sizeof(char), 1, fptr1);
            fwrite(&c, sizeof(char), 1, fptr2);
            printf("%c", c);
            fflush(fptr2);
            }
        printf("\n");
        fprintf(fptr2, "\n"); // Adding new line char to the file //
        fclose(fptr1); // Closing input file before the next one opened //
    }
    printf("The result was written into output.txt\n");
    fclose(fptr2);
    return 0;

}