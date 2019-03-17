#include <stdio.h>

int main() {
    int points_course_a, points_course_b, grade_course_a, grade_course_b;

    printf("Enter number of points for course a:\n");
    scanf("%d", &points_course_a);
    printf("Enter number of points for course b:\n");
    scanf("%d", &points_course_b);
    printf("Enter grade for course a:\n");
    scanf("%d", &grade_course_a);
    printf("Enter grade for course b:\n");
    scanf("%d", &grade_course_b);

    printf("Average grade is %g\n", (points_course_a*grade_course_a + points_course_b*grade_course_b)
                                    /(float)(points_course_a+points_course_b));
    return 0;
}
