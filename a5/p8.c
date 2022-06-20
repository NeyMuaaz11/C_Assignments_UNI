/*CH230-A a5p8
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

// function to get input //
void enter(int **i1, int **i2, int n, int m, int p);
/* function to print matrix*/
void printm(int **i1, int **i2, int n, int m, int p); 
// function to multiply matrices
void multiply(int **i1, int **i2, int **result, int n, int m, int p);

int main(){
    int **i1, **i2, **result;
    int n, m, p;

    scanf("%d\n%d\n%d", &n, &m, &p);


    // dynamic memory allocation//
    i1 = (int**) malloc(sizeof(int*) * n);
    i2 = (int**) malloc(sizeof(int*) * m);
    result = (int**) malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++)
        i1[i] = (int*)malloc(sizeof(int) * m);

    for (int i = 0; i < m; i++)
        i2[i] = (int*)malloc(sizeof(int) * p);

    for (int i = 0; i < n; i++)
        result[i] = (int*)malloc(sizeof(int) * p);

    // function calls //
    enter(i1, i2, n, m, p);
    printm(i1, i2, n, m, p);
    multiply(i1, i2, result, n, m, p);

    // printing the result of multiplication //
    printf("The multiplication result AxB:\n");
    for (int row = 0; row < n; row++){
        for (int col = 0; col < p; col++){
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }
    
    // deallocating memory //
    for(int i = 0; i < n; i++){
        free(i1[i]);
    }
    free(i1);

    for(int i = 0; i < m; i++){
        free(i2[i]);
    }
    free(i2);

    for(int i = 0; i < m; i++){
        free(result[i]);
    }
    free(result);
}


void enter(int **i1, int **i2, int n, int m, int p){
    for (int row = 0; row < n; row++){
        for (int col = 0; col < m; col++){
            scanf("%d", &i1[row][col]);
        }
    }

    for (int row = 0; row < m; row++){
        for (int col = 0; col < p; col++){
            scanf("%d", &i2[row][col]);
        }
    }

}


void printm(int **i1, int **i2, int n, int m, int p){
    printf("Matrix A:\n");
    for (int row = 0; row < n; row++){
        for (int col = 0; col < m; col++){
            printf("%d ",i1[row][col]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for (int row = 0; row < m; row++){
        for (int col = 0; col < p; col++){
            printf("%d ", i2[row][col]);
        }
        printf("\n");
    }
    
}


void multiply(int **i1, int **i2, int **result, int n, int m, int p){
    int sum = 0;
    for (int c = 0; c < n; c++){
         for (int d = 0; d < p; d++){
            for (int k = 0; k < m; k++){
                sum = sum + i1[c][k] * i2[k][d];
            }
            result[c][d] = sum;
            sum = 0;
        }   
    }
}
