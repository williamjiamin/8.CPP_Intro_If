//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>

using namespace std;

int main() {
    string saved_passwd = "lexueoude.com/William";
    cout << "Please enter your password :" << flush;

    string input;
    cin >> input;

//    cout << "The password you entered is : " << input << endl;

//    我们可以通过加上逻辑进行判断
    if(input == saved_passwd){
        cout << "You have entered the right password~" << endl;
    }

    if(input != saved_passwd){
        cout << "You have entered the wrong password~Access denied,Sorry~." << endl;
    }

    return 0;
}