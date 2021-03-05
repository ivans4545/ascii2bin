/********************************/
/* Program Name:  ascii2bin     */
/* Author: Ivan Solares         */
/* Date:                        */
/********************************/
/* Description:                 */
/* Validation Checks:           */
/* Enhancements:                */
/********************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <string.h>
#define byte unsigned char

int main (int argc, char * argv[], char ** envp) {

int offset = 48;
int number = 0;
int retval;
int digit = 0;
char ascii_value;
int returnValue = 0;

retval = read(0, &ascii_value, 1);

while (retval == 1) {
    // checks for "\n"
    if(ascii_value == '\n'){
        break;
    }
    // used to ensure we check for 1's and 0's
    if(ascii_value != '0' && ascii_value != '1'){
        return 1;
    }
    

    digit = ascii_value - offset;
    number = (number << 1) + digit;
    
    retval = read(0, &ascii_value, 1);
    
    }
    
    printf("%u\n", number);
    return returnValue;
    

    
 }