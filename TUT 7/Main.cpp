#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //declare variables
    double min = 0, max = 0, average = 0, count = 0, grade;

    //displays
    cout << "Question 1:" << endl;

    //runs loop
    while (true) 
    {
        //asks for grade input
        cout << "\nEnter a grade between [0-100] and (-1 to exit): "; 
        cin >> grade;

        //if input is -1 breaks loop
        if (grade == -1)
        {
            break;
        }

        //if within [0,100]
        if (0 <= grade && grade <= 100) 
        {
            //if it runs for the first time
            if (count == 0) 
            {
                min = max = grade;
            }

            //add grade to average
            average = average + grade;

            //increment the count
            count++;

            //if grade < min then replace min with that grade
            if (grade < min)
            {
                min = grade;
            }
            //if grade > max then replace max with that grade
            if (grade > max)
            {
                max = grade;
            }

        }
        else 
        {
            //display
            cout << "Error: Invalid grade entered.\n" << endl;;
        }
    }

    //if their is more than 2 grades then average takes average
    if (count != 0)
    {
        //display values
        cout << "\nMin Score: " << min << "\nMax Score: " << max << "\nAverage Score: " << (average / count) << endl;
    }
    //else it prints the grade itself
    else
    {
        //display values
        cout << "\nMin Score: " << min << "\nMax Score: " << max << "\nAverage Score: " << average << endl;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //declare variables
    int input;
    bool isPrime;

    //displays
    cout << "\n\nQuestion 2:" << endl;

    //check for negative numbers
    do
    {
        //gets input
        cout << "\nEnter a positive number: ";
        cin >> input;

    } while (input <= 1);

    //display 
    cout << "Prime numbers between 1 and " << input << " are: ";

    for (int i = 2; i <= input; i++) 
    {
        //sets as true
        isPrime = true;

        // checking if input is a prime
        for (int k = 2; k < i; k++)
        {
            //if its remainder is 0 it means it is not a prime number
            if ((i % k) == 0)
            {
                //sets as false
                isPrime = false;
            }
        }

        // if i is prime then print the number
        if (isPrime) 
        {
            //printing value of i
            cout << i << " ";
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //displays
    cout << "\n\nQuestion 3:" << endl;

    //declare variables
    double toonie, loonie, quarter, dime, nickel, penny, num, decValue;
    int intNum;
    
    //check for negative numbers
    do
    {
        //ask for input
        cout << "Please enter a positive value: ";
        cin >> num;

    } while (num < 0);

    //adds because double saves as 0.5999 instead of 0.60
    num = num + 0.001;

    //sets as int
    intNum = (int)num;
    //checks decimals
    decValue = num - intNum;
    //checks for amount of toonies
    toonie = intNum / 2;
    //removes the amount of toonies
    intNum %= 2;
    //sets loonie as the number
    loonie = intNum;

    //multiply decimal value by 100
    intNum = decValue * 100;

    //divide to find quarters
    quarter = intNum / 25;
    //removes the amount of quarters
    intNum %= 25;

    //divide to find dimes
    dime = intNum / 10;
    //removes the amount of dimes
    intNum %= 10;

    //divide to find nickels
    nickel = intNum / 5;
    //removes the amount of nickels
    intNum %= 5;

    //runs if toonie is not 0
    if (toonie != 0)
    {
        //displays
        cout << toonie << " Toonies" << endl;
    }
    if (loonie != 0)
    {
        //displays
        cout << loonie << " Loonies" << endl;
    }
    if (quarter != 0)
    {
        //displays
        cout << quarter << " Quarters" << endl;
    }
    if (dime != 0)
    {
        //displays
        cout << dime << " Dimes" << endl;
    }
    if (nickel != 0)
    {
        //displays
        cout << nickel << " Nickels" << endl;
    }
    if (intNum != 0)
    {
        //displays
        cout << intNum << " Pennies" << endl;
    }

    //stops displaying files
    system("pause");
}