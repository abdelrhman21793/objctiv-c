//
//  main.c
//  objc
//
//  Created by abdelrhman hesham on 4/12/20.
//  Copyright © 2020 abdelrhman hesham. All rights reserved.
//
#include <math.h>
#include <stdio.h>
#include <float.h>
#include <stdbool.h>
int main(int argc, const char * argv[]) {
//    for (int i = 0 ; i < argc ; i++) {
//        printf("arg %d %s" , i , argv[i]);
//    }
    
    
//    float fTemp;
//    printf("enter temp in F:");
//    scanf("%f" , &fTemp);
//    float cTemp = (fTemp - 32)/1.8;
//    printf("%.1f degrees c \n"  , cTemp);
    
//    printf("min float can use : %e\n" , FLT_MIN);
//    printf("max float can use : %e\n" , FLT_MAX);

//    float pi = 3.1415927 ;
//    printf("3.1415927 + .0000007 = %.7f\n" , pi + .0000007);
//    printf("precise : %d \n" , FLT_DIG);
//
//    int age ;
//    printf("please enter your age :");
//    scanf("%i" , &age);
//
//    if (age < 18 ){
//        printf("you are to young\n ");
//    } else if (age > 18){
//        printf("you are big\n");
//    } else {
//        printf("you are %i \n" , age);
//    }
    
  int number = 7 ;
//    if ((number == 5) || (number == 6 )){
//        printf("number = %i\n" , number);
//    }
//    else
//    {
//        printf("number is not in the list\n");
//    }
//
    bool isTrue = ((number > 3 ) && (number < 8));
    printf("%d\n",isTrue);
    printf("is true %d\n" ,(!true));
    return 0;
}
