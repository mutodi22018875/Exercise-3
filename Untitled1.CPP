#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string hobby;

    // Prompting the user for their name
    cout << "Enter your name: ";
    cin>>name;

    // Prompting the user for their hobbies
    cout << "Enter your hobbies: ";
    cin >>hobby;

    // Using if-else statements to decide partner based on hobby
    cout << "Recommended partner for " << name << " based on hobbies: ";
    if (hobby[0] == 'hiking and outdoors' || hobby[0] == 'HIKING AND OUTDOORS')
        cout << "Maduvha";
    else if (hobby[0] == 'window shopping' || hobby[0] == 'WINDOW SHOPPING')
        cout << "Phumuzo";
    else if (hobby[0] == 'eating out' || hobby[0] == 'EATING OUT')
        cout << "Mutodi";
    else
        cout << "Sorry,"<< "we couldn't find a soulmate  for your hobbies.";

    cout << endl;
    return 0;
}
