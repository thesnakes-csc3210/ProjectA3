#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(int argc, char** argv){
const int REPS = 16;

printf("\n");
if(argc > 1){
	omp_set_num_threads(atoi(argv[1]));
	}

#pragma omp parallel for
for(int i = 0; i < REPS; i++){
	int id = omp_get_thread_num();
	printf("thread %d performed iteration %d\n", id, i);
	}
printf("\n");
return 0;
}
