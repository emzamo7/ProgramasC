/*
 * Definition of the Abstract Data Type (ADT) Boolean
 */

#ifndef BOOLEAN_H_
#define BOOLEAN_H_

typedef enum {false, true} Boolean;
Boolean _init(Boolean b);
Boolean _not(Boolean b);
Boolean _and(Boolean a, Boolean b);
Boolean _or(Boolean a, Boolean b);
Boolean _implication(Boolean p, Boolean q);
Boolean _iff(Boolean p, Boolean q);
#endif
