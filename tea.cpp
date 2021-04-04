#include "tea.h"

Tea::Tea()
{

}

void Tea::brew(){
    cout << "Steeping the tea" << endl;
}

void Tea::addCondiments(){
    cout << "Adding Lemon" << endl;
}

bool Tea::customerWantsCondiments(){
    QString answer = getUserInput();
     if (answer.toLower().startsWith("y")) {
        return true;
     }
     else {
        return false;
     }
}

QString Tea::getUserInput(){
    QString answer = nullptr;
    char *answer_char = new char [10];
    cout << "Would you like milk and sugar with your coffee (y/n)?" << endl;
    cin >> answer_char;
    answer = QString(answer_char);

    if (answer == nullptr) {
    return "no";
    }
    return answer;
}
