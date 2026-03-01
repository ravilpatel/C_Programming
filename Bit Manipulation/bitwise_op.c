/*
    In the program bitwise AND, OR, NOT, XOR operators are programmed.
    NOT operation is simulated as Signed and Unsigned numbers. 
*/
#include <stdio.h>

int main(void){
        int a = 4; // 32'b0100 (32 bit number)
        int b = 6; // 32'b0110 (32 bit number)
        //Bitwise AND  --  0100 = 4
        printf("Bitwise AND opn (Decimal): %d\n", a&b);
        printf("Bitwise AND opn (Hexadecimal): %x\n", a&b);

        //Bitwise OR  --  0110 = 6
        printf("Bitwise OR opn (Decimal): %d\n", a|b);
        printf("Bitwise OR opn (Hexadecimal): %x\n", a|b);

        //Bitwise XOR   -- 0010 = 2
        printf("Bitwise XOR opn (Decimal): %d\n", a^b);
        printf("Bitwise XOR opn (Hexadecimal): %x\n", a^b);

        //Bitwise NOT of a
        /*
        a is signed number. Hence taking negation of will result in negative number if input given is positive number as the sign bit will also be toggled and hence final amount is negative.
        We take 2's Complement Representation to read the number
        */
        printf("Bitwise NOT opn (Decimal) of a (signed): %d\n", ~a); // use concept of 2's complement
        printf("Bitwise NOT opn (Hexadecimal) of a (signed): %x\n", ~a); //ff_ff_ff_fb

        // Bitwise NOT for unsigned number
        unsigned int c = 4;
        printf("Bitwise NOT opn (Deimal) of c (unsigned): %u\n", ~a);
        printf("Bitwise NOT opn (Hexadecimal) of c (unsigned): %x\n", ~a); //ff_ff_ff_fb

return 0;
}