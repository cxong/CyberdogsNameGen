#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "namegen.h"

int main(int argc, char *argv[])
{
	srand(time(NULL));
	NameGen g;
	NameGenInit(&g, "prefixes.txt", "suffixes.txt", "suffixnames.txt");
	char buf[512];
	NameGenMake(&g, buf);
	printf("%s\n", buf);
	NameGenTerminate(&g);
	return 0;
}
