// 30 days of code day 2: "operators"
//https://www.hackerrank.com/challenges/30-operators/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

//#include <bits/stdc++.h>
#include <iostream>
#include <limits>
#undef max

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {

    int total_cost = 0;
    total_cost = (tip_percent+tax_percent+100)*meal_cost;
    cout << (total_cost+50)/100<< endl;

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}