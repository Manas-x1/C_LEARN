#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //defining the variables
    double num1, num2;
    char op;
    double result;

    //taking the input from the user
    cout << "Enter the first number: "; //first number
    cin >> num1;
    cout << "Enter the operator: "; //operator
    cin >> op;
    cout << "Enter the second number: "; //second number
    cin >> num2;

    //performing the operation
    if(op == '+'){              //addition
        result = num1 + num2;
    }else if(op == '-'){        //subraction
        result = num1 - num2;
    }else if(op == 'x'){        //multiplication
        result = num1 * num2;
    }else if(op == '/'){        //division
        result = num1 / num2;
    }else if(op == 'P'){        //exponantial
        result = pow(num1,num2);
    }else if(op == 'R'){        //sqroot
        result = sqrt(num1);
    }else{
        cout<< "no valid operator given" << endl; //in case of an invalid opratore
    }
    //printing out the resultent value
    cout<<"answer is : " << result <<endl;
    
    return 0;
}