/*First take the count number of digits and store it in a number n. then take a second
loop and modulo it by 10 and store value in q and mutiply it 10 and store in a d and
limit it by n. */
 #include <iostream>
using namespace std;
int main () {
    //1234
    int i=0,j,m,s=0,q,a,c,n=1;
    cout << "Enter number: ";
    cin >> a;
    m=a;
    for(m,i,s=0;m>=0.1;n--) {

        q=m%10;
        s=(s*10)+q;
        m=m/10;
    }
        /*
        HERE I AM AIMING THAT FIRST WE GET 4 OUT OF 1234 AND ADD IT TO S AND S=4 NOW WE MAKE 1234 A 123
        RERUN THE LOOP AND 123 NOW Q=3 AND MUTLIPLY OUR S=4 WITH 10 AND GET 40+3=43 DAMN WE DIDNT NEED THE FIRST
        LOOP AT ALL.*/
    
    cout<< "Reversed number: " << s <<endl;
    return 0;
}