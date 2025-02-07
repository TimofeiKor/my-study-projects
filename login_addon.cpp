#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    string password;
    int user_ans;
    int user_ans_ch;
    int yes = 1;
    int no = 2;
    int ch_pass = 0;
    int ch_name = 9;
    int m_acc = 10;
    int m_acc_canc = 11;
    cout<<"hello! what's your name?";
    cin>>name;
    cout<<"nice to meet you!"<<endl;
    cout<<"come up with your own password!";
    cin>>password;
    cout<<"did you specify everything correctly? (if yes - 1, if no - 2)";
    cin>>user_ans;
    if(user_ans == yes) {
        cout<<"welcome to the program, "<<name;
    }
    else if(user_ans == no) {
        cout<<"what do you want change? (if name - 9, if password - 0)";
        cin>>user_ans_ch;
        if(user_ans_ch == ch_pass) {
            cout<<"okay, your new password?";
            cin>>password;
            cout<<"welcome to the program, "<<name;
        }
        else if(user_ans_ch == ch_name) {
            cout<<"okay, your new name?";
            cin>>name;
            cout<<"welcome to the program, "<<name;
        }
    }
    return 0;
}