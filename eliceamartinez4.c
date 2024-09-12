//Eddie Licea-Martinez
//CSC-341


#include <stdio.h>
#include <stdlib.h>

void stack()
{
	int a = 20;
	printf("The address of the stack variable is %p\n", &a);
}


int main(int argc)
{	
	int x;
	int y = 4;
	int *pointer1 = &argc;
	int *values = (int *)malloc(sizeof(int)*5);
	*values = 75;	
	
	printf("The address of the argc is %p\n", &pointer1);
	stack();
	printf("The address for heap variable is %p\n", &values);
	printf("The address for uninitialized data is %p\n", &x);
	printf("The address for initialized data is %p\n", &y);

	free(values);
	
return EXIT_SUCCESS;


}
