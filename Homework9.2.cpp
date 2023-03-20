#include <iostream>
#include <cstring>

using namespace std;

// Сравниваем строки по ASCII-кодам букв
bool compare(string s1, string s2) {
    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] < s2[i]) {
            return true;
        }
        else if (s1[i] > s2[i]) {
            return false;
        }
    }
    return s1.length() < s2.length();
}

int main()
{   
    system("chcp 1251"); // Без этого нормально не выводятся строки, setlocale не помогает
    int n;

    cout << "Введите количество элементов в массиве: " << endl;
    cin >> n;

    string* mas = new string[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите фамилию в ячейку mas[" << i + 1 << "]: " << endl;
        cin >> mas[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!compare(mas[i], mas[j]))
            {
                swap(mas[i], mas[j]); // Меняем местами
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << endl;
    }

}