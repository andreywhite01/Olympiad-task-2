#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("input.txt");
    string feeders_str, poisonTime_str, totalMinutesToTest_str;
    getline(fin, feeders_str, ',');
    getline(fin, poisonTime_str, ',');
    getline(fin, totalMinutesToTest_str);
    int feeders = atoi(feeders_str.c_str());
    int poisonTime = atoi(poisonTime_str.c_str());
    int totalMinutesToTest = atoi(totalMinutesToTest_str.c_str());

    int mouses = 1;
    int stages = int(totalMinutesToTest / poisonTime);

    while (pow(stages + 1, mouses) < feeders) {
        mouses++;
    }
    ofstream fout;
    fout.open("output.txt");

    fout << mouses;
}
