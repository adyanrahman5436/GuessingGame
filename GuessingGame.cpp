#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tries, guess, num;
    srand(time(NULL));
    num = (rand() % 101);
    
    
    cout << "This is a number guessing game!";
    
   do
    {
        cout << "\nPick a number 0 through 100!: ";
        cin >> guess;
        tries++;
        
        if (guess < num)
        {
            cout << "\nYour guess is too Low.";
        }
        else if (guess > num)
        {
            cout << "\nYour guess is too high.";
        }
        else
        {
            cout << "\nCorrect! That is the number!";
            cout << "It took you " << tries << " tries.";
        }
        
    }
    while (guess != num);
    
    return 0;
}
