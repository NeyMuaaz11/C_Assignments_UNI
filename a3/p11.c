/*  CH230-A a3p11
    Muaaz Rajput    
    murajput@jacobs-university.de*/

/* On my laptop it did not face any 
    compiling issues but when I uploaded
    to grader it started showing compiling 
    errors related to unsigned ints on line 21...
    I tried finding a solution but could not 
    understand so please let me know what the  
    problem is in the remarks... I also do
    not understand how we are supposed to compare
    the two strings and conclude that one is larger
    as in some of the test cases even if the length was
    smaller, that string was considered larger so please 
    explain this as well....Thank you.*/

#include <stdio.h>
#include <string.h>


int main(){
    char one[50], two[50], c;

    // get inputs //
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    scanf("%c", &c);

    // this statement is where the compiling error was occuring //
    printf("length1=%d\nlength2=%d\n", (strlen(one) - 1), (strlen(two) - 1));
    
    /* the concatenation does not work properly
        and a new line gets added... I could not 
        understand why */
    strcat(one, two);
    printf("concatenation=%s", one);

    char three[strlen(two)];
    printf("copy=%s", strcpy(three, two)); // copy string two into three //

    //compare the two strings and act accordingly //
    if(strcmp(one, two) == 0){
        printf("Strings are identical!\n");
    }
    else{
        printf("Strings are not identical!\n");
    }

    //  for loop to find c in two //
    for(int i = 0; i < strlen(two); i++){
        if(two[i] == c){
            printf("position=%d\n", i);
            return 0;
        }

    }
    printf("character not found\n");

}

