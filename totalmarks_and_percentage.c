#include <stdio.h>
int main()
{
    int maths = 77;
    int english = 89;
    int science = 59;
    int total_no = 300;
    int total_marks;
    int percentage;

    total_marks = maths + english + science;
    percentage = (total_marks * 100) / total_no;

    printf("total marks=%d\n,percentage=%d\n", total_marks, percentage);

    return 0;
}