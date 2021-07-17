#include <stdio.h>

int get_num_digits(int num)
{
    int rem = num;
    int count = 1;
    while (rem >= 10)
    {
        rem = rem / 10;
        count++;
    }

    return count;
}

int power(int base, int exponent)
{
    int result = 1;
    for (exponent; exponent > 0; exponent--)
    {
        result = result * base;
    }

    return result;
}




int multiply(int x, int y)
{
    // x.y = 10^n ac + + 10 ^ n/2 (ad + bc) + bd
    // ad + bc = (a + b) * (c + d) - ac - bd
    int n = get_num_digits(x);
    if (n == 1) {
        return (x * y);
    }

    int a = x / power(10, (n / 2));
    int b = x % power(10, (n / 2));
    int c = y / power(10, (n / 2));
    int d = y % power(10, (n / 2));
    int ac = multiply(a, c);
    int bd = multiply(b, d);
    int abcd = multiply((a+ b), (c + d));
    int ad_bc = (multiply((a+ b), (c + d))) - (ac + bd);
    int prod = ((power(10, (n % 2 == 0 ? n : n - 1)) * ac) + (power(10, n / 2) * ad_bc) + bd);
    printf("\n a is %d b is %d c is %d d is %d and n is %d", a, b, c, d, n);
    printf("\n ac is %d bd is %d adbc is %d", ac, bd, ad_bc);
    printf("\n sum is %d", prod);

    return prod;
}

int main()
{
    int x = 123456;
    int y = 654321;
    int result = multiply(x, y);
    printf("\nResult is %d", result);
    return 0;
}