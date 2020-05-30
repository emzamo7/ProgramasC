/*Functions in C

Functions are central to C programming and are used to accomplish a program solution as a series of subtasks.
By now you know that every C program contains a main() function. And you're familiar with the printf() function.

You can also create your own functions.
A function:
• is a block of code that performs a specific task
• is reusable
• makes a program easier to test
• can be modified without changing the calling program

Even a simple program is easier to understand when main() is broken down into subtasks that are implemented with functions.
For example, it's clear that the goal of this program is to calculate the square of a number:

int main() {
  int x, result;
  
  x = 5;
  result = square(x);
  printf("%d squared is %d\n", x, result);
    
  return 0;
}

In order to use the square function, we need to declare it.<=====
Declarations usually appear above the main() function and take the form:
return_type function_name(parameters); <=================

The return_type is the type of value the function sends back to the calling statement. The function_name is followed by parentheses. Optional parameter names with type declarations are placed inside the parentheses.
A function is not required to return a value, but a return type must still be in the declaration. In this case, the keyword void is used.
For example, the display_message function declaration indicates the function does not return a value: void display_message();

*****************

Functions in C

When the parameter types and names are included in a declaration, the declaration is called a function prototype.

For example, the square function prototype appears above main():
#include <stdio.h>

/* declaration */
/*int square (int num); 

int main() {
  int x, result;
  
  x = 5;
  result = square(x);
  printf("%d squared is %d\n", x, result);
    
  return 0;
} 

Our square function returns an integer and takes one parameter of type int.

The last step is actually defining the function. Function definitions usually appear after the main() function.
The complete program below shows the square function declaration and definition:
#include <stdio.h>

/* declaration */
/*int square (int num); 

int main() {
  int x, result;
  
  x = 5;
  result = square(x);
  printf("%d squared is %d\n", x, result);
    
  return 0;
}

/* definition */
/*int square (int num) {
  int y;

  y = num * num;

  return(y);
} 
Try It Yourself

As you can see, the square function calculates and returns the square of its parameter.
A function can take multiple parameters - in this case they must be separated by commas.
The return statement is used to send a value back to the calling statement.
Tap Try It Yourself to play around with the code.*/

//*************************************

/*Function Parameters

A function's parameters are used to receive values required by the function. Values are passed to these parameters as arguments through the function call.
By default, arguments are passed by value, which means that a copy of data is given to the parameters of the called function. The actual variable isn't passed into the function, so it won't change.
Arguments passed to a function are matched to parameters by position. Therefore, the first argument is passed to the first parameter, the second to the second parameter, and so on.
The following program demonstrates parameters passed by value:
#include <stdio.h>

int sum_up (int x, int y); 

int main() {
  int x, y, result;
  
  x = 3;
  y = 12;
  result = sum_up(x, y);
  printf("%d + %d = %d", x, y, result);
    
  return 0;
}

int sum_up (int x, int y) { 
  x += y;
  return(x);
} 
Try It Yourself

The program output is: 3 + 12 = 15
The values of x and y were passed to sum_up. Note that even though the value of parameter x was changed in sum_up, the value of argument x in main() was not changed because only its value was passed into the parameter x.
The parameters in a function declaration are the formal parameters. The values passed to these parameters are the arguments, sometimes called the actual parameters.


//*****************************


/*Variable Scope

Variable scope refers to the visibility of variables within a program.
Variables declared in a function are local to that block of code and cannot be referred to outside the function.
Variables declared outside all functions are global to the entire program.
For example, constants declared with a #define at the top of a program are visible to the entire program.
The following program uses both local and global variables:
#include <stdio.h>

int global1 = 0; 

int main() {    
  int local1, local2;
  
  local1 = 5;
  local2 = 10;
  global1 = local1 + local2;
  printf("%d \n", global1);  /* 15 
    
  return 0;
} 
Try It Yourself

When arguments are passed to function parameters, the parameters act as local variables. Upon exiting a function, parameters and any local variables in the function are destroyed.
Use global variables with caution. They should be initialized before using to avoid unexpected results. And because they can be changed anywhere in a program, global variables can lead to hard to detect errors.*/



/****************************************************************************
Static Variables

Static variables have a local scope but are not destroyed when a function is exited. Therefore, a static variable retains its value for the life of the program and can be accessed every time the function is re-entered.
A static variable is initialized when declared and requires the prefix static.
The following program uses a static variable:
#include <stdio.h>

void say_hello();

int main() {    
  int i;

  for (i = 0; i < 5; i++) {
    say_hello();
  }
   
  return 0;
}

void say_hello() {
  static int num_calls = 1;

  printf("Hello number %d\n", num_calls);
  num_calls++;

} 
Try It Yourself

The program output is:
Hello number 1
Hello number 2
Hello number 3
Hello number 4
Hello number 5


/****************************


