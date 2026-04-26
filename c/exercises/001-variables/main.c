#include <stdio.h>
#include <stdbool.h>

int main () {

    //int = whole numbers (4 bytes in modern systems)
    //float = single-precision decimal number (4 bytes)
    //double = doubl-eprecision decimal number (8 bytes)
    //char = single character (1 byte)
    //char[] = array of characters (size varies)
    //bool = true or false (1 byte, requeries <stdbool.h>)


    double pi = 3.149879879879879879879823;
    int age = 25;
    float gpa = 2.5;
    float temperature = -10.1;
    char grade = 'F';
    char name[] = "Name";
    bool isOnline = 0;
    bool forSale = true;

    //printf("You are %d years old", isOnline);

    if(forSale){
        printf("That item is for sale");
    }
    else
        printf("That item is not for sale");

    return 0;
}