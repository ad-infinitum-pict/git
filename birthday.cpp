
#include <iostream>
#include <stdlib.h>

using namespace std;
void fillUp(int birthdays [], int size)
{
    for (int i = 0; i < size; i++)
    {
        birthdays[i] = rand() % 365 + 1;
    }
}
int main()
{
    const int trials(5000);
    double total;
    int count(0), birthdays[49];
    //void fillup(int a[],int a);
    srand(time(NULL));


    for (int i = 2; i <= 50; i++)
    {
        for (int k = 0; k < trials; k++)
        {
            fillUp(birthdays, 49);
            for (int j = i + 1; j <= 50; j++)
            {
                if (birthdays[i] == birthdays[j])
                {
                    count += 1;
                }
            }
        }
        total = count / 5000.0;
        cout << "For " << i << " the probability is " << total << endl;
    }
    return 0;
}


