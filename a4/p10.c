/*CH230-A a4p10
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <math.h>

// function performing operations using addresses //
void proddivpowinv(float a, float b, float*prod, float*div,float*pwr,
 float*invb){   
    *prod = a * b;
    *div = a / b;
    *invb = 1 / b;
    *pwr = pow(a, b);


}

int main(){
    float a, b, prod, div, pwr, invb;
    scanf("%f\n%f", &a, &b);

    // performing same operations as funtion but without addresses //
    prod = a * b;
    div = a / b;
    invb = (float)1 / b;
    pwr = pow(a, b);

    printf("Product=%f\nDivision=%f\nInverse of b=%f\na to the power b=%f\n\n",
    prod, div, invb, pwr);

    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    printf("Product=%f\nDivision=%f\nInverse of b=%f\na to the power b=%f\n",
    prod, div, invb, pwr);

    printf("\nBoth results are the same");
    return 0;

}