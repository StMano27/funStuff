// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdlib.h"
#include "math.h"
#include "stdio.h"

const int row = 500;
const int col = 500;
//if ~isodd(r) % check for odd number of rows, cols
//r = r + 1;
//c = c + 1;
//end
const int treegrowth = 20;
const int V = 20000;
int fd[row][col] = { 0 };
int ef[row][col] = { 0 };
int tf[row][col] = { 0 };
double perm[row][col] = { 0 };
int E[row][col] = { 0 };
int newca[row][col] = { 0 };

void initPermArray(double arr[row][col])
{
	int i, j;
	time_t t;

	srand((unsigned)time_t(&t));

	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			perm[i][j] = 100 * rand() % (225 + 1 - 210) + 210;
			perm[i][j] /= 100;
		}
	}
}

int main()
{
	int i, j, ii;

	initPermArray(perm);

	for (i = 0; i < row; i++){
		ii = i;
		for (j = (round((double)col / 2) - round((double)row / 4) - (ii + 1)); j < (round((double)col / 2) + round((double)row / 4) + (ii + 1)); ii++){
			fd[i][j] = V;
		}
	}

	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%d ", fd[i][j]);
		}
		printf("\n");
	}
	system("pause");

	return 0;
}

