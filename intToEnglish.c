/**
 * Program Name: intToEnglish
 * Purpose: to convert integers between 1-999 to their English form (i.e. 13 is thirteen)
 * @author Riley Sgro
 */

#include <stdio.h>
int main() { // main program

    int val; // value to be scanned from user input
    do { // loop that continues to ask until user decides to quit
        printf("Please enter a value (1-999, 0 to quit): ");
        scanf("%i", &val);

        // variable and array declaration
        int r, i = 0, val1 = val;
        int hundreds = 0, tens = 0, false = 1; // used for spacing purpose (values remaind 1 or 0 as in true or false)
        int digits[3] = {0, 0, 0};

        // this while loop creates an array of the digits in the integer
        while (val1 != 0) {
            r = val1 % 10;
            digits[i] = r;
            i++;
            val1 = val1 / 10;
            if (val1 < 1) val1 = 0;
        }

        // flips the array holding the digits in the integer
        int flip = digits[2];
        digits[2] = digits[0];
        digits[0] = flip;

        if (val != 0) printf("You entered the number "); // begins the output

        // this if statement first checks if the integer is 3 digits
        if (digits[0] != 0) {
            if (digits[0] == 1) printf("one hundred"); // if the integer is three digits, it determines which term to begin with
            else if (digits[0] == 2) printf("two hundred");
            else if (digits[0] == 3) printf("three hundred");
            else if (digits[0] == 4) printf("four hundred");
            else if (digits[0] == 5) printf("five hundred");
            else if (digits[0] == 6) printf("six hundred");
            else if (digits[0] == 7) printf("seven hundred");
            else if (digits[0] == 8) printf("eight hundred");
            else if (digits[0] == 9) printf("nine hundred");

            // these statements determine which option to proceed with (and in the case that it is not a number such as 300)
            if (digits[1] != 0 || digits[2] != 0) printf(" and");
            if (digits[1] == 0 && digits[2] != 0) printf(" ");
            hundreds = 1;
        } 

        // this if statement checks if either the integer is in the tens or if a 3 digit integer has an addition value in the tens (453 as opposed to 402)
        if (digits[1] != 0) {
            if (hundreds == 1) printf(" ");
            if (digits[1] == 1) { // from 10-19, the way integers are stated is different, making additional if statements necessary 
                if (digits[2] == 0) printf("ten");
                else if (digits[2] == 1) printf("eleven");
                else if (digits[2] == 2) printf("twelve");
                else if (digits[2] == 3) printf("thirteen");
                else if (digits[2] == 4) printf("fourteen");
                else if (digits[2] == 5) printf("fifteen");
                else if (digits[2] == 6) printf("sixteen");
                else if (digits[2] == 7) printf("seventeen");
                else if (digits[2] == 8) printf("eighteen");
                else if (digits[2] == 9) printf("nineteen"); 
                false = 0; }
            else if (digits[1] == 2) printf("twenty");
            else if (digits[1] ==3) printf("thirty");
            else if (digits[1] == 4) printf("fourty");
            else if (digits[1] == 5) printf("fifty");
            else if (digits[1] == 6) printf("sixty");
            else if (digits[1] == 7) printf("seventy");
            else if (digits[1] == 8) printf("eighty");
            else if (digits[1] == 9) printf("ninety");

            if (digits[2] != 0 && false == 1) printf("-");
            tens = 0;
        } 

        // this if statement checks if the integer is a single digit or if a multi-digit number ends in a digit other than zero
        if (digits[2] != 0 && false == 1) {
            if (digits[2] == 1) printf("one");
            else if (digits[2] == 2) printf("two");
            else if (digits[2] == 3) printf("three");
            else if (digits[2] == 4) printf("four");
            else if (digits[2] == 5) printf("five");
            else if (digits[2] == 6) printf("six");
            else if (digits[2] == 7) printf("seven");
            else if (digits[2] == 8) printf("eight");
            else if (digits[2] == 9) printf("nine"); 
        }
        
        printf("\n\n");

    } while (val != 0); // ends loop if 0 is entered
         
    return 0;
}