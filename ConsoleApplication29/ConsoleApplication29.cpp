#include <iostream>
using namespace std;
int НСД(int a, int b) {
    if (a == b)
        return a;
    if (a > b)
        return НСД(a - b, b);
    return НСД(a, b - a);
}

int НСК(int a, int b) {
    return (a * b) / НСД(a, b);
}

class Fraction {
    public:
        int num, denom;
        Fraction(/*int num1, int denom1*/) {
            cout << "Введiть чисельник дробу: ";
            cin >> num;
            this->num; //= num1;
            cout << "Введiть знаменник дробу: ";
            cin >> denom;
            this->denom; //= denom1;
            cout << "Дрiб -> " << num << "/" << denom << endl;
        };
        void compare(Fraction a1, Fraction a2) {
            int a11 = a1.num;
            int b11 = a1.denom;
            int a22 = a2.num;
            int b22 = a2.denom;
            
            int res = a11 * b22 - b11 * a22;

            if (b11 == 0 || b22 == 0)
            {
                cout << "Знаменник не може дорiвнювати нулю";
            }
            else
                if (res > 0) {
                    int nsd1 = НСД(a1.num, a1.denom);
                    int nsd2 = НСД(a2.num, a2.denom);
                    cout << a1.num / nsd1 << "/" << a1.denom / nsd1 << " > " << a2.num / nsd2 << "/" << a2.denom / nsd2 << endl;
                }
                else{
                    int nsd1 = НСД(a1.num, a1.denom);
                    int nsd2 = НСД(a2.num, a2.denom);
                    cout << a1.num / nsd1 << "/" << a1.denom / nsd1 << " < " << a2.num / nsd2 << "/" << a2.denom / nsd2 << endl;
                }
        }
};

int main()
{
    setlocale(LC_CTYPE,"ukr");

   Fraction Fraction1;
   Fraction Fraction2;
   Fraction1.compare(Fraction1, Fraction2);
    //cout << Fraction1->num << Fraction1->denom;
}

