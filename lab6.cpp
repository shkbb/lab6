#include <iostream>

using namespace std;

int main() {
    char myArray[] = "Це приклад масиву символів";
    char* ptr = myArray;

    bool found = false;

    while (*ptr != '\0') {
        if (*ptr == 'a') {
            found = true;
            break;
        }
        ptr++;
    }

    if (found) {
        cout << "Масив містить літеру 'a'." << endl;
    } else {
        cout << "Масив не містить літеру 'a'." << endl;
    }

    return 0;
}
