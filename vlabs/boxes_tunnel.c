//Problem Link: https://l.facebook.com/l.php?u=https%3A%2F%2Fwww.hackerrank.com%2Fchallenges%2Ftoo-high-boxes%2Fproblem%3Ffbclid%3DIwAR2snYxrTOsur9O8NoWn3ATKIY6kaVTHuG9uFPHdavmshEf_d-gABPpZW2Q&h=AT3CnFzY8jnNfkfz3wKIZcap1Gz4cf-kSnEwO8EvB9SvSgIs43sUE0-HwaRB3IrDON8vM-g2rthXV6H_bjCKp3jXdNPMVocgKCAlOMNwyW08xvSqRvGyj5uC5MGzm-RszTTIwQ

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length, width, height;
};

typedef struct box box;

int get_volume(box b) {
	return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b) {
	if (b.height < MAX_HEIGHT) {
        return 1;
	}
	else
        return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
