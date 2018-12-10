//
//  main.c
//  helloworld
//
//  Created by Nicholas Morris on 3/12/18.
//  Copyright © 2018 Nicholas Morris. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
//    printf("        *\n       *\n      *\n     *\n*   *\n * *\n  *\n"); // Prints a tick
//    float radius;
//    printf("What is the radius: ");
//    scanf("%f", &radius);
//    printf("The volume of the sphere is: %f\n", 4*M_PI*pow(radius,3));//Print volume of sphere
//    int test_variable;
//    test_variable = pow(5,2);
//    printf("%f", M_PI);
    
    
    /*
     * Prompts the user to enter a amount of dollars, and returns the required
     number of notes
     */
    printf("Enter a dollar amount: ");
    int dollars = 0;
    scanf("%d", &dollars);
    int number_twenty = (int)floor(dollars/20);
    int number_ten = (int)floor((dollars - number_twenty*20)/10);
    int number_five = (int)floor((dollars - number_twenty*20 - number_ten*10)/5);
    int number_one = (int)floor((dollars - number_twenty*20 - number_ten*10 - number_five*5)/1);
    
    printf("$20 bills: %d\n", number_twenty);
    printf("$10 bills: %d\n", number_ten);
    printf("$5 bills: %d\n", number_five);
    printf("$1 bills: %d\n", number_one);
   // printf("test: $d\n", dollars - number_twenty*20 - number_ten*10 - number_five*5)
    
    
    return 0;
    
}
