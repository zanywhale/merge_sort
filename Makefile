#Makefile
all: MergeSort	MergeSort_Improved

MergeSort: MergeSort.c
	gcc -o MergeSort MergeSort.c

MergeSort_Improved: MergeSort_Improved.c
	gcc -o MergeSort_Improved MergeSort_Improved.c

clean:
	rm -f *.o
	rm -f Mergesort MergeSort_Improved
