//Assignment: Archery competition (Nested loops)
//Name: Yustina Bouls 
//Date: 01-29-2020
//Purpose: Practice lab to use nested loops for OOP 2200

#include <iostream> //Basic input and output services for C++
#include <iomanip>  //Defines manipulator functions 

using namespace std;
int main()
{
    const int NumOfArches = 3; //Constant that defines the number of archers
    const int NumOfEnds = 4;    //Constant that defines the number of ends
    const int Minimum = 1;      //Constant that defines the minimum number of scores
    const int Maximum = 60;     //Constant that defines the maximum number of scores
    int Total = 0;              //An int variable that stores the total for each archer
    int Sum = 0;                //An int variable that stores the total sum of all archers
    int Score = 0;              //An int variable that stores the score of each archer
    double Average = 0.0;       //A double variable that stores the average of all players

    cout << "\t\t\tArchery Scores Calculator" << endl;
    cout << "\t\t\t________________________________" << endl;
    for (int archer = 1; archer <= NumOfArches; archer++) //For loop that controls the number of archers to 3
    {
        Total = 0;

        for (int ends = 1; ends <= NumOfEnds; ends++) //For loop that controls the number of ends
        {
            cout << "\nEnter the score for archer " << archer << " In end number " << ends << ": ";

            while (!(cin >> Score) || Score > Maximum || Score < Minimum) //While loop that validates the data that is being input into (cin)
            {
                cout << "\n\nPlease enter only numeric values between " << Minimum << " and " << Maximum << endl;
                cout << "\nEnter the score for archer " << archer << " In end number " << ends << ": ";
                cin.clear();
                cin.ignore(123, '\n');
            }

            Total += Score; //Calculates and stores the total for each archer
            Sum += Total;   //Stores the sum of the total for all archers
        }

        cout << "\n\nThe total for archer " << archer << " is: " << Total << endl
             << endl;
              Average = Sum / (NumOfArches * NumOfEnds); //Calculates the total average
    }

    cout << "\nThe average of all ends is: " << fixed << setprecision(1) << Average << endl; //Displays the total average

    cout << endl << endl;
    return 0;
}
