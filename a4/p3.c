/*CH230-A a4p3
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num);

int main(){
    float values[15];
    int i = -1;
    char command;

    do{
        i += 1;
        scanf("%f", &values[i]);
    }while(values[i] > -1);
    getchar();
    scanf("%c", &command);

    switch(command){
        case 'm':
        printf("Geometric mean is %f\n", geometric_mean(values, i));
        break;

        //case "h":

    }



    return 0;
}


float geometric_mean(float arr[], int num){
    int i;
    float sum = 1, mean;
    for(i = 0; i <= num; i++){
        sum *= arr[i];
    }
    
    mean = pow(sum, ((float)1/((float)num + (float)1)));
    return mean;

}