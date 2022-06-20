/*CH230-A a8p6
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    FILE *fptr; // file pointer //
    double one, two, sum, diff, mult, div;
    char name[50];

    /* reading name of file from keyboard and
        opening it in read mode*/
    scanf("%s", name); 
    fptr = fopen(name, "r");

    /* reading double value from first file 
        and closing it*/
    fscanf(fptr, "%lf\n", &one);
    fclose(fptr);

    /* reading name of file from keyboard and
        opening it in read mode*/
    scanf("%s", name);
    fptr = fopen(name, "r");

    /* reading double value from second file 
        and closing it*/
    fscanf(fptr, "%lf\n", &two);
    fclose(fptr);

    // calculating result values //
    sum = one + two;
    diff = one - two;
    mult = one * two;
    div = one / two;

    // opening results file in write mode and writing the results in it //
    fptr = fopen("results.txt", "w");
    fprintf(fptr, "Sum: %lf\nProduct: %lf\nDifference: %lf\nDivision: %lf\n",
                        sum, mult, diff, div);
    fclose(fptr);

    return 0;

}