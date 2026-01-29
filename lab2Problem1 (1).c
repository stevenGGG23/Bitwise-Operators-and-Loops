#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void) {
    char buffer[100];

    while (1) {
        printf("Enter a positive integer or type \"quit\" to exit: ");

        // Read a single whitespace-delimited token from standard input.
        // - "%99s" specifies a field width of 99 characters to prevent buffer overflow.
        // - The "%s" conversion specifier automatically skips leading whitespace (spaces, tabs, and newlines).
        // - Reading stops at the first subsequent whitespace character.
        // If scanf returns a value other than 1, input failed or EOF was reached.
        if (scanf("%99s", buffer) != 1) {
            printf("\nExiting.\n");
            break;
        }

        // Check for "quit"
        if (strcmp(buffer, "quit") == 0) {
            printf("Program terminated.\n");
            break;
        }

        // Parse the input string as an integer; conversion fails if the input is invalid (not an integer).
        int32_t temp;
        if (sscanf(buffer, "%d", &temp) != 1) {
            printf("Invalid input. Please enter an integer or \"quit\".\n\n");
            continue;
        }

        // Store the value in a int32_t (an integer with exactly 32 bits).
        // A regular int data type could also be used on many systems, but int32_t
        // guarantees a fixed 32-bit width, which is important for predictable
        // bitwise operations across platforms.
        int32_t n = (int32_t)temp;


        /* ========================= STUDENT TODO SECTION =========================
       For the valid positive integer stored in variable `n` (int32_t):

       Task 1:
       Use a BITWISE SHIFT operator to compute double the value of `n`.
       Store the result in `doubled`. 



       Task 2:
       Use a BITWISE SHIFT operator to compute one fourth of `n`
       (integer division). Store the result in `one_fourth`.

       Task 3:
       Use a BITWISE AND operator to determine whether `n` is odd.
       Store the result in `is_odd` (1 if odd, 0 if even).

       Task 4:
       Compute the TWO’S COMPLEMENT of `n` using the BITWISE NOT operator.
       - Store the result in `twos_comp`

       Task 5:
       Print the following:
       - The original value of `n`
       - The doubled value
       - The one fourth value
       - Whether `n` is even or odd
       - The two’s complement of `n` in:
           • hexadecimal format
           • signed 32-bit decimal format

       For EACH task above, include a brief comment explaining how the
       bitwise operator produces the required result.
       ======================================================================= */

        // Task 1: Double using  shift 
        // Shifting left by 1 moves bits to the next power of 2, effectively multiplying by 2^1
        // The empty spot on the right is filled with a 0, doubling the total value
        int32_t doubled =  n << 1;

        // Task 2: One Fourth using shift (integer division) 
        // Shifting right by 2 moves bits down two positions, effectively dividing by 2^2 (4)
        // This performs floor division, meaning any fractional remainders are discarded.
        int32_t one_fourth =  n >> 2;

        // Task 3: Even or odd using bitwise AND 
        // Bitwise AND with 1 masks all bits except the last one, which represents 2^0 (1)
        // Since only odd numbers have a 1 in the final bit, a non zero result confirms it is odd
        int is_odd = n & 1;

        // Task 4: Two's complement of n 
        // The ~ operator flips all bits (1 to 0 and 0 to 1) to create the one's complement
        // Adding 1 to this flipped value completes the standard binary representation for a negative number
        int32_t twos_comp = ~n + 1;
   
        // Task 5: Print the required output
        /* PLACE YOUR PRINT STATEMENTS HERE */ 

        //Print Doubled 
        printf("Results for n = %d\n", n);  
        printf("Double of %d: %d\n", n, doubled); 

        //Print 1/4th
        printf("One Fourth of %d: %d \n",n, one_fourth); 

        //print even or odd
        if (is_odd) {
            printf("%d is odd\n", n); 
        } else { 
            printf("%d is even\n", n);
        } 

        //Print Two's Complement 
        printf("Two's Complement of %d:\n", n); 
        printf("Hex format: 0x%X \n", twos_comp); 

        //Print Integer format 
        printf("Integer Format:%d\n\n", twos_comp);
	
       //END
	}
   
    return 0;
}
