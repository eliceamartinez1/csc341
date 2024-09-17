#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int sum; //this data is shared by the threads
void *runner(void *param); //threads call this function
			   
int main(int argc, char *argv[])
{
	pthread_t tid; //the thread identifier
	pthread_attr_t attr; //set of thread attributes
	
	pthread_attr_init(&attr);

	pthread_create(&tid, &attr, runner, argv[1]);

	pthread_join(tid,NULL);

	printf("Sum = %d\n", sum);
}


void *runner(void *param)
{
	int input;
	int i, upper = atoi(param);
	sum = 0;
	for (i = 1; i <= upper; i++)
	sum += i;
	printf("Enter your value:");
	scanf("%d", &input);
	pthread_exit(0);
}
