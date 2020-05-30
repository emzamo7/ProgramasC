The while Loop

/*The while statement is called a loop structure because it executes statements repeatedly while an expression is true, looping over and over again. It takes the form:
while (expression) {
  statements
}

The expression evaluates to either true or false, and statements can be a single statement or, more commonly, a code block enclosed by curly braces { }.
For example:
#include <stdio.h>

int main() {
  int count = 1;
  
  while (count < 8) {
    printf("Count = %d\n", count);
    count++;
  }
    
  return 0;
}


The code above will output the count variable 7 times.

The while loop evaluates a condition before the loop is entered, making it possible that the while statements never execute.
An infinite loop is one that continues indefinitely because the loop condition never evaluates to false. This may cause a run-time error.
Tap Try It Yourself to play around with the code and experiment with the while statement.

********************************

The do-while Loop

The do-while loop executes the loop statements before evaluating the expression to determine if the loop should be repeated.
It takes the form:
do {
  statements
} while (expression);

The expression evaluates to either true or false, and statements can be a single statement or a code block enclosed by curly braces { }.
For example:
#include <stdio.h>

int main() {
  int count = 1;
  
  do {
    printf("Count = %d\n", count);
    count++;
  } while (count < 8);
    
  return 0;
}


Note the semicolon after the while statement.
The do-while loop always executes at least once, even if the expression evaluates to false.

*********************************************

break and continue

The break statement was introduced for use in the switch statement. It is also useful for immediately exiting a loop.
For example, the following program uses a break to exit a while loop:
int num = 5;
  
while (num > 0) {
  if (num == 3)
    break;
  printf("%d\n", num);
  num--;
}


This program displays:
5
4
and then exits the loop.

When you want to remain in the loop, but skip ahead to the next iteration, you use the continue statement.
For example:
int num = 5;
  
while (num > 0) {
  num--;
  if (num == 3)
    continue;
      
  printf("%d\n", num);
}


The program output displays:
4
2
1
0
As you can see, the value 3 is skipped.

In the code above, if num was decremented after the continue statement an infinite loop would be created.
Although the break and continue statements can be convenient, they should not be a substitute for a better algorithm.


