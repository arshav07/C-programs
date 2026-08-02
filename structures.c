#include<stdio.h>

struct Student
{
    int roll;
    char grade;
};

int main()
{
    struct Student s;

    s.roll = 1;
    s.grade = 'A';

    printf("%d %c",s.roll,s.grade);

    return 0;
}
