#include <iostream>
#include <cmath>

using namespace std;

//basic of numbers part 2
int main()
{
    double a = 56;
    double b = 95.27;
    double c = 24.12;
    double d = 87.45;

    double x = a / b;
    double y = c * d;
    double z = a*b/c+(a-d) * 9;

    double small1 = floor(z);
    double maxi1 = ceil(z);

    cout << maxi1 << endl;
    cout << small1 << endl;

    return 0;
}