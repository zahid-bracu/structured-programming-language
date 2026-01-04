//Describe variables and data types with their format specifier
#include <stdio.h>
int main() {
char c = 'A'; // char
int x = 100; // int
float f = 3.14f; // float
double d = 3.1415; // double
short s = 10; // short
long l = 100000L; // long
long long int ll = 9999999999LL; // long long
unsigned int u = 50; // unsigned int
unsigned char uc = 255; // unsigned char
printf("char: %c\n", c);
printf("int: %d\n", x);
printf("float: %f\n", f);
printf("double: %lf\n", d);
printf("short: %hd\n", s);
printf("long: %ld\n", l);
printf("long long: %lld\n", ll);
printf("unsigned int: %u\n", u);
printf("unsigned char (as number): %u\n", uc);
printf("unsigned char (as char): %c\n", uc);
return 0;
}