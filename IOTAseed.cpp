#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));
	FILE *fptr;
	char seed[82];
	int randint;
	int i;

	fopen_s(&fptr, "seed.txt", "w");

	for (i = 0; i < 81; i++) {
		randint = rand() % 27;
		if (randint == 26) seed[i] = '9';
		else seed[i] = randint + 65;
	}
	seed[i] = '\0';
	
	fputs(seed, fptr);
}

