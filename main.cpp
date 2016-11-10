#include <iostream>
using namespace std;
int main()
{
    int *a = 0;
    int size = 0;
    int sum = 0;
    cout << "Количество элементов: ";
    cin >> size;
    a = new int[size];
    for (int i = 0; i<size; i++){
        a[i] = rand() % 100;
        cout << " " << a[i];
    }
    cout << endl;
    for (int i = 0; i<size; i++) {
        sum = sum + a[i];
    }
    cout << "Сумма элементов: " << sum << endl;
    return 0;
}
