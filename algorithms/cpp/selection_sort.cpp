#include <iostream>

using namespace std;

void selection_sort(int N, int v[])
{
    for (int i = 0; i < N; i++)
    {
        int min = v[i], min_index = i;

        for (int j = i + 1; j < N; j++)
        {
            if (v[j] < min)
            {
                min = v[j];
                min_index = j;
            }
        }

        if (min_index != i)
        {
            int tmp = v[i];
            v[i] = v[min_index];
            v[min_index] = tmp;
        }
    }
}