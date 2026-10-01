#include <iostream>
using namespace std;

int main() {
    string ign;
    double gpa;
    double acholds;
    double credits;

    cout << "Hello, Student what is your name before we begin your graduation evaulation?" << endl;
    cin >> ign;
    cout << "Wonderful " <<ign << " first things first how much credits do you have?" << endl;
    cin >> credits;
    cout << "Ok, now how what is the number of current accademic holds you have currently?" << endl;
    cin >> acholds;
    cout << "Last question before I can get your elegibility, what is your gpa?" << endl;
    cin >> gpa;

    if (gpa >= 2 && acholds == 0 && credits >= 60) {
        cout << "Congratulations " << ign << " you are eligible to graduate!" << endl;
 }
    else {
        cout << "Oh sadly " << ign << " you are not eligible to graduate for the following reasons" << endl;
        if (gpa < 2){
        cout << "-Sub 2 GPA" << endl;
        }
        if (credits < 60 ) {
            cout << "-Sub 60 credits" << endl;
        }
        if (acholds > 0) {
            cout << "-Academic Holds" << endl;
        }
        cout << "NEXT!!!" << endl;
    } 
return 0;
}
