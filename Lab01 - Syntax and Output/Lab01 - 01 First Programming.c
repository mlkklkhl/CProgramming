#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}

/*
Example explained
Line 1: #include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 4).
        Header files add functionality to C programs.
Line 2: A blank line. C ignores white space. But we use it to make the code more readable.
Line 3: Another thing that always appear in a C program is main(). This is called a function.
        Any code inside its curly brackets {} will be executed.
Line 4: printf() is a function used to output/print text to the screen. In our example, it will output "Hello World!".
Line 5: return 0 ends the main() function (end the C program successfully).
Line 6: Do not forget to add the closing curly bracket } to actually end the main function.
*/

/*
Note:
- Every C statement ends with a semicolon ;
- The body of int main() could also been written as: int main(){printf("Hello World!");return 0;}
- The compiler ignores white spaces. However, multiple lines makes the code more readable.
- The statements are executed, one by one, in the same order as they are written.
*/
