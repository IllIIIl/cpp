#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include "Burrito.h"
#include <ctime>

using namespace std;

int main(int argc, char** argv)
{
    srand(time(0));

    for (int x = 1; x < 25; x++) {
        cout << 1 + (rand() % 6) << endl;
    }

    return 0;
}