#include <stdio.h>
#include <math.h>      // for pow() and sqrt()

#define PI 3.14   // Defining a macro PI

// Defining a function that takes four integers of two points and returns Euclidian distance between both points
float euclidian_distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

/* Defining a function that takes a function pointer with four integer parameters and four other integers, it returns area of the circle of radius distance between two points */
float areaOfCircle(float (*fptr)(int, int, int, int), int x1, int y1, int x2, int y2)
{
    return PI * pow(fptr(x1, y1, x2, y2), 2);
}

int main()
{
    printf("\n\n********* Welcome to Euclidian Distance and Area of Circle ********\n\n");
    // Declaring function pointer
    float (*fptr)(int, int , int , int);
    fptr = &euclidian_distance;

    int x1, y1, x2, y2;
    printf("Enter x1 of (x1, y1) point: ");
    scanf("%d", &x1);
    getchar();
    printf("Enter y1 of (x1, y1) point: ");
    scanf("%d", &y1);
    getchar();
    printf("Enter x2 of (x2, y2) point: ");
    scanf("%d", &x2);
    getchar();
    printf("Enter y2 of (x2, y2) point: ");
    scanf("%d", &y2);
    getchar();

    printf("\nThe distance between (%d, %d) and (%d, %d) is %f\n", x1, y1, x2, y2, euclidian_distance(x1, y1, x2, y2));

    printf("The Area of the circle having radius %f is %f\n", euclidian_distance(x1, y1, x2, y2), areaOfCircle(fptr, x1, y1, x2, y2));

    return 0;
}


