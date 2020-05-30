/*The switch Statement

There can be multiple cases with unique labels.
The optional default case is executed when no other matches are made.
A break statement is needed in each case to branch to the end of the switch statement.
Without the break statement, program execution falls through to the next case statement. This can be useful when the same statement is needed for several cases. Consider the following switch statement:
switch (num) {
  case 1:
  case 2:
  case 3:
    printf("One, Two, or Three.\n");
    break;   
  case 4:
  case 5:
  case 6:
    printf("Four, Five, or Six.\n");
    break;
  default:
    printf("Greater than Six.\n");
}


Caution must be used when constructing the switch this way. Modifications later can lead to unexpected outcomes.

//*******************************

The || Operator

The logical OR operator || returns a true result when any one expression or both expressions are true.
For example:
if (n == 'x' || n == 'X')
  printf("Roman numeral value 10.\n"); 
Try It Yourself

Any number of expressions can be joined by && and ||.
For example:
if (n == 999 || (n > 0 && n <= 100))
  printf("Input valid.\n"); 
Try It Yourself

Parentheses are used for clarity even though && has higher precedence than || and will be evaluated first.

*****************************

The ! Operator

The logical NOT operator ! returns the reverse of its value.
NOT true returns false, and NOT false returns true.

For example:
if (!(n == 'x' || n == 'X'))
  printf("Roman numeral is not 10.\n"); 


In C, any non-zero value is considered true and a 0 is false. The logical NOT operator therefore, converts a true value to 0 and a false value to 1.
