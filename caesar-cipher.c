/***************************************************************************************
 * Author       : Subham Sarda
 *
 * File Name    : caesar-cipher.c
 * 
 * Date Created : 7th April 2019
 * 
 * Description  : The code in this file implements one of the most basic ciphering
 *                algorithm; that is the Caesar Cipher algorithm to convert plain
 *                text into cipher text.
 **************************************************************************************/

#ifndef _STDIO_
#define _STDIO_
#include<stdio.h>
#endif

#ifndef _STDLIB_
#define _STDLIB_
#include<stdlib.h>
#endif

/***************************************************************************************
 * Function Name : cipher
 *
 * Parameters    : plain_text - This is the plain text entered by the user to encrypt
 *
 * Description   : This function uses the Caesar Cipher algorithm to encrypt plain text
 * 
 * Output        : The function returns the encrypted (cipher) text
 *
 ***************************************************************************************/

char* cipher( char* plain_text )
{
    char* cipher_text = (char*) malloc( sizeof( plain_text ) );

    for ( int i = 0; *( plain_text + i ) != '\0'; i++ )
    {
        cipher_text[i] = ( *( plain_text + i ) + 3 );
    }
    
    return cipher_text;
}

/***************************************************************************************
 * Function Name : decipher
 *
 * Parameters    : cipher_text - This is the text entered by the user to decrypt
 *
 * Description   : This function uses the Caesar Cipher algorithm to decrypt cipher text
 *
 * Output        : The function returns the decrypted (plain) text
 *
 ***************************************************************************************/

char* decipher( char* cipher_text )
{
    char* plain_text = (char*) malloc( sizeof( cipher_text ) );

    for ( int i = 0; *( cipher_text + i ) != '\0'; i++ )
    {
        plain_text[i] = ( *( cipher_text + i ) - 3 );
    }

    return plain_text;
}

/***************************************************************************************
 * Function Name : main
 *
 * Parameters    : 
 *
 * Description   : This function is the starting point for the program execution. User
 *                 enters input from the STDIN device to this function and gets the
 *                 output on to the STDOUT device.
 *
 * Output        :
 *
 ***************************************************************************************/

void main( void )
{
   char* plain_text   = (char*) malloc( 256 * sizeof( char ) );
   char* cipher_text  = (char*) malloc( 256 * sizeof( char ) );

   printf("Enter plain text: ");
   scanf("%s", plain_text);
 
   printf("\nCiphered Text: %s", cipher( plain_text ) );

   printf("\n\nEnter cipher text: ");
   scanf("%s", cipher_text);

   printf("\nDeciphered Text: %s", decipher( cipher_text ) ); 

   free( plain_text );
   free( cipher_text );
}

