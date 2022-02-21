

{code}
klotz@core:~/wip/scavox-crt/crtpi$ gcc piqpr8.c -lm -o piqrp8
klotz@core:~/wip/scavox-crt/crtpi$ ./piqrp8 
 position = 1000000
 fraction = 0.423429797567895 
 hex digits =  6C65E52CB4
klotz@core:~/wip/scavox-crt/crtpi$ gcc piqpr8.c -lm -o piqrp8
klotz@core:~/wip/scavox-crt/crtpi$ ./piqrp8 
 position = 0
 fraction = 0.141592653589793 
 hex digits =  243F6A8885
klotz@core:~/wip/scavox-crt/crtpi$
{code}

{code}
klotz@core:~/wip/scavox-crt/crtpi$ calc
C-style arbitrary precision calculator (version 2.12.7.2)
Calc is open software. For license details type:  help copyright
[Type "exit" to exit, or "help" for help.]

; 3 + 2 / 16
	3.125
; 3 + 2 / 16 + 4 / 16/16 
	3.140625
; 3 + 2 / 16 + 4 / 16/16 + 3 / 16/16/16
	3.141357421875
; 3 + 2 / 16 + 4 / 16/16 + 3 / 16/16/16 + 15 / 16^4
	3.1415863037109375
; 3 + 2 / 16^1 + 4 / 16^2 + 3 / 16^3 + 15 / 16^4
	3.1415863037109375
; 3 + 2 / 16^1 + 4 / 16^2 + 3 / 16^3 + 15 / 16^4 + 6/16^5 +10/16^6 +8/16^7 +8/16^8 +8/16^9 +5/16^10
	~3.14159265358921402367
; pi()
	 3.14159265358979323846
;
{code}

# Hex Pi
https://oeis.org/A062964/constant
{code}
3.24316188851308131319812103707344140938222991311008211198114161894528211638101377115466113419
{code}

