#include <iostream>

using namespace std;

int tests(int test1, int test2, int test3);
char grade(int sum);
int main()
{
    int term1, term2, fina, attend, test1, test2, test3, sum;
    cin >> term1 >> term2 >> fina >> attend >> test1 >> test2 >> test3;
    sum = term1 + term2 + fina + attend + tests(test1, test2, test3);
    cout << grade(sum) << endl;
    return 0;
}
int tests(int test1, int test2, int test3)
{
    int mini = min(test1, min(test2, test3));
    int ave = (test1+test2+test3-mini)/2;
    return ave;
}
char grade(int sum)
{
    if (sum >= 90) return 'A';
    if (sum >= 80 && sum < 90) return 'B';
    if (sum >= 70 && sum <80) return 'C';
    if (sum >= 60 && sum < 70) return 'D';
    if (sum < 60) return 'F';
}