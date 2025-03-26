//
// Created by Administrator on 2025/3/26.
//

// 用户交互

#include <iostream>
#include <limits>
#include <string>

using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::string;

int main(){
    int age;
    string name;

    // 输入姓名验证
        while (true){
            cout << "Enter your name: ";
            std::getline(cin, name);
            if(name.empty() || cin.fail()){
                cout << "Error: incorrect name, please try again!\n";
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else{
                break;
            }
        }

    // 输入年龄验证
    while (true){
        cout << "Enter your age: ";
        cin >> age;
        if(cin.fail() || age <= 0 || age >= 150){
            cout << "Error: invalid age, please try again!\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else{
            break;
        }
    }
    cout << "Hello, " << name << ", you are " << age << " years old.\n";
    return 0;
}

