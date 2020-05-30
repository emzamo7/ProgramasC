/*Conditionals

Conditionals are used to perform different computations or actions depending on whether a condition evaluates to true or false.

The if Statement
The if statement is called a conditional control structure because it executes statements when an expression is true. For this reason, the if is also 
known as a decision structure. It takes the form:
if (expression)
  statements

The expression evaluates to either true or false, and statements can be a single statement or a code block enclosed by curly braces { }.
For example:*/
/*#include <stdio.h>

int main() {
  int score = 89;
  
  if (score > 75)
    printf("You passed.\n");
    
  return 0;
}

/*An expression that evaluates to a non-zero value is considered true.
For example:
int in_stock = 20;
if (in_stock)
  printf("Order received.\n"); */
  
/*Conditional Expressions

Another way to form an if-else statement is by using the ?: operator in a conditional expression. The ?: operator can have only one statement 
associated with the if and the else.
For example:*/
/*#include <stdio.h>

int main() {
  int y;
  int x = 3;

  y = (x >= 5) ?  5 : x;

/* This is equivalent to:
  if (x >= 5)
    y = 5;
  else
    y = x;
*/

 /* return 0;
}*/
//****************************************************************
/*Nested if Statements

An if statement can include another if statement to form a nested statement. Nesting an if allows a decision to be based on further requirements.
Consider the following statement:
if (profit > 1000)
  if (clients > 15)
    bonus = 100;
  else
    bonus = 25; 


Appropriately indenting nested statements will help clarify the meaning to a reader. However, be sure to understand that an else clause is 
associated with the closest if unless curly braces { } are used to change the association.
For example:
if (profit > 1000) {
  if (clients > 15)
    bonus = 100;
}
else
  bonus = 25;*/
  
  //*************************************************
  
/*The if-else if Statement

When a decision among three or more actions is needed, the if-else if statement can be used.
There can be multiple else if clauses and the last else clause is optional.
For example:
int score = 89;
  
if (score >= 90)
  printf("%s", "Top 10%\n");
else if (score >= 80)
  printf("%s", "Top 20%\n");
else if (score > 75)
  printf("%s", "You passed.\n");
else
  printf("%s", "You did not pass.\n"); 


Carefully consider the logic involved when developing an if-else if statement. Program flow branches to the statements associated with the first 
true expression and none of the remaining expressions will be tested.
Although indents won't affect the compiled code, the logic of the if-else if will be easier to understand by a reader when the else clauses are aligned.  
  

