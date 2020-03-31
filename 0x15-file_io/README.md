# **0x15. C - File I/O**

## **File Descriptor**
n Unix and related computer operating systems, a file descriptor (FD, less frequently fildes) is an abstract indicator (handle) used to access a file or other input/output resource, such as a pipe or network socket. File descriptors form part of the POSIX application programming interface. A file descriptor is a non-negative integer, generally represented in the C programming language as the type int (negative values being reserved to indicate "no value" or an error condition).


|Integer value	|   Name	 |   <unistd.h> symbolic constant[1]	|  <stdio.h> file stream[2] |
|----------|----------|--------|------------|
|0	|Standard input	   | STDIN_FILENO	|stdin |
|1	|Standard output	|    STDOUT_FILENO	|stdout|
|2	|Standard error	 |   STDERR_FILENO	|stderr|


## **Objetives**

-Look for the right source of information online
-How to create, open, close, read and write files
-What are file descriptors
-What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
-How to use the I/O system calls open, close, read and write
-What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
-What are file permissions, and how to set them when creating a file with the open system call
-What is a system call
-What is the difference between a function and a system call

### TASK 0
Write a function that reads a text file and prints it to the POSIX standard output.
### TASK 1
Create a function that creates a file.
### TASK 2
Write a function that appends text at the end of a file.
### TASK 3
Write a program that copies the content of a file to another file.

And 1 advanced task
