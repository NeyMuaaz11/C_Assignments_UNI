/*  CH230-A a3p8
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

// function prototypes //
float sum(float values[10], int i);
float avg(float values[10], int i);



int main(){
    float values[10];
    int i;
    
    // loop to fill array with values != -99 //
    for(i = 0; i < 10; i++){
        scanf("%f", &values[i]);
        if (values[i] == -99.0){
            break;
        }
    }
    
    // printf statement with two function calls //
    printf("Sum of all values is %f and average is %f\n", sum(&values[0], i),
    avg(&values[0], i));

}

float sum(float *values, int i){
    float sum = 0;
    for(int c = 0; c <= i - 1; c++){
        sum += *values;
        values += 1;
    } 
    return sum;
}


float avg(float *values, int i){
    float sum = 0, avg;
    for(int c = 0; c < i; c++){
        sum += *values;
        values += 1;
    } 
    avg = (float)sum / (float)i;
    return avg;
}