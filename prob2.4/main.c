//
//  main.c
//  prob2.4
//
//  Declare two variables x (char) and y (unsigned char), assign -1 to x, then cast its value and assigns to y. Print out the value of y and explain the result.
//
//  Created by Thanh C. Tran on 25/11/15.
//  Copyright © 2015 Thanh C. Tran. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char x = -1;
    unsigned char y =(unsigned char) x;
    printf("y = %i\n", y);
    printf("x(-1) in 2's complement form: 1111 1111\n");
    printf("x is casted to y(unsigned), y intepreted as 255\n");
    
    printf("Hello, World!\n");
    return 0;
}
