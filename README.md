I started following along with the cs50 2021 course and adapted to 
https://cs50.harvard.edu/x/2021/weeks/1/


https://dev.to/codelyf/c-programming-cheat-sheet-3h4d
https://www.geeksforgeeks.org/basic-input-and-output-in-c/

complile c files:

gcc -Wall hello.c -o hello

gcc -Wall addition.c -o addition

-Wall & -o options
https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/

run the executables:
./hello
./addition


tests:
install check
https://libcheck.github.io/check/web/install.html#osxhomebrew
https://github.com/libcheck/check

errors experienced:
you can not compare strings in C with ==
https://cs50.stackexchange.com/questions/34964/error-result-of-comparison-against-a-string-literal-is-unspecified-use-strncmp