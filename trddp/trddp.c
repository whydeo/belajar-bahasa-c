#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h> 

#define MAX_USERS 100

struct User
{
    char username[50];
    char password[50];
    int kasir;
};

struct User users[MAX_USERS];
int userCount = 0;

void printWelcomeMessage(int offset)
{
    printf("\n");
    for (int i = 0; i < offset; i++)
    {
        printf(" ");
    }
    printf("\033[95m============================\n");
    for (int i = 0; i < offset; i++)
    {
        printf(" ");
    }
    printf("   Welcome to Cool Program\n");
    for (int i = 0; i < offset; i++)
    {
        printf(" ");
    }
    printf("============================\033[0m\n");
}

void animateWelcomeMessage()
{
    int offset = 0;
    for (int i = 0; i < 20; i++)
    {
        system("cls");
        printWelcomeMessage(offset);
        Sleep(90); // Jeda selama 100 milidetik
        offset++;
    }
}

void printMenu()
{
    printf("\n1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("masukan menu : ");
}
void menukasir(){
    printf("\n1.tambah menu \n");
    printf("\n2.cek transaksi \n");
    printf("\n3.histori pelangan \n");
    printf("\n4.exit\n");
    
}
void registerUser()
{
    system("cls");;
    animateWelcomeMessage();

    if (userCount >= MAX_USERS)
    {
        printf("Error: Maximum number of users reached.\n");
        return;
    }

    printf("Enter username: ");
    scanf("%s", users[userCount].username);

    printf("Enter password: ");
    int i = 0;
    char ch;
    while (1)
    {
        ch = _getch();
        if (ch == '\r')
        {
            break;
        }
        users[userCount].password[i] = ch;
        putchar('$');
        i++;
    }
    users[userCount].password[i] = '\0';
    printf("\n");

    printf("Login sebagai 0.customer \n 1.kasir: ");
    scanf("%d", &users[userCount].kasir);

    printf("\nRegistrasi berhasil!!!\n");
    userCount++;
}

void loginUser()
{
    system("cls");;
    animateWelcomeMessage();
    char username[50];
    char password[50];
    int loginSuccess = 0; 

    do
    {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");

        int i = 0;
        char ch;
        while (1)
        {
            ch = _getch();
            if (ch == '\r')
            {
                break;
            }
            password[i] = ch;
            putchar('$');
            i++;
        }
        password[i] = '\0';
        printf("\n");

        system("cls");;

        for (int i = 0; i < userCount; i++)
        {
            if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0)
            {
                loginSuccess = 1;
                if (users[i].kasir)
                {
                    printf("Hello, %s selamat datang di menu kasir \n", users[i].username);
                    menukasir();

                }
                else
                {
                    printf("Hello, %s selamat datang disini\n", users[i].username);
                    printf("\nMain Menu:\n");
                    printf("1. Print Data\n");
                    printf("2. Edit Data\n");
                    printf("3. EXIT\n");
                    printf("Enter your choice: ");
                    // tambahlagi bagian customer nanti
                }
                getch();
                system("cls");;
                break; 
            }
        }

        if (!loginSuccess)
        {
            printf("Invalid username or password. Please try again.\n");
        }

    } while (!loginSuccess);
}

void crudmenu()
{
    system("cls");
    // print_welcome();
    printf("CRUD Operations Menu\n");
}

int main()
{
    int menulogin;
    do
    {
        animateWelcomeMessage();
        printMenu();
        scanf("%d", &menulogin);
        system("cls");;
        switch (menulogin)
        {
        case 1:
            registerUser();
            break;
        case 2:
            loginUser();
            break;
        case 3:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid menulogin. Please try again.\n");
        }
    } while (menulogin != 3);

    return 0;
}
