#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    printf("\t\tfloat\t\tdouble\t\tlong double\n");
    printf("SIZE         :\t%llu B\t\t%llu B\t\t%llu B\n", sizeof(float), sizeof(double), sizeof(long double));
    printf("MIN VALUE    :\t%E\t%lE\t%LE\n", FLT_MIN, DBL_MIN, LDBL_MIN); // Minimum, normalized, positive value of floating-point number.
    printf("MIN TRUE VAL :\t%E\t%lE\t%LE\n", FLT_TRUE_MIN, DBL_TRUE_MIN, LDBL_TRUE_MIN); // Minimum positive value of floating-point number.
    printf("MAX VALUE    :\t%E\t%lE\t%LE\n", FLT_MAX, DBL_MAX, LDBL_MAX); // Maximum finite value of floating-point number.
    printf("RADIX        :\t%d\t\t%d\t\t%d\n", FLT_RADIX, FLT_RADIX, FLT_RADIX); // Radix of exponent representation (MSVC only: _DBL_RADIX, _LDBL_RADIX).
    printf("SIGNIFICAND  :\t%d\t\t%d\t\t%d\n", FLT_MANT_DIG, DBL_MANT_DIG, LDBL_MANT_DIG); // Number of digits in the radix specified by FLT_RADIX in the floating-point significand. The radix is 2; hence these values specify bits.
    printf("MIN EXP      :\t%d\t\t%d\t\t%d\n", FLT_MIN_EXP, DBL_MIN_EXP, LDBL_MIN_EXP); // Minimum negative integer such that FLT_RADIX raised to that number is a representable floating-point number.
    printf("MAX EXP      :\t%d\t\t%d\t\t%d\n", FLT_MAX_EXP, DBL_MAX_EXP, LDBL_MAX_EXP); // Maximum integer such that FLT_RADIX raised to that number is a representable floating-point number.
    printf("DIGITS       :\t%d\t\t%d\t\t%d\n", FLT_DIG, DBL_DIG, LDBL_DIG); // Number of digits, q, such that a floating-point number with q decimal digits can be rounded into a floating-point representation and back without loss of precision.
    //printf("MIN 10 EXP   :\t%d\t\t%d\t\t%d\n", FLT_MIN_10_EXP, DBL_MIN_10_EXP, LDBL_MIN_10_EXP); // Minimum negative integer such that 10 raised to that number is a representable floating-point number.
    //printf("MAX 10 EXP   :\t%d\t\t%d\t\t%d\n", FLT_MAX_10_EXP, DBL_MAX_10_EXP, LDBL_MAX_10_EXP); // Maximum integer such that 10 raised to that number is a representable floating-point number.
    //printf("EPSILON      :\t%E\t%lE\t%LE\n", FLT_EPSILON, DBL_EPSILON, LDBL_EPSILON); // Smallest positive number x, such that x + 1.0 is not equal to 1.0
    //printf("SUBNORMAL    :\t%d\t\t%d\t\t%d\n", FLT_HAS_SUBNORM, DBL_HAS_SUBNORM, LDBL_HAS_SUBNORM); // Whether the type supports subnormal (denormal) numbers: -1 - indeterminable, 0 - absent, 1 - present 
    //printf("DECIMAL DIG  :\t%d\n", DECIMAL_DIG); // Number of decimal digits for conversion from the largest floating point type to a decimal string and back without loss of precision.
    //printf("DECIMAL DIGS :\t%d\t\t%d\t\t%d\n", FLT_DECIMAL_DIG, DBL_DECIMAL_DIG, LDBL_DECIMAL_DIG); // The number of decimal digits n, such that any floating-point number with p radix b digits can be rounded to a floating-point number with n decimal digits and back without loss of precision.
    //printf("ROUNDING     :\t%d\t\t%d\t\t%d\n", FLT_ROUNDS, _DBL_ROUNDS, _LDBL_ROUNDS); // Rounding mode for floating-point addition.
    //printf("EVALUATION   :\t%d", FLT_EVAL_METHOD); // Use of extended precision for intermediate results: 0 - not used, 1 - double is used instead of float, 2 - long double is used
    return 0;
}