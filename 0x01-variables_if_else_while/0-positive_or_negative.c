#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* comply with betty style */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
