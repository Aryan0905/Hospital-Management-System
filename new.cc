#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>

////////////function decleration

using namespace std;

void menu();
void pascode();
void cpascode();

//////class one

class one
{
public:
    virtual void get() = 0;
    virtual void show() = 0;
};

///////////////class info

class info : public one
{
public:
    char name[50], time[50];
    int num, age;
    void get()
    {
        system("cls");
        cin.sync();
        cout << "\n Enter the patient name =";
        cin.getline(name, 50);
        cout << "\n Enter the appointment time =";
        cin.getline(time, 50);
        cout << "\n Enter age =";
        cin >> age;
        cout << "\n Enter appointment no =";
        cin >> num;
    }
    void show()
    {
        cout << "\n Name =" << name;
        cout << "\nAge =" << age;
        cout << "\nnum =" << num;
        cout << "\nTime =" << time;
    }
};

///// class rana..................................

class rana : public info
{
public:
    info a9;
    void get()
    {
        system("cls");
        ofstream out("Rana.txt", ios::app | ios::binary);
       { a9.get();
        out.write((char *)&a9, sizeof(info));
       }
        out.close();
        cout << "Your Entry Has Been Saved";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("rana.txt");
        if (!in)
        {
            cout << "\n\n No data in this file";
            cout << "\n\n\t\tPress any key to continue : ";
            getch();
            menu();
        }
        else
        {
            while (!in.eof())
            {
                in.read((char *)&a9, sizeof(a9));
                a9.show();
            }
            in.close();
            getch();
            menu();
        }
    }
};

/////////class Dr Satish....................

class Satish : public info
{

public:
    info a9;
    void get()
    {
        system("cls");
        ofstream out("Satish.txt", ios::app | ios::binary);
       { 
        a9.get();
        out.write((char *)&a9, sizeof(info));
       }
        out.close();
        cout << "Your Entry Has Been Saved";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("Satish.txt");
        if (!in)
        {
            cout << "\n\n No data in this file";
            cout << "\n\n\t\tPress any key to continue : ";
            getch();
            menu();
        }
        else
        {
            while (!in.eof())
            {
                in.read((char *)&a9, sizeof(a9));
                a9.show();
            }
            in.close();
            cout << "Press Enter to Continue =";
            getch();
            menu();
        }
    }
};
////////////////class aadi................

class Aadi : public info
{

public:
    info a9;
    void get()
    {
        system("cls");
        ofstream out("aadi.txt", ios::app | ios::binary);
        {a9.get();
        out.write((char *)&a9, sizeof(info));
        }
        out.close();
        cout << "Your Entry Has Been Saved";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("aadi.txt");
        if (!in)
        {
            cout << "\n\n No data in this file";
            cout << "\n\n\t\tPress any key to continue : ";
            getch();
            menu();
        }
        else
        {
            while (!in.eof())
            {
                in.read((char *)&a9, sizeof(info));
                a9.show();
            }
            in.close();
            getch();
            menu();
        }
    }
};

class staff : public one
{
public:
    char all[999];
    char name[50], age[220], sal[30], pos[20];

    void get()
    {
        ofstream out("staff.txt", ios::app);
        {
            system("cls");
            cin.sync();
            cout << "\nEnter name =";
            cin.getline(name, 50);
            cout << "\nEnter age =";
            cin.getline(age, 20);
            cout << "\nEnter salary =";
            cin.getline(sal, 30);
            cout << "\nEnter working position =";
            cin.getline(pos, 20);
            out<< "\nName = " << name << "\nage  " << age << "\nsalary " << sal << "\n working position  " << pos;
        }
        cout << "\nName = " << name << "\nage  " << age << "\nsalary " << sal << "\n working position  " << pos;
        out.close();
        cout << "\n\nYour information has been saved : \n\t\t\tPress any key to continue   ";
        getch();
        menu();
    }

    void show()
    {
        ifstream in("staff.txt");
        if (!in)
        {
            cout << "File open error";
        }else{
        while (!in.eof())
        {
            in.getline(all, 999);
            cout << all << endl;
        }
        }
        in.close();
        cout << "\n\n\t\t\tPress any key to continue  : ";
        getch();
        menu();
    }
};

/////class information..................

class information
{
public:
    void drinfo()
    {
        system("cls");
        system("color F3");
        cout << "\n=========================================================================\n";
        cout << "\n\n\t\t(Three Doctor available) \n\n\t\t [information and timing are given below]\n";
        cout << "\n=========================================================================\n";
        cout << "\n\t\tDr available :\n";
        cout << "\t\tDr. Rana (skin specialist)\n\n";
        cout << "\t\t\t[[Timing]]:\n\n";
        cout << "\tMonday to Friday\t\t9AM to 5PM\n";
        cout << "\tsaturday         \t\t9AM to 1PM\n";
        cout << "\tsunday            \t\t OFF\n";
        cout << "\n=========================================================================\n";
        cout << "\n\t\tDr available :\n";
        cout << "\t\tDr. Satish (child specialist)\n\n";
        cout << "\t\t\t[[Timing]]:\n\n";
        cout << "\tMonday to Friday\t\t2PM to 10PM\n";
        cout << "\tsaturday         \t\t8AM to 1PM\n";
        cout << "\tsunday            \t\t12PM to 9PM\n";
        cout << "\n=========================================================================\n";
        cout << "\n\t\tDr available :\n";
        cout << "\t\tDr. Aadi (DVM)\n\n";
        cout << "\t\t\t[[Timing]]:\n\n";
        cout << "\tMonday to Friday\t\t8AM to 5PM\n";
        cout << "\tsaturday         \t\t10AM to 1PM\n";
        cout << "\tsunday            \t\t OFF\n";
        cout << "\n=========================================================================\n";
        cout << "\nPress any key to continue : ";
        getch();
        menu();
    }
};

void call_dr()
{
    system("cls");
    int choice;
    cout << "\n\n\n\tPress 1 for DR. Rana  \n\n\t\tPress 2 for DR. Satish  \n\n\t\tPress 3 for DR. Aadi ";
    cin >> choice;

    one *ptr;
    rana s3;
    Satish s4;
    Aadi s5;
    if (choice == 1)
    {
        ptr = &s3;
        ptr->get();
    }
    if (choice == 2)
    {
        ptr = &s4;
        ptr->get();
    }
    if (choice == 3)
    {
        ptr = &s5;
        ptr->get();
    }
    else
    {
        cout << "Sorry invaild choice : ";
        getch();
        menu();
    }
}

void menu()
{
    system("cls");
    system("color FC");

    cout << "\n";
    cout << "\n";

    cout << "\t\t       |  ************* MAIN MENU ************  |   \n";
    cout << "\t\t       |         HOSPITAL MANAGEMENT SYSTEM     |   \n";
    cout << "\t\t       |  *-*-*-*-*-*--*-*-*-*-*--*-*-*-*-*--*  |   \n";
    cout << "\n=========================================================================\n";

    cout << "\t\t     Please select any option            \n  ";
    cout << "\t1-\t\tPress 1 For available doctor information\n\n";
    cout << "\t2-\t\tPress 2 for doctor appointment\n\n";
    cout << "\t3-\t\tPress 3 for saving staff information\n\n";
    cout << "\t4-\t\tPress 4 for checking patient appointment menu:\n\n";
    cout << "\t5-\t\tPress 5 for checking staff information menu:\n\n";
    cout << "\t6-\t\tPress 6 for Change Password or Create Password    :\n\n";
    cout << "\t7-\t\t[             Press 7 for  LOGOUT           ]\n";

    cout << "\n=========================================================================\n";
    cout << "\n\n\t\tPlease enter your choice : ";
    information a1;
    one *ptr;
    staff a2;
    rana a3;
    Satish a4;
    Aadi a5;
    info a9;
    int a;
    cin >> a;
    if (a == 1)
    {
        a1.drinfo();
    }
    else if (a == 2)
    {
        call_dr();
    }
    else if (a == 3)
    {
        ptr = &a2;
        ptr->get();
    }
    else if (a == 4)
    {   int z;
     cout << "\n\n\n\tPress 1 for DR. Rana  \n\n\t\tPress 2 for DR. Satish  \n\n\t\tPress 3 for DR. Aadi ";
       cin>>z;
       if(z==1){
          ptr=&a3;
          ptr->show();
       }else if(z==2){
         ptr=&a4;
          ptr->show();
       }else if(z==3){
         ptr=&a5;
          ptr->show();
       }else{
        cout<<"\nSorry Wrong choice\n";
       }
        // ptr=&a9;
        // ptr->show();
    }
    else if (a == 5)
    {
        ptr = &a2;
        ptr->show();
    }
    else if (a == 6)
    {
        cpascode();
    }
    else if (a == 7)
    {
        pascode();
    }
    else
    {
        cout << "Sorry invalid choice : ";
    }
}

void pascode()
{
    
   system("cls");
   char p1[50],p2[50],p3[50];

   system("color FC");

   ifstream in("password.txt");
   {
    cin.sync();

    cout<<"\n\n\n\n\n\n\n\t\t\tEnter the password: ";
    cin.getline(p1,50);
    in.getline(p2,50);
    if(strcmp(p2,p1)==0){
        menu();
    }else{
    cout<<"\n\n\t\t\tIncorrect passcode please try again\n ";
    Sleep(999);
   pascode();

    }
   }
   in.close();
}


void cpascode()
{
    char n[50];
   system("cls");
   ofstream out("password.txt");
   {
    cin.sync();

    cout<<"\n\n\n\n\n\n\n\t\t\tEnter the new password: ";
    cin.getline(n,50);
    out<<n;
   }
    out.close();
    cout<<"\n\nYour Password has been saved : ";
    getch();
    menu();
}


int main()
{
    pascode();
    system("pause");
}


