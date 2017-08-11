# merge_sort
  - C Language
  - in Linux x86_64 (Ubuntu 16.04 LTS)
  - Number of Processor : 4 // Memory 4GB (VMware)
  - Compile with Makefile
  
# how to use
  - git clone https://github.com/zanywhale/merge_sort.git
  - cd merge_sort
  - make
  - ./MergeSort
  - ./MergeSort_Improved
 
Example 1)
```sh
zanywhale@ubuntu:~/git/merge_sort$ ./MergeSort
Usage : ./MergeSort [NUMBER]
Set number 10000000!
=== Sort Start ===
Date      : 2017.8.11
File name : ./MergeSort
Algorithm : Merge Sort
Entry     : 10000000
Time      : 2.490225sec
=== Sort Finished ===
zanywhale@ubuntu:~/git/merge_sort$ 
zanywhale@ubuntu:~/git/merge_sort$ ./MergeSort_Improved
Usage : ./MergeSort_Improved [NUMBER]
Set number 10000000!
=== Sort Start ===
Date      : 2017.8.11
File name : ./MergeSort_Improved
Algorithm : Merge Sort
Entry     : 10000000
Time      : 2.140834sec
=== Sort Finished ===

```

Example 2)
```sh
zanywhale@ubuntu:~/git/merge_sort$ ./MergeSort 90000000
=== Sort Start ===
Date      : 2017.8.11
File name : ./MergeSort
Algorithm : Merge Sort
Entry     : 90000000
Time      : 25.459558sec
=== Sort Finished ===
zanywhale@ubuntu:~/git/merge_sort$ 
zanywhale@ubuntu:~/git/merge_sort$ ./MergeSort_Improved 90000000
=== Sort Start ===
Date      : 2017.8.11
File name : ./MergeSort_Improved
Algorithm : Merge Sort
Entry     : 90000000
Time      : 21.794086sec
=== Sort Finished ===

```

# How did I improve it?
* Did not give arguments to functions, but it used global variables.
