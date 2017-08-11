#Makefile
all: mergesort	mergesort_improved

mergesort: mergesort.c
	gcc -o mergesort mergesort.c

mergesort_improved: mergesort_improved.c
	gcc -o mergesort_improved mergesort_improved.c

clean:
	rm -f *.o
	rm -f mergesort mergesort_improved
