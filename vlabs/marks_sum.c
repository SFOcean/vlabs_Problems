//Problem Link: https://l.facebook.com/l.php?u=https%3A%2F%2Fwww.hackerrank.com%2Fchallenges%2Fstudents-marks-sum%2Fproblem%3Ffbclid%3DIwAR2pI3EHiK0gvg0loo7-hZChWWJ_-HJ43448MgYXsdbFYW1VJjXNlF1vI_w&h=AT3CnFzY8jnNfkfz3wKIZcap1Gz4cf-kSnEwO8EvB9SvSgIs43sUE0-HwaRB3IrDON8vM-g2rthXV6H_bjCKp3jXdNPMVocgKCAlOMNwyW08xvSqRvGyj5uC5MGzm-RszTTIwQ

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;

  if (gender=='b'){
    for (int i=0; i<number_of_students; i=i+2)
    {
        sum = sum + marks[i];
    }
  }
  if (gender=='g'){
    for (int i=1; i<number_of_students; i=i+2)
    {
        sum = sum + marks[i];
    }
  }
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
