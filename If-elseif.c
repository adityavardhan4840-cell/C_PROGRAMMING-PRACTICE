/* IF-ELSEIF */
#include <stdio.h>

void main()
{
    int marks = 0;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if ((marks >= 90) && (marks <= 100)) {printf("O grade");}
    else if ((marks >= 85) && (marks <= 89)) {printf("A+ grade");}
    else if ((marks >= 80) && (marks <= 84)) {printf("A grade");}
    else if ((marks >= 75) && (marks <= 79)) {printf("B+ grade");}
    else if ((marks >= 70) && (marks <= 74)) {printf("B grade");}
    else if ((marks >= 65) && (marks <= 69)) {printf("C+ grade");}
    else if ((marks >= 60) && (marks <= 64)) {printf("C grade");}
    else if ((marks >= 55) && (marks <= 59)) {printf("D+ grade");}
    else if ((marks >= 50) && (marks <= 54)) {printf("D grade");}
    else if ((marks >= 45) && (marks <= 49)) {printf("E+ grade");}
    else if ((marks >= 40) && (marks <= 44)) {printf("E grade");}
    else if ((marks >= 35) && (marks <= 39)) {printf("F+ grade");}
    else if (marks <35)  {printf("FAIL");}
    else {printf("INVALID MARKS");}
}
