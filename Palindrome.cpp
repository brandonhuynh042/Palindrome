#include <iostream>
#include <cstring>
using namespace std;
/* This program takes in a sequence of characters, removes all punctuation/spaces, and determines
 * whether or not it is a palindrome.
 * Brandon Huynh, last edited 9/1/2024
 */

int main()
{
  cout << "Please enter a sequence of characters." << endl;
  char input[81];
  cin.get(input, 81); // take in up to 80 characters
  int inputLength = strlen(input);
  char editedInput[inputLength];
  int editedIndex = 0;

  // removing punctuation & spaces, traversing through input
  for (int i= 0; i < inputLength; i++) {
    input[i] = tolower(input[i]); // making everything lowercase

    // check if the character is alphanumeric
    if (isalpha(input[i]) || isdigit(input[i])) {
      editedInput[editedIndex] = input[i];
      editedIndex++;
    }
  }
  // ensure the last character is the null terminator
  editedInput[editedIndex] = '\0';

  // reversing the string
  char reversedInput[strlen(editedInput)];
  int reversedIndex = 0;
  for (int i = (strlen(editedInput)-1); i > -1; i--) {
    reversedInput[reversedIndex] = editedInput[i];
    reversedIndex++;
  }
  // ensure the last character is the null terminator
  reversedInput[reversedIndex] = '\0';
  cout << "Your input: " << editedInput << endl;
  cout << "Reversed: " << reversedInput << endl;
  // check if it is indeed a palindrome
  if (strcmp(editedInput, reversedInput) == 0) {
    cout << "They are palindromes." << endl;
  }
  else {
    cout << "They are not palindromes." << endl;
  }

  return 0;
}

