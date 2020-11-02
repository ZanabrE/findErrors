/*This programs will have a Pseudocode Algorithm
and errors that needs to be fix.
Ernesto L Zanabria 09/19/2020. */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void average_27()
{
    /*Write a pseudocode algorithm for a program that asks the user to enter
    a golfer's score for three games of golf, and then displays the average
    of the three scores.
    After you write the pseudocode algorithm, convert it to a complete C++ program.

    Pseudocode Algorithm.
    Always use prompt to interact with the user.
    Variables data type that determines the kind of data is being stored.
    Get the score for golfer 1.
    Get the score for golfer 2.
    Get the score for golfer 3.
    Calculate the average by adding the three scores and dividing the sum by 3.
    Display the average.
    */

    /*This program will calculate the average of three golfers score.*/
    //Variables date type.
    double golfer1, golfer2, golfer3;
    double average;

    //Displaying header.
    cout << "---------------------------------------------\n";
    cout << "      The Average of the three scores\n";
    cout << "---------------------------------------------\n";
    //Get the score for the first golfer.
    cout << "Golfer number 1 score is: ";
    cin >> golfer1;

    //Get the score for the second golfer.
    cout << "Golfer number 2 score is: ";
    cin >> golfer2;

    //Get the score for the third golfer.
    cout << "Golfer number 3 score is: ";
    cin >> golfer3;
    cout << "---------------------------------------------\n";
    //Calculate the average.
    average = (golfer1 + golfer2 + golfer3) / 3, 0;

    //Display the average of the score of the three golfers.
    cout << "The average score of the three golfers is: " << average << endl;
    cout << "\a";

}

void error_28()
{
    /*Find the Errors - PG 141
    Algorithm - 28 (Error).*/

    /*
    #include <iostream> --> preprocessor directive is missing.

    double number1, number2, sum; --> sum needs to be separate to hold the sum of both numbers.
                                    --> data type should .

    Cout << "Enter a number: "; --> as a rule in C++ cout cannot be capital.
    Cin << number1; --> as a rule in C++, cin cannot be capital and the operator is Mistakenly used with cin.

    Cout << "Enter another number: ";
    Cin << number2; --> as a rule in C++, cin cannot be capitl and the operator is Mistakenly used with cin.

    number1 + number2 = sum; --> there is not variable assigned to hold the calculations.

    Cout "The sum of two numbers is: " << sum --> It's missing the Stream Insertion Operator (<<) on cout,
    and the Stream Manipulator endl it needs to have a semicolon at the end of the statement.*/

    /*Algorithm - 28 (Fixed).*/
    //Variables data type.
    double number1, number2, sum;

    //Displaying the header.
    cout << "---------------------------------------------\n"; //Using Escape Sequence (\n) to go to a new line instead of Stream Manipulator (endl).
    cout << "        The sum of the two numbers\n";
    cout << "---------------------------------------------\n";

    //Promtp to interact with the user.
    //Get the first number.
    cout << "Enter a number: ";
    cin >> number1;

    //Get the second number.
    cout << "Enter another number: ";
    cin >> number2;
    cout << "---------------------------------------------\n";
    /*Calculations - as you can see C++ has purpose, input, process, and output.
    If calculations are placed after variables you will just add integeres values
    Examples on PG - 44, Table 2-6  */
    sum = number1 + number2;

    //Display the sum of both numbers.
    cout << "The sum of the two numbers are: " << sum << endl; //Stream Manipulator (endl) with semicolon.
    cout << "\a";
}

void error_29()
{
    /*Algorithm - 29 (Error).*/
    /*int number1, number2;
    float quotient;

    cout << "Enter two numbers and I will divide\n";
    cout << "the first by the second for you. \n";
    cin >> number1, number2; --> to enter multiple values the Stream Extraction Operator (>>) is missing.

    quotient = float<static_cast>(number1) / number2; --> Type Cast Expression should be: static_cast<DataType>(Value).

    cout << quotient --> It is missing the Stream Insertion Operator, with the statement for display
                     --> and the Stream Manipulator "endl;" with semicolon to end the statement. */

    //Algorithm - 29 (Fixed).
    /*The division of two numbers.*/
    //Variables data type.
    int number1, number2;
    float quotient;

    //Displaying header.
    cout << "---------------------------------------------\n";
    cout << "       The Division of two numbers.\n";
    cout << "---------------------------------------------\n";

    //Get the numbers for dvivision.
    cout << "Enter two numbers and I will divide\n"
         << "the first by the second for you: \n";
    cin >> number1 >> number2;
    cout << "---------------------------------------------\n";

    //Calculations
    quotient = static_cast<float>(number1) / number2; //Number1 is integer the value is converted to a float before the division takes place.
                                                      //without the Type Cast Expression integer division would perfom with incorrect answer.

    //Display the result of two numbers divided.
    cout << "The division of two numbers are: " << quotient << endl;
    cout << "\a";
}

void error_30()
{
    /*Algorithm - 30 (Error)*/
    /*
    #include <iostream>; --> no semicolon after brackets of the header file.

    const int number1, number2, product; --> variable constant (const) it's content is read-only and 
                                               cannot be change so shoudn't be declare.
                                           --> variable constant needs to be Initialized.

    cout << "Enter two number and I will multiply\n";
    cout << "them for you. \n";
    cin >> number1 >> number2;
    cout << product --> product it's missing the semicolon or you can add the Stream Manipulator (endl) with
                        semicolon since is the end of the code.*/
    
    //Algorithm - 30 (Fixed).
    //Variable data type.
    int number1, number2, product;

    //Displaying header.
    cout << "---------------------------------------------\n";
    cout << "The Multiplication of two numbers.\n";
    cout << "---------------------------------------------\n";

    //Get the two numbers for Multiplication.
    cout << "Enter two numbers and I will multiply\n";
    cout << "them for you. \n";
    cin >> number1 >> number2;
    cout << "---------------------------------------------\n";

    //Calculations
    product = number1 * number2;

    //Display the two numbers multiplied.
    cout << "The multiplication of two numbers are: " << product << endl;
    cout << "\a";

}

void error_31()
{
    //Algorithm - 31 (Error).
    /*
    #include <iostream>; --> no semicolon after brackets of header file.
    main() --> main function doesn't have the int word.

    int number1, number2;

    cout << "Enter two numbers and I will multiply\n";
    cout << "them by 50 for you. \n" --> expected a ';' after quotes.
    cin >> number1 >> number2;
    number1 =* 50; --> Combined Assigned Operator is in the wrong location.
    number2 =* 50; --> Combined Assigned Operator is in the wrong location.
    cout << number1 << " " << number2; */

    //Algorithm - 31 (Fixed).
    //Variable data type.
    int number1, number2, total;

    //Displaying header.
    cout << "---------------------------------------------\n";
    cout << "The Multiplication of two numbers by 50.\n";
    cout << "---------------------------------------------\n";

    //Get the two numbers to multiply.
    cout << "Enter two numbers and I will multiply\n";
    cout << "them by 50 for you. \n";
    cin >> number1 >> number2;
    cout << "---------------------------------------------\n";
    //Combined Assigned Operatros.
    number1 *= 50;
    number2 *= 50;

    //Display the two numbers multiplied.
    cout << "The two numbers multiplied by 50 are: " << number1 << " " << number2 << endl;
    cout << "\a";

}

void error_32()
{
    //Algorithm - 32 (Error).
    /*
    #include <iostrem>; --> shouldn't have semicolon after brackets of header file.
    #include <iomanip> --> header file <iomanip> is required for setprecision manipulator.
    main() --> main function doesn't have the int word.

    double number, half;

    cout << "Enter a number and I will divide it\n" --> no semicolon at the end of quotes.
    cout << "in half for you. \n" --> no semicolon at the end of quotes.
    cin >> number1; --> identifier "number1" is Undefined.
    half =/ 2; --> combined assignment operator is in the wrong location, and number should be divided by 2.
    cout << fixedpoint << showpoint << half << endl; --> indentifier fixedpoint is undefined.*/

    //Algorithm - 32 (Fixed).
    //Variable data type.
    double number, half;

    //Displaying header.
    cout << "---------------------------------------------\n";
    cout << "The Division of a number by half.\n";
    cout << "---------------------------------------------\n";

    //Get the number for the division.
    cout << "Enter a number and I will divide it\n";
    cout << "in half for you: \n";
    cin >> number;
    half = number / 2;
    cout << "---------------------------------------------\n";

    //Display the number divided in half.
    cout << "The number divided by half is: " << setprecision(2) << fixed << showpoint << half << endl;
    cout << "\a";

}

void error_33()
{
    //Algorithm - 33 (Error).
    /*
    #include <iostream>; --> Shouldn’t have semicolon after brackets of header file.
    #include <string> --> string object 
    char name, go; --> should be string, not char.

    cout << "Enter your name: ";
    getline >> name; --> the getline function should be getline(cin, name).
    cout << "Hi " << name << endl;*/

    //Algorithm - 33 (Fixed).
    string name;
    string go;

    //Displaying header.
    cout << "---------------------------------------------\n";
    cout << "The String object.\n";
    cout << "---------------------------------------------\n";

    //Get the name and the place.
    cout << "Enter your name: ";
    cin >> name;
    cout << "Where do you want to go: ";
    cin >> go;
    cout << "---------------------------------------------\n";

    //Display the name and the place.
    cout << "Hi " << name << endl;
    cout << "You want to go to " << go << endl;
    cout << "\a";

}


int main()
{
    average_27();
    error_28();
    error_29();
    error_30();
    error_31();
    error_32();
    error_33();

    return 0;

}
