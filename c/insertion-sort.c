/*
    insertion-sort.c

    Created by Iran Neto on 20/10/18.

    This code implements the insertion sort algorithm with positive numbers.
    It works by taking one element, analyzing the vector to define where insert it.
    To compile you must use g++ or gcc:
    
    gcc insertion-sort.c -o exec

    To run: ./exec vectorSize MAX_VALUE
    Example: ./insertion 10 100

    Extra: Use time command from Unix Operating Systems for efficiency measurements

    Best case: Vector already sorted - O(n)
    Worst case: Vector is reversed order = O(n²)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getParameters(int *N, int *MAX_VALUE, int argc, char* argv[]);

int main(int argc, char *argv[]){
    int* vector;
    int temp, i, j, N, MAX_VALUE, res;

    srand(time(NULL));
    
    res = getParameters(&N,&MAX_VALUE,argc,argv);
    if(res != 0){
        printf("Specify size and max_value... \n ./exec vectorSize MAX_VALUE");
        exit(1);
    }
    
    vector = (int*) malloc(N*sizeof(int));
    
    printf("[");
    for(i=0;i<N;i++){
        vector[i] = rand() % MAX_VALUE;
        printf(" %d ", vector[i]);
    }
    printf("]\n Sorting... \n");

    //insertion sort
    j = 0;
    for(i = 0; i < N-1; i++){
        j = i + 1;
        while(j > 0 && vector[j] < vector[j-1]){
                temp = vector[j];
                vector[j] = vector[j-1];
                vector[j-1] = temp;
                j--;
        }
    }

    //print it sorted
    printf("[");
    for(i=0;i<N;i++){ printf(" %d ", vector[i]); }
    printf("] \n");

    //free memory
    free(vector);
}

int getParameters(int* N, int* MAX_VALUE, int argc, char* argv[]){
    //get parameters
    if(argc == 3){
        *N = atoi(argv[1]);
        *MAX_VALUE = atoi(argv[2]);
        printf("Vector size: %d \n",*N);
        return 0;
    }
    return -1;
}