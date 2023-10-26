/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256]; // Array to store user input
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; // Array to easily display each letter of the alphabet

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // Get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
        // Iterate through the characters in the input
      for(int i = 0; i < strlen(input); i++){
          // Iterate through the alphabet
          for(int j = 0; j < 26; j++){
            // Use ASCII values to equate letters 
            if(j + 65 == input[i] || j + 65 == input[i] - 32){
              // Increment the corresponding count in the array
              letterCount[j]++;
              break; // Found the letter count it coreresponds to- go back to input iteration
            }
          }
      }
      // Display the results
      printf("Distribution of letters in the input:\n");
      for(int i = 0; i < 26; i++){
        printf("%c: %d ", letters[i], letterCount[i]);
      }
      printf("\n");
      
    }
    return 0;
}