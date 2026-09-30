#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
        cout <<"==============================\n";
        cout <<"======= CALCULATOR APP =======\n";
        cout <<"==============================\n";

    while (true){

        cout << "Enter Your First Number : \n";
        double num1 ;
        cin >> num1 ;
        cout << "Enter the operation ( + , - , * , / ) :  ";
        char OP ;
        cin >> OP;
        cout << "Enter Your Second Number : \n";
        double num2 ;
        cin >> num2 ;


        switch (OP) 
        {
            case '+' :
            {
                double add = num1 + num2 ;
                cout<< "Addition of "<< num1 <<"+" << num2 <<" = " << add;
                break;
            }
            case '*' :
            {
                double multi = num1 * num2 ;
                cout<< "Multiplay of "<< num1 <<"*" << num2 <<" = " << multi;
                break;
            }
            case '-' :
            {
                double sub = num1 - num2 ;
                cout<< "Substraction of "<< num1 <<"-" << num2 <<" = " << sub;
                break;
            }
            case '/' :
            {
                if (num2 != 0){
                    double div = num1 / num2 ;
                    cout<< "Divition of "<< num1 <<"/" << num2 <<" = " << div;
                }else{
                    cout << "Cannot divide by zero!\n";
                }
                break;
            }
            default :
            {
                cout << "Enter the operation ( + , - , * , / ) ";
                break;
            }
        }
        
        cout << "\n Press Enter to run again or type 'exit' to quit : " ;
        string again ;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, again);
        transform(again.begin(),again.end(),again.begin() , ::tolower);
        if (again == "exit"){
            cout << "Program Ended" << endl;
            break;
        }
        
    }
    return 0 ;
}