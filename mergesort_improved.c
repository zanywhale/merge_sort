#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define COUNT 100000
#define ZERO 0
void Merge(int low, int mid, int high);
void MergeSort(int low, int high);
int initList[COUNT] = { 0, };
int sortedList[COUNT] = { 0, };

int main(int argc, char *argv[])
{
    int i = 0;
    for(i = 0; i < COUNT; i++)
        initList[i] = rand()%200000;

    MergeSort(ZERO, COUNT-1);

    //for(i = 0; i < COUNT; i++)
    //    printf("%d ", sortedList[i]);
    //printf("\n");
    return 0;
}

void MergeSort(int low, int high)
{
    int mid = 0;
    if(low < high){
        mid = (low + high) / 2;
        MergeSort(low, mid); // left
        MergeSort(mid+1, high); // right
        Merge(low, mid, high);
    }
}

void Merge(int low, int mid, int high)
{
    int block1 = low;
    int block2 = mid+1;
    int i = low;

    while(block1 <= mid && block2 <= high) {
        if(initList[block1] <= initList[block2])
            sortedList[i] = initList[block1++];
        else
            sortedList[i] = initList[block2++];
        i++;
    }
    
    while(block1 <= mid)    
        sortedList[i++] = initList[block1++];

    while(block2 <= high)   
        sortedList[i++] = initList[block2++];

    for(i = low; i <= high; i++)
        initList[i] = sortedList[i];
}

