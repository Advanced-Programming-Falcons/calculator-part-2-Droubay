#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string history(string hist){
    cout << endl;

    return hist;
}

int main(void){
    char keep_going = 'Y';
    char see_hist = 'Y';
    string equation;
    
    while(keep_going == 'Y'){
        
        int num1 = 0;
        char optr;
        int num2 = 0;
        int answer = 0;

        cout << "Enter your equation: " << endl;
        cin >> num1 >> optr >> num2;

            if(optr == '+'){
            answer = num1 + num2;
            cout << answer << endl;
            }
            else if(optr == '-'){
            answer = num1 - num2;
            cout << answer << endl;
            }
            else if(optr == '*'){
            answer = num1 * num2;
            cout << answer << endl;
            }
            else if(optr == '/'){
            answer = num1/num2;
            cout << answer << endl;
            }
            else if(optr == '^'){
            answer = pow(num1, num2);
            cout << answer << endl;
            }
        
        cout << "Would you like to view your history? [Y or N]: " << endl;
        cin >> see_hist;

        if(see_hist == 'Y'){
            equation = to_string(num1) + to_string(optr) + to_string(num2) + "=" + to_string(answer); 
            history(equation);
        }
      
        cout << "Would you like to keep going? (Y or N): " << endl;
        cin >> keep_going;
        }
    }
