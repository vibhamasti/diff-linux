# README

This is a program to mimic the working of the Unix command `diff` that compares files line-by-line (implementation in C)

Refer <http://man7.org/linux/man-pages/man1/diff.1.html> for more

## Note

- It only takes 2 arguments as of now (2 file names)

- It only does one change at a time (cannot do multiple lines)

- Max file size: 128 lines

- Max chars per line: 128 chars

## Executing the program

### To make the makefile, run

`make -f mymake.mk`

### To execute the programme, run

`./diff <file1_name> <file2_name>`

For example,

`./diff hi.txt hello.txt`

### Compare it to the actual working of "diff" command by running

`diff <file1_name> <file2_name>`
