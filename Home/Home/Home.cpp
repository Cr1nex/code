

#include <iostream>

using namespace std;

int sum_div(int i){
    int sum = 1;
    for (int x = 2; x * x <= i; x++) {
        if (i % x == 0) {
            sum += x;
            if (x * x != i) {
                sum += i / x;
            }              
        }
    }
    return sum;
 }

int main()
{
    for (int i = 1100; i <= 1300; i++) {
        for (int j = i + 1; j <= 1300; j++) {
            if (sum_div(i) == j && sum_div(j) == i) {

                 cout << i << " and " << j << " are friendly numbers " << endl;
                 return 0;


            }

        }


         
   }
     cout << "No friendly numbers between 1100 and 1300" << endl;
     return 0;
}

