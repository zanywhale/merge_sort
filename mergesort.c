#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define COUNT 10
#define ZERO 0
void Merge(int *initlist, int *sortedlist, int low, int mid, int high);
void MergeSort(int *initlist, int *sortedlist, int low, int high);

int main(int argc, char *argv[])
{
    int i = 0;
    int initList[COUNT] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 0 };
    int resultList[COUNT] = { 0, };

    for(i = 0; i < COUNT; i++)
        printf("%d ", initList[i]);
    printf("\n");

    MergeSort(initList, resultList, ZERO, COUNT-1);

    for(i = 0; i < COUNT; i++)
        printf("%d ", resultList[i]);
    printf("\n");
    return 0;
}

void MergeSort(int *initlist, int *sortedlist, int low, int high)
{
    int mid = 0;
    if(low < high) {
        mid = (low + high) / 2;
        MergeSort(initlist, sortedlist, low, mid); // left
        MergeSort(initlist, sortedlist, mid+1, high); // right
        Merge(initlist, sortedlist, low, mid, high);
    }
}

void Merge(int *initlist, int *sortedlist, int low, int mid, int high)
{
    int l1 = low
    int l2 = mid+1
    int i = 0;

    for(i = low; l1 <= mid && l2 <= high; i++) {
        if(initlist[l1] <= initlist[l2])
            sortedlist[i] = initlist[l1++];
        else
            sortedlist[i] = initlist[l2++];
    }
    
    while(l1 <= mid)    
        sortedlist[i++] = initlist[l1++];

    while(l2 <= high)   
        sortedlist[i++] = initlist[l2++];

    for(i = low; i <= high; i++)
        initlist[i] = sortedlist[i];
}

