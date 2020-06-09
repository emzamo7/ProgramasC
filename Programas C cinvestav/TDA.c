/*Implementation of operations for the Abstract Data Type (ADT)
*/

#include "Boolean.h"
int main(){

Boolean _init(Boolean b){
		return b;
	
}

Boolean _not(Boolean b){
		return !b;
}
Boolean _and(Boolean a, Boolean b){
	return a&&b;	
}
Boolean _or(Boolean a, Boolean b){
	return b||a;
}
Boolean _implication(Boolean p, Boolean q){ //doble implicacion es <==> Bicondicional
	if(p==true&&q==false)
		return false;
	else
		return true;
}
Boolean _iff(Boolean p, Boolean q){
	if(p==q)
		return true;
		else
		return false;
	
}
}
