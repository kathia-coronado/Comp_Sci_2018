/*Project2_3
The purpose of this project was to create a program to decrypt a Caesar Cipher using arrays.
The key of the cipher is unknown therefore the program used a loop to decrypt the message by
exhaustively searching over all possible 26 keys. A loop was also used to shift the cipher array
tect element-by-element
The original cipher was:
"Fhewhqccydw qdt shofjewhqfxo qhu vkd. Oek sqd tushofj jxyi cuiiqwu kiydw rhkju vehsu qjjqsa. Sxusai
qbb feiiyrbu auoi kdjyb jxu sehhusj edu yi vekdt."
*/
#include "stdafx.h"  //file for visual studio.
#include <iostream>  // header file to access the input and output streams library (cout and cin)     
using namespace std;  // to avoid writing std:: when using cout<< and cin <<

int main()
{    // ciphertext array 
	char cipher[] = "Fhewhqccydw qdt shofjewhqfxo qhu vkd. Oek sqd tushofj jxyi cuiiqwu kiydw rhkju vehsu qjjqsa. Sxusa qbb feiiyrbu auoi kdjyb jxu sehhusj edu yi vekdt.";
	int letter;                                  // variable used to shift the letters of the cipher 
	int i, key = 1;                              // variable for counter and shift key
	int size = sizeof(cipher);                   // variable to store the length or size of the array 

	for (key = 1; key <= 26; key++)              // for loop to go  through all of the 26 possible keys 
	{
		for (i = 0; i <= size; i++)              // loop to go element by element of the cipher 
		{
			letter = cipher[i];                  // letter is equal to the element i of cipher array 
			if (letter >= 'a' && letter <= 'z')  // if lowercase  
			{
				letter = letter - key;           // the letter equal to the original letter minus the shift key

				if (letter < 'a')                // if the letter is less than the letter a will 
					letter = letter + 26;        // wrap around

				cipher[i] = letter;              // cipher element is equal letter 
			}
			else if (letter >= 'A' && letter <= 'Z')   // if uppercase
			{
				letter = letter - key;           // the letter equal to the original letter minus the shift key

				if (letter  < 'A')              // if the letter is less than the letter A will  
					letter = letter + 26;       // wrap around 

				cipher[i] = letter;             // cipher element is equal letter
			}
		}
		cout << "Decrypted message: in key " << key << endl << cipher << endl << endl; // display the plain test messege of all 26 keys 
	}
	return 0; // end program 
}
