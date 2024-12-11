#include <iostream>
#include "math.h"
using namespace std;
int main() {
    int number;
    cin >> number;
    int num0 = number;
    int num = number;
    int sum = 0;
    int size = 0;
    for(;;)
    {
        if(num != 0)
        {
            size++;
        }else{
            break;
        }
        num /= 10;
    }
    for(int i = 0;i < size;i++)
    {
        sum += (pow((number%10),size));
        number /= 10;
    }
    if(num0 == sum)
    {
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}
