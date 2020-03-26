#include <iostream>

using namespace std;

int main()
{
    int N, L, H;
    cin >> N >> L >> H;
    int elements[N], marked[N];

    for (int i = 0; i < N; i++){
        cin >> elements[i];    
    }
    
    for (int i = 0; i < N; i++){
        cin >> marked[i];
        cout << marked[i];
    }

    int max_sum = 0;
    int marked_elements = 0;

    for (int i = 0; i < N; i++){
        // Recomeçar
       // Não incluir o elemento atual   
    }
}