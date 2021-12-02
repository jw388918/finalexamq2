#include <iostream>
#include <fstream>
#include <string>

int countLine(string text){
    int num = 0;
    if (getline(text) == NULL) {
        return num;
    } else {
        num = 1;
        return num;
    }
    return 0;
}

int countChar(string text){
    int num = test.size();
    return num;
}
int main(){
    string pName;
    string compare = "q";
    string ohiou = "Ohio University";
    string athens = "Athens";
    cout << "Please enter a string. If default is wanted, enter 'q'." << endl;
    cin >> pName;
    if (pName == compare){
        cout << countLine(ohiou) << " Lines." << endl;
        cout << countChar(athens) << " Characters." << endl;
    } else {
        cout << countLine(pName) << " Lines." << endl;
        cout << countChar(pName) << " Characters." << endl;
    }
    return 0;
}