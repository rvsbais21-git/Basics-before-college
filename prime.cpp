/*
FIRST WE TAKE THE NUMBER IN A INT 'N' AND RUN A LOOP IN WHICH WE USE A 'I' WHERE I++ AND MODULO N BY EVERY I
AND FOR I WHERE MODULO IS 0 AND THEN IF STATEMENT AND AND IT TO A 'S' AND OUT SIDE CODE CHECK IF S IS GREATER
THAN N+1 IF YES THEN NOT PRIME, IF NO THEN PRIME. STORE MODULO ZERO VALUES IN 'Q' AND ADD IT TO S
*/

#include <iostream>
using namespace std;
int main (){
   int q,n,i=1,s=0;
    cout<< "Enter the number: ";
   cin>> n ;
   while (n>1) {
    
    if ( n%i == 0) {
        i++;
    }
    
   }
   if (i==2) {
    cout<< "Prime number.";
   } else {
    cout<< "Not a prime number.";
   }
   
    return 0;
}