#include<stdio.h>

float add(float a, float b) {
    return a+b;
}

float sub(float a, float b) {
    return a-b;
}

float div(float a, float b) {
    return a/b;
}

float multiply(float a, float b) {
    return a*b;
}

void main() {
    while(1) {
        float a, b;
        int c;

        printf("\n\nThis is a small calculator for few functions like: \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Exit\n");
        
        printf("\nEnter serial no. of the function you want to perform: ");
        scanf("%d", &c);

        if(c==5) {
            printf("\nExiting the program...\n\n");
            return;
        }

        if(c < 1 || c > 5) {
            printf("There is no function with this serial no....");
            return;
        }
        
        printf("\nEnter the numbers you want to perform function on:\n");
        printf("Number 1: ");
        scanf("%f", &a);
        printf("Number 2: ");
        scanf("%f", &b);
        
        printf("\nSolution: ");

        FILE *fptr;
        fptr = fopen("Calculator history.txt", "a");
        if(fptr == NULL) {
            printf("Error opening file...");
            return;
        }
        
        if(c==1) {
            printf("%f\n", add(a,b));
            fprintf(fptr, "%f + %f = %f\n", a, b, add(a,b));
        }
        else if(c==2) {
            printf("%f\n", sub(a,b));
            fprintf(fptr, "%f - %f = %f\n", a, b, sub(a,b));
        }
        else if(c==3) {
            if(b!=0) {
                printf("%f\n", div(a,b));
                fprintf(fptr, "%f / %f = %f\n", a, b, div(a,b));
            }
            else {
                printf("%c\n", 236);
                fprintf(fptr, "%f / %f = ထ\n", a, b);
            }
        }
        else if(c==4) {
            printf("%f\n", multiply(a,b));
            fprintf(fptr, "%f * %f = %f\n", a, b, multiply(a,b));
        }

        fclose(fptr);
    }
}