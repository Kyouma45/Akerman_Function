//Akerman Function

#include <iostream>
using namespace std;
class Math
{
public:
    unsigned long Akerman(unsigned long m, unsigned long n)
    {
        if (m > 0 && n > 0)
        {
            Akerman(m - 1, Akerman(m, n - 1));
        }
        else if (m > 0 && n == 0)
        {
            Akerman(m - 1, 1);
        }
        else
        {
            return n + 1;
        }
    }
};

int main()
{
    Math m1;
    unsigned long p, q;
    cout << "Enter M: ";
    cin >> p;
    cout << "Enter N: ";
    cin >> q;
    unsigned long t = m1.Akerman(p, q);
    cout << t << endl;
    return 0;
}
