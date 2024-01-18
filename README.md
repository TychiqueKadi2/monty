Monty 0.98 is a scripting language that is compiled into Monty byte codes, similar to Python. It uses a unique stack with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files have the extension .m. There is not more than one instruction per line, and there can be any number of spaces before or after the opcode and its argument. Files can contain blank lines, and any additional text after the opcode or its required argument is not taken into account.

Here is an example of a Monty byte code file:

push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$

The above code pushes the numbers 0 through 6 onto the stack and then prints them in order. The pall instruction prints all the values on the stack, starting from the top.

To compile Monty byte code files, use the following command:

gcc -Wall -Werror -Wextra -pedantic *.c -o monty

This command compiles all the .c files in the current directory and creates an executable file named monty.
