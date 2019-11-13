//Задание-07 на 5
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    
    string a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;
    int rez, rez1, rez2, rez3, rez4, rez5;

    a = "1) Волейбол";
    b = "2) Фехтование";
    c = "3) Хоккей";

    d = "1) ЦСК";
    e = "2) Динамо";
    f = "3) Зенит"; 

    g = "1) Дзюдо";
    h = "2) Шахматы";
    i = "3) Бокс";

    j = "1) 2";
    k = "2) 8";
    l = "3) 6";

    m = "1) JS";
    n = "2) C++";
    o = "3) На русском";

    cout << "1. Для какого вида спорта нужен мяч?\n";
    cout << a << "\n" << b << "\n" << c << "\n"<<endl;
    cin >> rez1;
        if (rez1 == 1) {
            rez = 1;
            cout << "Молодец.\n"<<endl;
        } else {
            cout << "Плохо."<<endl;
        }

    cout << "2. Как называется Питерская футбольная команда?\n";
    cout << d <<"\n" << e << "\n" << f << "\n"<<endl;
    cin >> rez2;
        if (rez2 == 3) {
            rez++;
            cout << "Молодец.\n"<<endl;
        } else {
            cout << "Плохо.\n"<<endl;
        }

    cout << "3. Какой вид спорта не относится к боевым?\n";
    cout << g << "\n" << h << "\n" << i << "\n"<<endl;
    cin >> rez3;
        if (rez3 == 2) {
            rez++;
            cout << "Молодец.\n"<<endl;
        } else {
            cout << "Плохо.\n"<<endl;
        }

    cout << "4. 2 + 2 * 2 ?\n";
    cout << j << "\n" << k << "\n" << l << "\n"<<endl;
    cin >> rez4;
        if (rez4 == 3) {
            rez++;
            cout << "Молодец.\n"<<endl;
        } else {
            cout << "Плохо.\n"<<endl;
        }

    cout << "5. На каком языке написана эта работа?\n";
    cout << m << "\n" << n << "\n" << o << "\n"<<endl;
    cin >> rez5;
        if (rez5 == 2) {
            rez++;
            cout << "Молодец.\n"<<endl;
        } else {
            cout << "Плохо.\n"<<endl;
        }

    if (rez == 5) {
        cout << "Ваша оценка: " << rez << "\n";
        cout << "Отлично."<<endl;
    } else if (rez == 4) {
        cout << "Ваша оценка: " << rez << "\n";
        cout << "Хорошо."<<endl;
    } else if (rez == 3) {
        cout << "Ваша оценка: " << rez << "\n";
        cout << "Удовлетворительно."<<endl;
    } else {
        cout << "Ваша оценка: " << rez << "\n";
        cout << "Неудовлетворительно."<<endl;
    }
}