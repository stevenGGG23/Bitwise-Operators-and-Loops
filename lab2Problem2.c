#include <stdio.h>
#include <stdlib.h>

//Prototypes 
long long factorial(int num); 
long long permutation(int n, int r); 
long long combination(int n, int r); 

//Main function 
int main(int argc, char *argv[]) {   

    // exactly 2 arguments only
    if (argc != 3) {
    return 1;
    }

    //Inputs and n and r   
    int n = atoi(argv[1]);
    int r = atoi(argv[2]); 

    //Check constraints 
    if (n < 1 || n > 20 || r < 1 || r > 20){

        printf("Error violating input constraints!\n"); 
        
        return 1;
    }
    
    //If r is greater than n
    if (r > n) {
        printf("Error: r should be less than or equal to n\n");
        return 1;
    }  

    // P and C calculations 
    long long P = permutation(n, r);  
    long long C = combination(n, r);  
    
    //Output 
    printf("P(%d,%d) = %lld\n" ,n, r, P);
    printf("C(%d,%d) = %lld\n" ,n, r, C);
    

    return 0;
}

// Function 1: Calculate factorial
long long factorial(int num) {
    
    long long result = 1; 
    for(int i = 1; i <= num; i++){
        result *= i;
    } 
    return result; 
}

// Function 2: Calculate permutation
long long permutation(int n, int r) {
    
    // P(n,r) = n! / (n-r)!
    return factorial(n) / factorial(n - r); 
}

// Function 3: Calculate combination
long long combination(int n, int r) {
    
    // C(n,r) = P(n,r) / r! 
    return permutation(n, r) / factorial(r);
}
