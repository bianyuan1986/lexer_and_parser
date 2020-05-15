#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqldetecter.h"

int main(int argc, char *argv[])
{
	sqldetect(argv[1], strlen(argv[1]));

	return 0;
}

