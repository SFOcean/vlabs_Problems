//Problem Link: https://l.facebook.com/l.php?u=https%3A%2F%2Fwww.hackerrank.com%2Fchallenges%2Freverse-array-c%2Fproblem%3Ffbclid%3DIwAR27cDXwR8Mq4-8frQ3WEJc_kwd5lO4A3UyL0TI81eW49Nv1ynIkp9trjDQ&h=AT3CnFzY8jnNfkfz3wKIZcap1Gz4cf-kSnEwO8EvB9SvSgIs43sUE0-HwaRB3IrDON8vM-g2rthXV6H_bjCKp3jXdNPMVocgKCAlOMNwyW08xvSqRvGyj5uC5MGzm-RszTTIwQ

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i = num-1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}
