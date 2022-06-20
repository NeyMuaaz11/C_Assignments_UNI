/*  CH230-A a3p3
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
float convert (int cm);


int main(){
    int cm;
    float km;

    scanf("%d", &cm);
    km = convert(cm);

    printf("Result of conversion: %f\n", km);

}

 // calculate length in km and return //
float convert (int cm){
    float km;

    km = (float)cm  / 100000;
    return km;

}