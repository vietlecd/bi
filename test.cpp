/******************************************************************************
 * Support Functions: these functions below are optional. If you want your code
					  to be clearer, you can implement them. However if you
					  dont know how to use funtion in programming, dont worry, 
					  you dont have to implement them, and you just add a comment 
					  in each of them.
*******************************************************************************/
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int move(string moves)
{
    /*TODO: add your code here*/
    int x=0;
    int y=0; 
    int res = 0, fl = 0;
    for (int i=0; i<moves.size(); i++) {
        if(moves[i] != 'U' && moves[i] != 'D' && moves[i] != 'L' && moves[i] != 'R' && i < (int)moves.size()-1) res = res*10 + (int)moves[i]-'0';
        else {
            if(fl == 1) x += res;
            if(fl == 2) x -= res;
            if(fl == 3) y += res;
            if(fl == 4) y -= res;
            if (moves[i]=='U') fl=1;
            if (moves[i]=='D') fl=2;
            if (moves[i]=='R') fl=3;
            if (moves[i]=='L') fl=4;
            res = 0;
        }
    }
    return round(sqrt(double(x*x)+double(y*y)));
}

bool isPrime(int n)
{
    /*TODO: add your code here*/
    for (int i=2; i<sqrt(n); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}

bool isSquared(int n)
{
    /*TODO: add your code here*/
    int a=sqrt(n);
    if (a*a==n) return 1;
    else return 0;
}

int main()
{
    string moves;
    int distance;
    bool primality, squared;

    /// =======================================================
    /*
        The following code initializes variable `moves`
    */
    /// BEGIN   TESTCASE
    cin >> moves;
    /// END     TESTCASE

    /*---------------------------------
        * Calculate the distance
        * Remember to assign calculated value to variable `distance`
	*/
    /*TODO: add your code here*/
    distance=move(moves);
    

    /*---------------------------------*/
    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
        << distance << '\n';


    /*---------------------------------
        * Check if distance is prime
        * Remember to assign appropriate value to variable `primality`
	*/
    /*TODO: add your code here*/
     primality=isPrime(distance); 
    

    /*---------------------------------*/

    /*---------------------------------
        * Check if distance is squared
        * Remember to assign appropriate value to variable `squared`
	*/
    /*TODO: add your code here*/
    squared=isSquared(distance);
    

    /*---------------------------------*/

    if (primality) {
        cout << "So " << distance << " la so nguyen to\n";
    } 
    if (squared) {
        cout << "So " << distance << " la so chinh phuong\n";
    }

    return 0;
}