#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sub[51];
    double std_sum = 0, score_sum = 0;
    for (int i = 0; i < 20; i++)
    {
        char grade[3];
        double score;

        cin >> sub >> score >> grade;

        if (!strcmp(grade, "A+")) {
            std_sum += score * 4.5;
            score_sum += score;
        }
        else if (!strcmp(grade, "A0")) {
            std_sum += score * 4.0;
            score_sum += score;
        }
        else if (!strcmp(grade, "B+")) {
            std_sum += score * 3.5;
            score_sum += score;
        }
        else if (!strcmp(grade, "B0")) {
            std_sum += score * 3.0;
            score_sum += score;
        }
        else if (!strcmp(grade, "C+")) {
            std_sum += score * 2.5;
            score_sum += score;
        }
        else if (!strcmp(grade, "C0")) {
            std_sum += score * 2.0;
            score_sum += score;
        }
        else if (!strcmp(grade, "D+")) {
            std_sum += score * 1.5;
            score_sum += score;
        }
        else if (!strcmp(grade, "D0")) {
            std_sum += score * 1.0;
            score_sum += score;
        }
        else if (!strcmp(grade, "F")) {
            std_sum += score * 0.0;
            score_sum += score;
        }
        else
            continue;
    }

    double result = std_sum / score_sum;
    cout << fixed;
    cout.precision(6);
    cout << result;
}