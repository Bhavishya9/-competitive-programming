/*

Manipulating numbers is at the core of a programmer's job. To test how well you know their properties, 
you are asked to solve the following problem.You are given n non-negative integers a1,a2,...,an. 
You want to know whether it's possible to construct a new integer using all the digits of these numbers 
such that it would be divisible by . You can reorder the digits as you want. The resulting number can 
contain leading zeros. For example, consider the numbers 50,40,90 from which you have to construct a 
new integer 005490 . Numerous arrangements of digits are possible.Complete the function canConstruct 
which takes an integer array as input and return "Yes" or "No" based on whether or not the required 
integer can be formed.

*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* canConstruct(int a_size, int* a) {
    // Return "Yes" or "No" denoting whether you can construct the required number.
    long sum=0;
    for(int index=0;index<a_size;index++){
        sum+=a[index];
    }
    if(sum%3==0)
        return "Yes";
    return "No";
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%i", &n);
        int *a = malloc(sizeof(int) * n);
        for (int a_i = 0; a_i < n; a_i++) {
           scanf("%i",&a[a_i]);
        }
        int result_size;
        char* result = canConstruct(n, a);
        printf("%s\n", result);
    }
    return 0;
}
