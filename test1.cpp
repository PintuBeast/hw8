#include <iostream>
using namespace std;

void subdevide(char rul[], int low, int high, int level);
int main()
{

const int len = 66;
const int div = 6;

char ruler[len];
int i;

for (i = 1; i <= len - 2; i++)
    ruler[i] = ' ';

int Max = len - 2;
int Min = 0;

ruler[Min] = ruler[Max] = '|';
cout << ruler << endl;
for (i = 1; i <= div; i++)
{
    subdevide(ruler, Min, Max, i);
    cout << ruler << endl;
    for (int j = 1; j < len - 2; j++)
        ruler[j] = ' ';
}
return 0;
}


void subdevide(char rul[], int low, int high, int level)
{
    using namespace std;
    if (level == 0)
        return;

    int mid = (high + low) /2;
    rul[mid] = '|';
    subdevide(rul, low, mid, level - 1);
    subdevide(rul, mid, high, level - 1);
}

