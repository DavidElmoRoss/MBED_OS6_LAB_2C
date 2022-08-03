/*
    Title:  Program to input 2 values then AND OR XOR them
    Author: Your Name, Student ID, Course Code, Lab Section
    Date:   Today's date
    Description:    This program will continually prompt you separately for 
                    2 integer inputs. It will then AND OR and XOR these values 
                    and show the output on the screen. 
*/
#include "mbed.h"

void clear(void);                   // function to clear PC screen
void position(int x, int y);        // function to position cursor (x,y);
int main(void)
{
    unsigned int num1,num2;         // input values
    unsigned int ans1, ans2,ans3;   // variables for AND, OR, XOR
    clear();                        // clear the display
    for(;;)                         // endless loop
    {
        // Get user Input   
        position(1,1);              // get num1 at (1,1)
        printf("Input first number ? ");
        scanf("%x",&num1);
        position(2,1);              // get num2 at (2,1)
        printf("Input second number ? ");
        scanf("%x",&num2);
        // Do calculations
        ans1=num1 & num2;           // ans1 is num1 & num2
        ans2=num1 | num2;           // ans2 is num1 | num2
        ans3=num1 ^ num2;           // ans3 is num1 ^ num2
        // output results
        position(3,1);              // output & at (3,1)
        printf("%X & %X = %X",num1,num2,ans1);
        position(4,1);              // output | at (4,1)
        printf("%X | %X = %X",num1,num2,ans2);
        position(5,1);              // output ^ at (5,1)
        printf("%X ^ %X = %X",num1,num2,ans3);
        position(6,1);              // position cursor at (6,1)
        printf("Hit Enter key to continue...");
        getchar();                  // get <ENTER> from last scanf from buffer
        getchar();                  // wait for new <ENTER> from keyboard
        clear();                    // clear the display
    }    
}
// Function Definitions
void clear(void)
{
    printf("\e[2J");
    fflush(stdout);   
}
void position(int x, int y)
{
    printf("\e[%d;%dH",x,y); 
    fflush(stdout);  
}