#include <bits/stdc++.h>
using namespace std;

char arr[3][3] = { {'.','.','.'}
,{'.','.','.'}
,{'.','.','.'}
};

bool win(char k);
void display();

int main()
{
    int n = 9,i,j;
    bool turnX= 1; 
    while (n)
    {
        char xo = (turnX ? 'X' : 'O');
        cout << "Player " << xo << " turn. Enter empty location (r,c)\n";
        cin >> i >> j;
        i--, j--;
        if (i < 3 && j < 3 && i >= 0 && j >= 0 && arr[i][j] == '.')
            arr[i][j] = xo;
        else
        {
            cout << "Invalid location. try again\a\n";
            continue;
        }
        if (win(xo))
        {
            cout << "Game over player " << xo << " win\n";
            break;
        }
        display();
        n--;
    }
    if (!n)
        cout << "Game over with tie\n\a";
}

bool win(char k)
{

    return 0;
}

void display()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}