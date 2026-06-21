#include <stdio.h>

int main() {
    int age = 20;
    float height = 5.8;
    double pi = 3.14159265359;
    char grade = 'A';
    short int year = 2025;
    long int population = 1000000;
    long long int distance = 9876543210;
    unsigned int marks = 100;
    unsigned long long money = 99999999999;

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Pi: %lf\n", pi);
    printf("Grade: %c\n", grade);
    printf("Year: %hd\n", year);
    printf("Population: %ld\n", population);
    printf("Distance: %lld\n", distance);
    printf("Marks: %u\n", marks);
    printf("Money: %llu\n", money);

    return 0;
}
