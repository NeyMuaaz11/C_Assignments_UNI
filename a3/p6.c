/*  CH230-A a3p6
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
float to_pounds(int kg, int g); // function prototype

int main(){
    int kg, g;

    scanf("%d\n%d\n", &kg, &g);

    // print statement with function call //
    printf("Result of conversion: %f\n", to_pounds(kg,g));
}

// function to convert weight into pounds //
float to_pounds(int kg, int g){
    float pounds, weight;
    weight = (float)kg + ((float)g  * 0.001);
    pounds = weight * 2.2;
    return pounds;
}