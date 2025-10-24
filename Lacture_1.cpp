// #include <iostream>
// using namespace std;

// int main()
// {

//     int count=1;
//     int sum = 0;
//     int n;

//     cout << "Enter N number: " << endl;
//     cin >> n;

//     while (count<=n)    //While Loop
//     {
//         sum+=count;
//         count++;
//     }

//     // for (int i = 1; i <= n; i++)    //for loop
//     // {
//     //     sum += i;
//     // }

//     cout << sum << endl;

//     return 0;
// }

// Prime Number

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a Number Those Are Prime or not: " << endl;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << n << "This is a Prime Number...." << endl;
    }
    else
    {
        cout << n << "Not a Prime Numbe" << endl;
    }

    return 0;
}