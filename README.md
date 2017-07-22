# merge_sort
  - C Language
  - in Linux x86_64 (Ubuntu 16.04 LTS)
 
  
# how to use
  - git clone https://github.com/zanywhale/merge_sort.git
  - cd merge_sort
  - gcc -o mergesort mergesort.c; gcc -o mergesort_improved mergesort_improved.c
  - time ./mergesort; time ./mergesort_improved
 
Example
```sh
zanywhale@ubuntu:~/git/merge_sort$ time ./mergesort; time ./mergesort_improved
real    0m0.021s
user    0m0.016s
sys     0m0.000s

real    0m0.019s
user    0m0.016s
sys     0m0.000s
```

# How did I improve it?
* I did not give arguments to functions, but I used global variables.
* 
