/**
 * Program Name: converter
 * Purpose: to convert different measurement types that the user deciceds to convert (i.e. Miles to Kilometers)
 * @author Riley Sgro
 */

#include <stdio.h>
int main() { // main
    
    // constant declaration used for each conversion 
    float LBS = 2.20462, ACRES = 2.47105, GALLONS = 0.264172, MILES = 0.621371;

    // these statements print the options
    printf("Here are the options:\n");
    printf("1 for conversion between Kilograms and Pounds\n");
    printf("2 for conversion between Hectares and Acres\n");
    printf("3 for conversion between Litres and Gallons\n");
    printf("4 for conversion between Kilometre and Mile\n");
    printf("5 to quit\n\n");
    
    int option; // variable that takes in the users option
    do { // loop that continues to ask until user decides to quit
        
        printf("Which conversion would you like to conduct: ");
        scanf("%i", &option);
        
        // this if statement checks if the user wants to convert Kilograms and Pounds
        if (option == 1) {
            char opt2;
            float val;
            
            printf("K for conversion from Kilograms to Pounds or P for conversion from Pounds to Kilograms: ");
            scanf(" %c", &opt2);
            
            printf("Please enter a value: ");
            scanf("%f", &val);
            
            // this if statement checks which order the conversion will take place
            if (opt2 == 'K') { 
                val = val * LBS;
                printf("Your conversion is %0.2f Lbs\n\n", val);
            } else if (opt2 == 'P') {
                val = val / LBS;
                printf("Your conversion is %0.2f Kg\n\n", val);
            }

        // this if statement checks if the user wants to convert Hectares and Acres       
        } else if (option == 2) {
            char opt2;
            float val;
            
            printf("H for conversion from Hectares to Acres or A for conversion from Acres to Hectares: ");
            scanf(" %c", &opt2);
            
            printf("Please enter a value: ");
            scanf("%f", &val);
            
            // this if statement checks which order the conversion will take place
            if (opt2 == 'H') {
                val = val * ACRES;
                printf("Your conversion is %0.2f Acres\n\n", val);
            } else if (opt2 == 'A') {
                val = val / ACRES;
                printf("Your conversion is %0.2f Hectares\n\n", val);
            }

        // this if statement checks if the user wants to convert Litres and Gallons   
        } else if (option == 3) {
            char opt2;
            float val;
            
            printf("L for conversion from Litres to Gallons or G for conversion from Gallons to Litres: ");
            scanf(" %c", &opt2);
            
            printf("Please enter a value: ");
            scanf("%f", &val);
            
            // this if statement checks which order the conversion will take place
            if (opt2 == 'L') {
                val = val * GALLONS;
                printf("Your conversion is %0.2f Gallons\n\n", val);
            } else if (opt2 == 'G') { 
                val = val / GALLONS;
                printf("Your conversion is %0.2f Litres\n\n", val);
            }

        // this if statement checks if the user wants to convert Kilometeres and Miles   
        } else if (option == 4) {
            char opt2;
            float val;
            
            printf("K for conversion from Kilometre to Mile or M for conversion from Mile to Kilometre: ");
            scanf(" %c", &opt2);
            
            printf("Please enter a value: ");
            scanf("%f", &val);
            
            // this if statement checks which order the conversion will take place
            if (opt2 == 'K') { 
                val = val * MILES;
                printf("Your conversion is %0.2f Miles\n\n", val);

            } else if (opt2 == 'M') { 
                val = val / MILES;
                printf("Your conversion is %0.2f Kilometers\n\n", val);
            }
            
        // in the case of else, this would continue the program if an invalid integer is entered
        } else continue;
        
    } while (option != 5); // ends loop if 5 is entered
        
    return 0;
}