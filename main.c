#include <stdio.h>
int main(void)
{
  int matrix[3][3] = {1,2,3,4,5,6,7,8,9 };
  int r,c,transpos[3][3];
  for (r=0; r<3; r++)
	 for (c=0;c<3;c++)
		transpos[r][c]=matrix[c][r];
  printf("The transposed matrix is :\n");
  for(r=0; r<3; r++){
	 for(c=0; c<3; c++)
		printf("%5d",transpos[r][c]);
	 printf("\n");
  }
  return 0;
}
