#include <iostream>

using namespace std;

int main()
{
    double Inum;
    int Rnum, m, d, c, l, x, v, i, n;

    cout << "Enter a number: ";
    cin >> Rnum;
    Rnum = (int)Rnum;
    //Math for determining values and placing them in order
    m = Rnum / 1000;
    d = ((Rnum % 1000) / 500);
    c = ((Rnum % 500) / 100);
    l = ((Rnum % 100) / 50);
    x = ((Rnum % 50) / 10);
    v = ((Rnum % 10) / 5);
    i = (Rnum % 5);
    n = m + d + c + l + x + v + i;
    //while loop for determining if a interger is a valid value
    while (n > 0) {
        if (Rnum >= 4000) {
            cout << "error";
        }

        else if (m > 0) {
            cout << "M";
            m--;
            n--;
        }
        else if (d > 0) {
            cout << "D";
            d--;
            n--;
        }
        else if (c > 0) {
            cout << "C";
            c--;
            n--;
        }
        else if (l > 0) {
            cout << "L";
            l--;
            n--;
        }
        else if (x > 0) {
            cout << "X";
            x--;
            n--;
        }
        else if (v > 0) {
            cout << "V";
            v--;
            n--;
        }
        else if (i > 0) {
            cout << "I";
            i--;
            n--;
        }
        break;
    }
    return 0;
}