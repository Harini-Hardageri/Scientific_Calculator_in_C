#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926536  

//Function Prototype
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);
int modulus(int, int);
double square_root(double);
double cube_root(double);
double square_of_num(double);
double cube_of_num(double);
double inverse_of_num(double);
double x_to_the_power_of_inverse_of_2(double);
double x_to_the_power_of_inverse_of_3(double);
double ten_to_the_power_of_num(double);
double x_multiplied_by_y_whole_divided_by_100(double, double);
double log_base_10(double);
double log_base_2(double);
double log_base_e(double);
double e_to_the_power_of_x(double);
double power(double, double);
long long factorial_return(int);
double degrees_to_radians(double);
double radians_to_degrees(double);
double mean_of_a_set_of_numbers(double);
double sin_function(double);
double cos_function(double);
double tan_function(double);
double cosec_function(double);
double sec_function(double);
double cot_function(double);
double sin_inverse_function(double);
double cos_inverse_function(double);
double tan_inverse_function(double);
double sin_h_function(double);
double cos_h_function(double);
double tan_h_function(double);
double ceil_function(double);
double floor_function(double);
long factorial(int);
long permutation_nPr(int, int);
long combination_nCr(int, int);
double absolute_value_of_num(double);
int decimal_to_binary(int, int[]);
int decimal_to_octal(int, int[]);
int decimal_to_hexadecimal(int, char[]);

void print_menu();

int main() {
    int choice;
    double no, first_no, second_no, angle, radians, result, a, x;
    int first_num, second_num;
    int result_in_int;
    int num, count;
    int n, r;
    long long result_in_long;
    int binary[45];
    int octal[45];
    char hexadecimal[45];

    while(1) {          //Infinite Loop which comes out when choice is 45
        print_menu();   //Function Call 
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if(choice < 1 || choice > 45) {
            fprintf(stderr, "Invalid Menu Choice, Choose an option between 1 to 45");
            continue;
        }

        switch (choice) {
            case 1:   //Add
                result = addition(first_no, second_no);
                printf("\nResult of this addition operation is: %.2f \n", result);
                break;
            case 2:   //Subtract
                result = subtraction(first_no, second_no);
                if (!isnan(result)) {
                   printf("\nResult of this subtraction operation is: %.2f \n", result);
                }
                break;
            case 3:   //Multiply
                result = multiplication(first_no, second_no);
                if (!isnan(result)) {
                   printf("\nResult of this multiplication operation is: %.2f \n", result);
                }
                break; 
            case 4:   //Divide
                result = division(first_no, second_no);
                if (!isnan(result)) {
                   printf("\nResult of this division operation is: %.2f \n", result);
                }
                break;  
            case 5:   //Modulus
                result_in_int = modulus(first_num, second_num);
                if(result_in_int != -1) {
                    printf("\nResult of this modulus operation is: %d \n", result_in_int);
                }
                break;              
            case 6:   //Square Root
                result = square_root(no);
                if (!isnan(result)) {
                   printf("\nResult of this square root is: %.3f \n", result);
                }
                break;
            case 7:   //Cube Root
                result = cube_root(no);
                if (!isnan(result)) {
                   printf("\nResult of this cube root is: %.3f \n", result);
                }
                break;
            case 8: //Square of a Number
                result = square_of_num(no);
                if (!isnan(result)) {
                   printf("\nResult of this square is: %.3f \n", result);
                }
                break;
            case 9: //Cube of a Number
                result = cube_of_num(no);
                if (!isnan(result)) {
                   printf("\nResult of this cube is: %.3f \n", result);
                }
                break;
            case 10: //Inverse of a Number (1 / X)
                result = inverse_of_num(no);
                if (!isnan(result)) {
                   printf("\nResult of this inverse is: %.3f \n", result);
                }
                break;
            case 11: // X ^ (1/2)
                result = x_to_the_power_of_inverse_of_2(no);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 12: // X ^ (1/3)
                result = x_to_the_power_of_inverse_of_3(no);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 13: //10 ^ X
                result = ten_to_the_power_of_num(no);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 14: //(X * Y) / 100
                result = x_multiplied_by_y_whole_divided_by_100(first_no, second_no);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 15: //log base 10
                result = log_base_10(a);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 16: //log base 2
                result = log_base_2(a);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 17: //log base e
                result = log_base_e(a);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 18: //e ^ x
                result = e_to_the_power_of_x(a);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.3f \n", result);
                }
                break;
            case 19:   //Power
                result = power(first_no, second_no);
                if (!isnan(result)) {
                   printf("\nResult of this power operation is: %.3f \n", result);
                }
                break;  
            case 20:   //Factorial
                result_in_long = factorial_return(num);
                if (!isnan(result_in_long)) {
                   printf("\nResult of this factorial is: %lld \n", result_in_long);
                }
                break;  
            case 21: //Degrees to Radians
                result = degrees_to_radians(angle);
                if (!isnan(result)) {
                   printf("\nResult of this degrees to radians is: %.6f \n", result);
                }
                break;
            case 22: //Radians to Degrees
                result = radians_to_degrees(angle);
                if (!isnan(result)) {
                   printf("\nResult of this radians to degrees operation is: %.6f \n", result);
                }
                break;
            case 23: //Mean of a set of numbers
                result = mean_of_a_set_of_numbers(no);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.6f \n", result);
                }
                break;
            case 24: //Sin deg
                result = sin_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this sin function is: %.8f \n", result);
                }
                break;
            case 25: //Cosine deg 
                result = cos_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this cos function is: %.8f \n", result);
                }
                break;
            case 26: //Tangent deg 
                result = tan_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this tan function is: %.8f \n", result);
                }
                break;
            case 27: //Cosecant deg 
                result = cosec_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this cosec function is: %.8f \n", result);
                }
                break;
            case 28: //Secant deg 
                result = sec_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this sec function is: %.8f \n", result);
                }
                break;
            case 29: //Cotangent deg
                result = cot_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this cot function is: %.8f \n", result);
                }
                break;
            case 30: //Sin Inverse Function
                result = sin_inverse_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this sin inverse function is: %.8f \n", result);
                }
                break;
            case 31: //Cos Inverse Function
                result = cos_inverse_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this cos inverse function is: %.8f \n", result);
                }
                break;
            case 32: //Tan Inverse Function
                result = tan_inverse_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this tan inverse function is: %.8f \n", result);
                }
                break;
            case 33: //Sinh or Hyperbolic sin function
                result = sin_h_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this hyperbolic sin function is: %.2f \n", result);
                }
                break;
            case 34: //Cosh or Hyperbolic cos function
                result = cos_h_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this hyperbolic cos function is: %.2f \n", result);
                }
                break;
            case 35: //Tanh or Hyperbolic tan function
                result = tan_h_function(angle);
                if (!isnan(result)) {
                   printf("\nResult of this hyperbolic tan function is: %.2f \n", result);
                }
                break;
            case 36: //Ceil Function
                result = ceil_function(num);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.2f \n", result);
                }
                break;
            case 37: //Floor Function
                result = floor_function(num);
                if (!isnan(result)) {
                   printf("\nResult of this operation is: %.2f \n", result);
                }
                break;
            case 38: //Permutation - nPr
                result_in_long = permutation_nPr(n, r);
                if(result_in_long != -1) {
                    printf("\nResult of this operation is: %ld \n", result_in_long);
                }
                break;
            case 39: //Combination - nCr
                result_in_long = combination_nCr(n, r);
                if(result_in_long != -1) {
                   printf("\nResult of this operation is: %ld \n", result_in_long);
                }
                break;
            case 40: //Absolute value of a number
                result = absolute_value_of_num(a);
                if (!isnan(result)) {
                   printf("\nResult of absolute value of this number is: %.3f \n", result);
                }
                break;
             case 41: //Decimal to Binary number Conversion
                count = decimal_to_binary(num, binary);
                printf("\nResult of this decimal to binary number is: ");
                for (int i = count - 1; i >= 0; i--) {
                    printf("%d", binary[i]);
                }
                printf("\n");
                break;
            case 42: //Decimal to Octal number Conversion
                count = decimal_to_octal(num, octal);
                printf("\nResult of this decimal to octal number is: ");
                for (int i = count - 1; i >= 0; i--) {
                    printf("%d", octal[i]);
                }
                printf("\n");
                break;
            case 43: //Decimal to Hexadecimal number Conversion
                count = decimal_to_hexadecimal(num, hexadecimal);
                printf("\nResult of this decimal to hexadecimal number is: ");
                for (int i = count - 1; i >= 0; i--) {
                    printf("%c", hexadecimal[i]);
                }
                printf("\n");
                break;
            case 44: //Clear Function
                system("cls");
                break;
            case 45: //Exiting Program
                printf("Exiting Program");
                return 0;       
        }
    }
    return 0;
}

void print_menu() {    //Function Definition
    printf("\n\n---------------------------------------------------------------------------------------------------");
    printf("\nWelcome to the Scientific Calculator to calculate Arithmetic Operations, Roots, Powers, Factorials,");
    printf("\nDegrees, Radians, Exponential, Logarithmic, Trignometric Functions. Choose one of the operations:");
    printf("\n---------------------------------------------------------------------------------------------------");   
    printf("\n1. Addition(+)  |  2. Subtraction(-)  |  3. Multiplication(*)  |  4. Division(/)  |  5. Modulus(r)");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n6. Square Root of num |  7. Cube Root of num |  8. Square of num: X ^ 2 |  9. Cube of num: X ^ 3");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n10. 1 / X (Inverse)  |  11. X ^ (1 / 2)  |  12. X ^ (1 / 3)  |  13. 10 ^ X  |  14. (X * Y) / 100");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n15. log(base 10)(x) | 16. log(base 2)(x) | 17. log(base e) or ln(x) | 18. e ^ x (e-Euler's constant)");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n19. Power: X ^ Y  |  20. Factorial of Num: X!  |  21. Degrees to Radians  |  22. Radians to Degrees");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n23. Mean | 24. Sin(x)  |  25. Cos(x)  |  26. Tan(x)  |  27. Cosec(x)  |  28. Sec(x)  |  29. Cot(x)");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n30. Sin^-1(x)  |  31. Cos^-1(x)  |  32. Tan^-1(x)  |  33. Sinh(x)  |  34. Cosh(x)  |  35. Tanh(x)");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n36. Ceil Function()  |  37. Floor Function()  | 38. Permutation - (nPr)  |  39. Combination - (nCr)");
    printf("\n---------------------------------------------------------------------------------------------------");
    printf("\n40. Absolute Value-|x| | 41. Dec to Bin | 42. Dec to Oct | 43. Dec to Hex | 44. Clear  |  45. Exit");
    printf("\n---------------------------------------------------------------------------------------------------");
}

double addition(double a, double b) {
    printf("\nPlease enter the first number: ");
    scanf("%lf", &a);
    printf("\nPlease enter the second number: ");
    scanf("%lf", &b);
    printf("%.2f + %.2f", a, b);
    return a, b, a + b;
}
double subtraction(double a, double b) {
    printf("\nPlease enter the first number: ");
    scanf("%lf", &a);
    printf("\nPlease enter the second number: ");
    scanf("%lf", &b);
    printf("%.2f - %.2f", a, b);
    return a - b;
}
double multiplication(double a, double b) {
    printf("\nPlease enter the first number: ");
    scanf("%lf", &a);
    printf("\nPlease enter the second number: ");
    scanf("%lf", &b);
    printf("%.2f * %.2f", a, b);
    return a * b;
}
double division(double a, double b) { 
    printf("\nPlease enter the first number: ");
    scanf("%lf", &a);
    printf("\nPlease enter the second number: ");
    scanf("%lf", &b);
    if(b == 0) {
        fprintf(stderr, "Invalid Argument (Denominator) for Division");
        return NAN;
    } else {
        printf("%.2f / %.2f", a, b);
        return a / b;
    }
}
int modulus(int a, int b) {
    printf("\nPlease enter the first number: ");
    scanf("%d", &a);
    printf("\nPlease enter the second number: ");
    scanf("%d", &b);
    if(b == 0) {
         fprintf(stderr, "Invalid Argument for Modulus");
         return -1;
    } else {
        printf("%d modulus of %d (or) %d mod %d, remainder is the result", a, b, a, b);
        return a % b;
    }
}
double square_root(double no) {
    printf("\nEnter a number: ");
    scanf("%lf", &no);
    if (no<0)
    {
       printf("Math Error\n");
    }
    else
    {
       printf("Square Root of %.3f", no);
       return sqrt(no);
    }
}
double cube_root(double no) {
    printf("\nEnter a number: ");
    scanf("%lf", &no);
    if (no<0)
    {
       printf("Math Error\n");          
    }
    else
    {
       printf("Cube Root of %.3f", no);
       return cbrt(no);
    }
}
double square_of_num(double no) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &no);
    printf("Square of %lf", no);
    return pow(no, 2);
}
double cube_of_num(double no) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &no);
    printf("Cube of %.3f", no);
    return pow(no, 3);
}
double inverse_of_num(double no) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &no);
    printf("Inverse of %.3f (or) 1 / %.3f", no, no);
    return pow(no, -1);
}
double x_to_the_power_of_inverse_of_2(double no) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &no);
    printf("%.3f ^ (1/2)", no);
    if (no<0)
    {
       printf("Math Error\n");          
    }
    else {
       return pow(no, 0.5);
    }
}
double x_to_the_power_of_inverse_of_3(double no) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &no);
    printf("%.3f ^ (1/3)", no);
    if (no<0)
    {
       printf("Math Error\n");          
    }
    else {  
       return pow(no, 0.333333);
    }
}
double ten_to_the_power_of_num(double no) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &no);
    printf("10 ^ %.3f", no);
    if (no<0)
    {
       printf("Math Error\n");          
    }
    else {
       return pow(10, no);
    }
}
double x_multiplied_by_y_whole_divided_by_100(double first_no, double second_no) {
    printf("\nPlease enter the first number: ");
    scanf("%lf", &first_no);
    printf("\nPlease enter the second number: ");
    scanf("%lf", &second_no);
    printf("(%.2f * %.2f) / 100", first_no, second_no);
    return (first_no * second_no) / 100;
}
double log_base_10(double a) {
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
       printf("Math Error\n");
    }
    else
    {
       printf("log_base_10(%.3f)", a);
       return log10(a);
    }
}
double log_base_2(double a) {
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
       printf("Math Error\n");
    }
    else
    {
       printf("log_base_2(%.3f)", a);
       return log2(a);
    }
}
double log_base_e(double a) {
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
       printf("Math Error\n");
    }
    else
    {
       printf("log_base_e(%.3f) or ln(%.3f)", a, a);
       return log(a);
    }
}
double e_to_the_power_of_x(double a) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &a);
    printf("e ^ %.4f", a);
    return exp(a);
}
double power(double a, double b) {
    printf("\nPlease enter the first number: ");
    scanf("%lf", &a);
    printf("\nPlease enter the second number: ");
    scanf("%lf", &b);
    printf("%.2f raised to the power of %.2f (or) %.2f ^ %.2f", a, b, a, b);
    if(b < 0) {
        printf("Exponent (Power b) should always be positive");
    }
    else {
        return pow(a, b);
    }
}
long long factorial_return(int num) {
    printf("\nPlease enter a number between 0 to 20: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Factorial cannot be defined for negative integers");
    }
    else {
        long long factorial;
        int i;
        factorial = 1;
        for(i = 1; i<=num; i++)
        {
          factorial = factorial * i;
        }
        printf("%d!", num);
        return factorial;
    }
}
double degrees_to_radians(double angle) {
    printf("\nPlease enter an angle in degrees: ");
    scanf("%lf", &angle);
    printf("%.2f degrees in radians", angle);
    return angle * (PI / 180);
}
double radians_to_degrees(double angle) {
    printf("\nPlease enter an angle in radians: ");
    scanf("%lf", &angle);
    printf("%.2f radians in degrees", angle);
    return angle * (180 / PI);
}
double mean_of_a_set_of_numbers(double no) {
    int n, i;
    float num[100], sum = 0.0;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    if (n > 100 || n < 1) {
        printf("Please enter the number of elements in the range of (1 to 100)\n");
        printf("Enter the number of elements: ");
        scanf("%d", &n);
    }
    for (i = 0; i < n; ++i) {
        printf("%d. Enter a number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    return (sum / n);
}
double sin_function(double angle) {
    double radians;
    printf("Enter angle in degrees between 0 to 360 degrees (or) 0 to 2PI radians: ");
    scanf("%lf", &angle);
    printf("sin(%.2f degrees)\n", angle);
    if(angle >= 0 && angle <= 360) {
        if(angle == 180) {
           printf("Result of this sin function is: 0.0000000000");  
        }
        else {
            radians = angle * (PI / 180);
            return sin(radians);
        }
    }
    else {
        printf("Please enter an angle between 0 to 360 degrees, angles above 360 degrees are fictional angles which do not exist");
    }
}
double cos_function(double angle) {
    double radians;
    printf("Enter angle in degrees between 0 to 360 degrees (or) 0 to 2PI radians: ");
    scanf("%lf", &angle);
    printf("cos(%.2f degrees)\n", angle);
    if(angle >= 0 && angle <= 360) {
        if(angle == 90) {
           printf("Result of this cos function is: 0.0000000000");   
        }
        else {
           radians = angle * (PI / 180);
           return cos(radians);
        }
    }
    else {
        printf("Please enter an angle between 0 to 360 degrees, angles above 360 degrees are fictional angles which do not exist");
    }
}
double tan_function(double angle) {
    double radians;
    printf("Enter angle in degrees between 0 to 360 degrees (or) 0 to 2PI radians: ");
    scanf("%lf", &angle);
    printf("tan(%.2f degrees)\n", angle);  
    if(angle >= 0 && angle <= 360) {        
        if(angle == 90 || angle == 270) {
            printf("Result of this tan function is: Not Defined or Infinity");
        }
        else {
            radians = angle * (PI / 180);
            return tan(radians);
        }
    }
    else {
        printf("Please enter an angle between 0 to 360 degrees, angles above 360 degrees are fictional angles which do not exist");
    }
}
double cosec_function(double angle) {
    double radians;
    printf("Enter angle in degrees between 0 to 360 degrees (or) 0 to 2PI radians: ");
    scanf("%lf", &angle);
    printf("cosec(%.2f degrees)\n", angle);
    if(angle >= 0 || angle <= 360) {
        if(angle == 0 || angle == 180 || angle == 360) {
            printf("Result of this cosec function is: Not Defined or Infinity");
        }
        else {
            radians = angle * (PI / 180);
            return 1/sin(radians);
        }
    }
    else {
       printf("Please enter an angle between 0 to 360 degrees, angles above 360 degrees are fictional angles which do not exist"); 
    }
}
double sec_function(double angle) {
    double radians;
    printf("Enter angle in degrees between 0 to 360 degrees (or) 0 to 2PI radians: ");
    scanf("%lf", &angle);
    printf("sec(%.2f degrees)\n", angle);
    if(angle >= 0 || angle <= 360) {
        if(angle == 90 || angle == 270) {
            printf("Result of this sec function is: Not defined or Infinity");
        }
        else {
            radians = angle * (PI / 180);
            return 1/cos(radians);
        }
    }
     else {
       printf("Please enter an angle between 0 to 360 degrees, angles above 360 degrees are fictional angles which do not exist");
    }
}
double cot_function(double angle) {
    double radians;
    printf("Enter angle in degrees between 0 to 360 degrees (or) 0 to 2PI radians: ");
    scanf("%lf", &angle);
    printf("cot(%.2f degrees)\n", angle);
    if(angle >= 0 && angle <= 360) {
         if(angle == 0 || angle == 180 || angle == 360) {
            printf("Result of this cot function is: Not Defined or Infinity");
        }
        if(angle == 90 || angle == 270) {
           printf("Result of this cot function is: 0.0000000000");  
        }
        else {
           radians = angle * (PI / 180);
           return 1/tan(radians);
        }
    }
    else {
       printf("Please enter an angle between 0 to 360 degrees, angles above 360 degrees are fictional angles which do not exist");
    }
}
double sin_inverse_function(double x) {
    printf("Enter value of x which is betweeen -1 to 1: ");
    scanf("%lf", &x);
    if(x >= -1 || x <= 1) { 
       printf("sin_inverse(%.2f)", x);
       return asin(x) * (180 / PI);
    }
    else {
       printf("Enter value of x which is betweeen -1 to 1 "); 
    }
}
double cos_inverse_function(double x) {
    printf("Enter value of x which is betweeen 1 to -1: ");
    scanf("%lf", &x);
    printf("cos_inverse(%.2f)", x);
    return acos(x) * (180 / PI);
}
double tan_inverse_function(double x) {
    printf("Enter value of x: ");
    scanf("%lf", &x);
    printf("tan_inverse(%.2f)", x);
    return atan(x) * (180 / PI);
}
double sin_h_function(double angle) {
    double radians;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    radians = angle * (PI / 180.0);
    printf("sinh(%.2f degrees) or hyperbolic sin(%.2f degrees)", angle, angle);
    return sinh(radians);
}
double cos_h_function(double angle) {
    double radians;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    radians = angle * (PI / 180.0);
    printf("cosh(%.2f degrees) or hyperbolic cos(%.2f degrees)", angle, angle);
    return cosh(radians);
}
double tan_h_function(double angle) {
    double radians;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    radians = angle * (PI / 180.0);
    printf("tanh(%.2f degrees) or hyperbolic tan(%.2f degrees)", angle, angle);
    return tanh(radians);
}
double ceil_function(double num) {
    printf("\nEnter a number: ");
    scanf("%lf",&num);
    printf("Ceil(%.2f)", num);
    return ceil(num);
}
double floor_function(double num) {
    printf("\nEnter a number: ");
    scanf("%lf",&num);
    printf("Floor(%.2f)", num);
    return floor(num);
}
long factorial(int num) {
    int n, i;
    long factorial;
    factorial = 1;
    for(i = 1; i<=num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
long permutation_nPr(int n, int r) {
    printf("\nEnter two numbers: ");
    scanf("%d %d", &n, &r);
    printf("%dP%d\n", n, r);
    if(n>=r && n>0 && r>=0)
    {
       return factorial(n) / factorial(n - r);
    }
    else
    {
       printf("Math Error\n");
       return -1;
    }
}
long combination_nCr(int n, int r) {
    printf("\nEnter two numbers: ");
    scanf("%d %d", &n, &r);
    printf("%dC%d\n", n, r);
    if(n>=r && n>0 && r>=0)
    {
       return factorial(n) / (factorial(n - r) * factorial(r));
    }
    else
    {
       printf("Math Error\n");
       return -1;
    }
}
double absolute_value_of_num(double a) {
    printf("\nPlease enter a number: ");
    scanf("%lf", &a);
    printf("Absolute value of %.2f (or) |%.2f|", a, a);
    return abs(a);
}
int decimal_to_binary(int num, int binary[]) {
    printf("\nEnter a number in decimal form: ");
    scanf("%d", &num);
   // counter for binary array
    int i = 0;
    if (num == 0) {
        binary[i++] = 0;
        return i;
    }
    while (num > 0) {
        // storing remainder
        binary[i++] = num % 2;
        num = num / 2;
    }
    return i;  // return the number of binary digits
}
int decimal_to_octal(int num, int octal[]) {
    printf("\nEnter a number in decimal form: ");
    scanf("%d", &num);
    // counter for octal number array
    int i = 0;
    if (num == 0) {
        octal[i++] = 0;
        return i;
    }
    while (num > 0) {
        // storing remainder
        octal[i++] = num % 8;
        num = num / 8;
    }
    return i;  // return the number of octal digits
}
int decimal_to_hexadecimal(int num, char hexadecimal[]) {   
    printf("\nEnter a number in decimal form: ");
    scanf("%d", &num);
    // printf("%x", num);
    int i = 0;
    if (num == 0) {
        hexadecimal[i++] = '0';
        return i;
    }
    // Convert decimal to hexadecimal
    while (num > 0) {
        int remainder = num % 16; 
        // Check remainder and store it as hexadecimal digits
        if (remainder < 10) {
            hexadecimal[i++] = remainder + '0';
        } else {
            hexadecimal[i++] = remainder - 10 + 'A'; // for A, B, C, D, E, F
        }
        num = num / 16;
    }
    return i; // return the number of hexadecimal digits
}
