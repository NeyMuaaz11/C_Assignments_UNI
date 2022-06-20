/*CH230-A a4p6
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

void values(int *data, int n); // function prototype //

int main(){
    int *data, n, *p;

    scanf("%d", &n);

    // dynamic allocation of memory for array of n integers //
    data = (int*) malloc(sizeof(int) * n); 
    
    for(int i = 0; i < n;  i++){
        p = data + i;
        scanf("%d", p);
    }

    values(data, n); // function call to find two largest numbers //

    free(data);

}

void values(int *data, int n){
    int max = 0, maxl = 0;
    for (int i = 0; i < n; i++){
        if (*(data + i) > max){
            maxl = max;
            max = *(data + i);
        }else if (*(data+i) > maxl){
            maxl = *(data + i);
        }

    }
    printf("The two greatest values are %d and %d\n", max, maxl);

}