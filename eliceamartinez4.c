//Eddie Licea-Martinez
//CSC-341


#include <stdio.h>
#include <stdlib.h>

int x;
int y = 19;


int main(int argc)
{	
	int a;
	int b = 0;
	int *values;

	values = (int *)malloc(sizeof(int)*5);

	printf("The address of the argc is %p\n", &argc);
	printf("The address of the stack variable is %p\n", &a);
	printf("The address for heap variable is %p\n", values);
	printf("The address for uninitialized data is %p\n", &x);
	printf("The address for initialized data is %p\n", &y);

	free(values);
	
return EXIT_SUCCESS;


}
