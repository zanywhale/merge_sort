#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <limits.h>
#define ZERO 0
void Merge(int *initlist, int *sortedlist, int low, int mid, int high);
void MergeSort(int *initlist, int *sortedlist, int low, int high);
void Now_date();

int main(int argc, char *argv[])
{
    int check = 0;
    int i = 0;
    int number = 0;
    int *initList = 0;
    int *sortedList = 0;
    float gap = 0.0;
    time_t startTime = 0, endTime = 0;

    if( argc != 2){
        printf("\033[1;32mUsage : %s [NUMBER]\033[0m\n",argv[0]);
        printf("Set number 10000000!\n");
        number = 10000000;
    }
    else if( !(atoi(argv[1]) >= 0) && !(atoi(argv[1]) <= 100000000) ){
        printf("You have to choice another number! in 100000000\n");
        exit(1);
    }
    else{
        number = atoi(argv[1]);
    }

    // Set values
    initList = (int *)malloc(sizeof(int)*number);
    sortedList  = (int *)malloc(sizeof(int)*number);
    for(i = 0; i < number; i++)
        initList[i] = rand()%number;

    // start time
    startTime = clock();

    // start algorithm
    MergeSort(initList, sortedList, ZERO, number-1);
    // end algorithm

    endTime = clock(); // end time
    gap = (float)(endTime-startTime)/(CLOCKS_PER_SEC); // calculate time


    printf("\033[1;32m=== Sort Start ===\033[0m\n");
    Now_date();
    printf("File name : %s\n",argv[0]);
    printf("Algorithm : Merge Sort\n");
    printf("Entry     : %d\n",number);
    printf("Time      : %fsec\n",gap);
    printf("\033[1;31m=== Sort Finished ===\033[0m\n");

    return 0;
}

void MergeSort(int *initlist, int *sortedlist, int low, int high)
{
    int mid = 0;
    if(low < high){
        mid = (low + high) / 2;
        MergeSort(initlist, sortedlist, low, mid); // left
        MergeSort(initlist, sortedlist, mid+1, high); // right
        Merge(initlist, sortedlist, low, mid, high);
    }
}

void Merge(int *initlist, int *sortedlist, int low, int mid, int high)
{
    int block1 = low;
    int block2 = mid+1;
    int i = 0;

    for(i = low; block1 <= mid && block2 <= high; i++) {
        if(initlist[block1] <= initlist[block2])
            sortedlist[i] = initlist[block1++];
        else
            sortedlist[i] = initlist[block2++];
    }
    
    while(block1 <= mid)    
        sortedlist[i++] = initlist[block1++];

    while(block2 <= high)   
        sortedlist[i++] = initlist[block2++];

    for(i = low; i <= high; i++)
        initlist[i] = sortedlist[i];
}

void Now_date()
{
    struct tm *t;
    time_t timer;

    timer = time(NULL);
    t = localtime(&timer);
    printf("Date      : %d.%d.%d\n",t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
}
