#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    srand(time(nullptr));
    int number = (rand() % 6 )+1;
    cout << "random number: "<< number << endl;

    return 0;
}
