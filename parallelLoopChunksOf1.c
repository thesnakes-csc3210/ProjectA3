#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(int argc, char** argv){
const int REPS = 16;


printf("\n");
if(argc > 1){
	omp_set_num_threads(atoi(argv[1]));
}

/*#pragma omp parallel for schedule(static, 1)
for (int i = 0; i< REPS; i++){
	int id = omp_get_thread_num();
	printf("Thread %d performed iteration %d\n", id, i);
}*/

#pragma omp parallel
{
	int id = omp_get_thread_num();
	int numThreads = omp_get_num_threads();
	for(int i = id; i<REPS; i += numThreads){
		printf("Thread %d performed iteration %d\n", id, i);
	}
}






printf("\n");
return 0;
}
