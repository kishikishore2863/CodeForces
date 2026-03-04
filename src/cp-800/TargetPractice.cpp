//
// Created by Kishi Kishore N on 04/03/26.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                char ele;
                cin >> ele;
                if (ele == 'X')
                    if (i == 0 || j == 0 || i == 9 || j == 9) {
                        sum = sum + 1;
                    } else if (i == 1 || j == 1 || i == 8 || j == 8) {
                        sum = sum + 2;
                    } else if (i == 2 || j == 2 || i == 7 || j == 7) {
                        sum = sum + 3;
                    } else if (i == 3 || j == 3 || i == 6 || j == 6) {
                        sum = sum + 4;
                    } else if (i == 4 || j == 4 || i == 5 || j == 5) {
                        sum = sum + 5;
                    }
            }
        }

        cout << sum << endl;
    }
    return 0;
}



