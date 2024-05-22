
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int length = 3;
int score = 0;


void gotoXY(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tuong_tren()
{
    int x = 10, y = 1;
    while (x < 101)
    {
        gotoXY(x, y);
        cout << "v";
        x++;
    }
}

void tuong_ben_trai()
{
    int x = 10, y = 2;
    while (y < 26)
    {
        gotoXY(x, y);
        cout << ">";
        y++;
    }
}

void tuong_ben_phai()
{
    int y = 2, x = 100;
    while (y < 26)
    {
        gotoXY(x, y);
        cout << "<";
        y++;
    }
}

void tuong_duoi()
{
    int y = 26, x = 10;
    while (x < 101)
    {
        gotoXY(x, y);
        cout << "^";
        x++;
    }
}

void start(int toadox[], int toadoy[])
{
    int x = 50;
    int y = 13;
    for (int i = 0; i < length; i++)
    {
        toadox[i] = x;
        toadoy[i] = y;
        x--;
    }
}

void snake(int toadox[], int toadoy[])
{
    for (int i = 0; i < length; i++)
    {
        gotoXY(toadox[i], toadoy[i]);
        if (i == 0)
        {
            cout << "O";
        }
        else
        {
            cout << "o";
        }
    }
}

void xoa_duoi_ran(int toadox[], int toadoy[])
{
    gotoXY(toadox[length - 1], toadoy[length - 1]);
    cout << " ";
}

void xu_ly_ran(int toadox[], int toadoy[], int x, int y)
{
    for (int i = length - 1; i > 0; i--)
    {
        toadox[i] = toadox[i - 1];
        toadoy[i] = toadoy[i - 1];
    }
    toadox[0] = x;
    toadoy[0] = y;
}

void them(int toadox[], int toadoy[], int x, int y)
{
    length++;
    for (int i = length - 1; i > 0; i--)
    {
        toadox[i] = toadox[i - 1];
        toadoy[i] = toadoy[i - 1];
    }
    toadox[0] = x;
    toadoy[0] = y;
}

void tao_thuc_an(int& x_thuc_an, int& y_thuc_an, int toadox[], int toadoy[])
{
    bool on_snake;
    do {
        
        on_snake = false;
        x_thuc_an = rand() % 90 + 10;
        y_thuc_an = rand() % 24 + 2;
        for (int i = 0; i < length; i++) {
            if (x_thuc_an == toadox[i] && y_thuc_an == toadoy[i]) {
                on_snake = true;
               
                break;
            }
            
        }
    } while (on_snake);

    gotoXY(x_thuc_an, y_thuc_an);
    cout << "*";
    
    
}

bool kiem_tra_an_thuc_an(int x, int y, int x_thuc_an, int y_thuc_an)
{
    return (x == x_thuc_an && y == y_thuc_an);

 
}

bool kiem_tra_va_cham(int toadox[], int toadoy[])
{
    if (toadox[0] > 99 || toadoy[0] < 2 || toadox[0] < 11 || toadoy[0]>25) return false;
    return true;
}

bool can_than(int toadox[],int toadoy[])
 {
    for (int i = 1; i < length; i++)
    {
        if (toadox[0] == toadox[i] && toadoy[0] == toadoy[i])
        {   
            return false;
        }
     }
    return true;
 }




int main()
{
    int toadox[100];
    int toadoy[100];
    int x_thuc_an, y_thuc_an;
   

    srand(time(0)); // Initialize random seed

    tuong_tren();
    tuong_ben_trai();
    tuong_ben_phai();
    tuong_duoi();
    

    start(toadox, toadoy);
    snake(toadox, toadoy);

    tao_thuc_an(x_thuc_an, y_thuc_an, toadox, toadoy);

    int x = 50, y = 13;
    int check = 2; // right



    while (true)
    {   
       


        if (_kbhit())
        {
            char kitu = _getch();
            if (kitu == 'w' && check != 0)
            {
                check = 1; // up
            }
            else if (kitu == 's' && check != 1)
            {
                check = 0; // down
            }
            else if (kitu == 'd' && check != 3)
            {
                check = 2; // right
            }
            else if (kitu == 'a' && check != 2)
            {
                check = 3; // left
            }
        }

        // Clear the tail of the snake
        xoa_duoi_ran(toadox, toadoy);
     
        // Update snake position based on direction
        if (check == 2) // right
        {
            x++;
        }
        else if (check == 1) // up
        {
            y--;
        }
        else if (check == 3) // left
        {
            x--;
        }
        else if (check == 0) // down
        {
            y++;
        }

        // Check if snake eats food
        if (kiem_tra_an_thuc_an(x, y, x_thuc_an, y_thuc_an))
        {
            them(toadox, toadoy, x, y);
            tao_thuc_an(x_thuc_an, y_thuc_an, toadox, toadoy);
            score += 10;
            int a = 12, b =0;
            gotoXY(a, b);
            cout << score;
           
        }
        else
        {
            // Update snake coordinates if no food is eaten
            xu_ly_ran(toadox, toadoy, x, y);
            


        }

        // Draw snake at new position
        snake(toadox, toadoy);

        if (kiem_tra_va_cham(toadox, toadoy) == false) break;
        if (can_than(toadox, toadoy) == false) break;

      
        

        Sleep(100); // Adjust speed as needed
    }

    _getch();
    return 0;
}
