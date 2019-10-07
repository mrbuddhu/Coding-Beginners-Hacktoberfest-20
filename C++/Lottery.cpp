#include <iostream>
#include "ctime"
#include "cstdlib"
using namespace std;
int main() {
    srand(time(0));
    int lottery = rand()%100;
    cout<< "Enter ur lottery Number two digits"<<endl;
    int ans;
    cin >>  ans;
    // Get digits from lottery
    int lotteryDigit1 = lottery / 10;
    int lotteryDigit2 = lottery % 10;
// Get digits from guess
    int guessDigit1 = ans / 10;
    int guessDigit2 = ans % 10;
    if (ans == lottery)
        cout << "Exact match: you win $10,000" << endl;
    else if (guessDigit2 == lotteryDigit1
             && guessDigit1 == lotteryDigit2)
        cout << "Match all digits: you win $3,000" << endl;
    else if (guessDigit1 == lotteryDigit1
             || guessDigit1 == lotteryDigit2
             || guessDigit2 == lotteryDigit1
             || guessDigit2 == lotteryDigit2)
        cout << "Match one digit: you win $1,000" << endl;
    else
        cout << "Sorry, no match " << lottery <<endl;

    return 0;
}