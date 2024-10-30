#include <msp430.h> 

int cal_add (int a, int b);
int cal_sub (int a, int b);
int cal_mult (int a, int b);
int cal_div (float a, float b);
int cal_mod (int a, int b);
int cal_power (int a, int b);

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    int num1, num2;   // Declare two integer variables 'num1' and 'num2'.
    int sum, sub, mult, mod, power;   // Declare variables to store the results of arithmetic operations.
    float div;   // Declare a float variable 'div' to store the result of division.

    num1=10;
    num2=5;

    sum = cal_add (num1,num2);
    sub = cal_sub (num1,num2);
    mult = cal_mult (num1,num2);
    div = cal_div (num1,num2);
    mod = cal_mod (num1,num2);
    power = cal_power (num1,num2);

    //Performs all arithmetic operations
    //sum = num1 + num2;   // Calculate the sum of 'num1' and 'num2'.
    //sub = num1 - num2;   // Calculate the difference between 'num1' and 'num2'.
    //mult = num1 * num2;  // Calculate the product of 'num1' and 'num2'.
    //div = (float)num1 / num2;   // Calculate the division of 'num1' by 'num2' and cast the result to a float.
    //mod = num1 % num2;   // Calculate the modulus of 'num1' and 'num2'.
    //power = num1*num1*num1*num1*num1; //// Calculate powrr of 'num1' is 'num2'.

    //System.out.println(String(sum))

    while(1);

    return 0;   // Return 0 to indicate successful execution of the program.
    }

int cal_add (int a, int b){
    int result_add;
    result_add = a+b;
    return result_add;}


int cal_sub (int a, int b){
    int result_sub;
    result_sub = a-b;
    return result_sub;}

int cal_mult (int a, int b){
    return a*b;
}
int cal_div (float a, float b){
    return a/b;
}
int cal_mod (int a, int b){
    return a%b;
}
int cal_power (int a, int b){
    if (b == 0){
        return 1;
    }
    else{
        a = a*cal_power(a, b-1);
    }
    return a;
}

