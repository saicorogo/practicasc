#include <stdio.h>
#define begin main(){
#define integer int
#define IF if
//#define [ (
//#define ] )
#define THEN {
#define ELSE }else{
#define ENDIF }
#define END }
#define print printf



begin 
integer x=10;
IF (x>=10)
	THEN
	 print("tengo diez\n");
ELSE
	print("reprobare\n");
ENDIF
END


