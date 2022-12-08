#include <stdio.h>//---->stdio. h is a header file which has the necessary information to include the input/output related functions in our program
#include <stdlib.h>//---->includes functions involving memory allocation, process control, conversions and others.
#include <string.h>//---->defines one variable type, one macro, and various functions for manipulating arrays of characters
#include <windows.h>//---->contains declarations for all of the functions in the Windows API(Application programming Interface)

void printHead()
{
    printf("\e[01;97m");
    printChar('\xdb', 120);
    printf("\n");
    printChar('=', 120);
    printf("\n\t\t\t\t\t\t  [FOOD ORDER SYSTEM]");
    printf("\n\n\t\t\t\t        D.Y.PATIL COLLEGE OF ENGINERRING AND TECHNOLOGY");
    printf("\n");
    printChar('=', 120);
    printf("\n");
    printChar('\xdb', 120);
    printf("\033[0m");
}
void printChar(char ch, int n)
{
    while (n--)
    {
        printf("%c", ch);
    }
}

void information()
{
    system("cls");
    printHead();
    printf("\033[01;36m");
    printf("\n\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~ MINI PROJECT INFORMATION ~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\033[1;32m");
    printf("\n\n\t\t\t\t\t    MINI PROJECT ON PRODUCT TRACKING SYSTEM");
    printf("\n\n\t\t\t\t\t    CREATED BY PALLAVI , SHRUTI , RAJVARDHAN");
    printf("\033[01;33m");

    printf("\n\n\t\t\t BRANCH AND YEAR:\t CSE (PLANE) 2ND YEAR 4 TH SEMESTER");
    printf("\n\n\t\t\t SESSION:\t\t 2020-21");
    printf("\n\n\t\t\t COLLEGE:\t\t D.Y.PATIL COLLEGE OF ENGINEERING AND TECHNOLOGY , KOLHAPUR");
    printf("\n\n\n\t\t\t Press any  key to continue....\n \n");
    getch();
    system("cls");
}

void heading()
{
    printf("\e[01;97m");
    printChar('\xdb', 120);
    printf("\n");
    printChar('=', 120);
    printf("\n\t\t\t\t\t\t WELCOME TO THE SHRUTI'S CAFE");
    printf("\n");
    printChar('=', 120);
    printf("\n");
    printChar('\xdb', 120);
    printf("\033[0m");
}
void location()
{
    int x;
    int place;
    do
    {
        printf("\n\nSelect your place :");
        printf("\n1.Rankala\n2.shaupuri\n3.Rajarampuri\n4.Pulewadi\n\n");
        printf("Enter your choice:");

        scanf("%d", &place);
        switch (place)
        {
        case 1:
            printf("Proceed to your order\n");
            printf("\nIt will take 20 min.");
            printf("\nPress any 1 to continue\n");
            break;
        case 2:
            printf("\nProceed to your order");
            printf("\nIt will take 30 min.");

            printf("\nPress any 1 to continue\n");

            break;
        case 3:
            printf("\nProceed to your order");
            printf("\nIt will take 25 min.");

            printf("\nPress any 1 to continue\n");

            break;
        case 4:
            printf("\nProceed to your order");
            printf("\nIt will take 40 min.");

            printf("\nPress 1 key to continue\n");

            break;
        default:
            printf("\nchoose valid option");
            printf("\nPress 0 to select option.\n");
            break;
        }
        scanf("%d", &x);
    } while (x == 0);
    // printf("Code are running.....");
}
void payment(){
    int pay  ,pay1;

    printf("Payment option:\n NET BANKING\n");
        printf("\n1.phonepe\n2.PAYTM\n3.AMAZON\n4.Googlepay\n");
    printf("select your choice :");
scanf("%d",&pay);
// sleep(1000);
    switch(pay){
        case 1:
        printf("Payment successful\n");
        break;
        case 2:
        printf("Payment successful\n");
        break;
        case 3:
        printf("Payment successful\n");
        break;
        case 4:
        printf("Payment successful\n");
        break;
        // printf("1.cghci\n2.hcajchv\n3.hjcajh\n");
        // scanf("%d",&pay1);
      
        default:
        printf("Enter the valid choice:");
            break;
        }
       
    }

void loading_screen()
{
    ccolor(26);

    for (int i = 1; i <= 10; i++)
    {
    ccolor(26);

        system("cls");
        // printHead();
        printf("\033[03;1m");
        printf("\n\n\n\n\t\t\t\t\t\t    LOADING: %d%%", 10 * i);
        printf("\n\n\t\t\t\t\t\t");
        printf("\033[01;0m");
        printChar('\xdb', 2 * i);
        // printChar('\xdb',120);

        if (i != 100)
        {
        
    ccolor(26);

            printf("\033[1;32m");
            printf("\n\n\n\n\n\t\t\t\t\t\tUPDATING THE ORDER......");
            printf("\033[10m");
            printf("\e[1;10m");
            printf("\n\n\n\n");
            printChar('=', 120);
            printf("\n");
            printChar('\xdb', 120);
            printf("\n");
            printChar('=', 120);
            printf("\033[0m");
            sleep(1);
        }
    }
    ccolor(26);

    printf("\033[1;32m");
    printf("\n\n\n\n\n\t\t\t\t\t\t ORDER HAS BEEN REACHED");
    printf("\033[0m");
    ccolor(26);

    printf("\n\n\t\t\t\t\t\tPress any key to continue... ");
    printf("\e[1;97m");
    printf("\n\n\n\n");
    printChar('=', 120);
    printf("\n");
    printChar('\xdb', 120);
    printf("\n");
    printChar('=', 120);
    printf("\033[0m");
    getch();

}

void track(){
        system("cls");

    ccolor(26);

   printf("\n\n\t\t\tLoading the location of order.");
    Sleep(1000);
    printf("...");//1
    Sleep(2000);
    printf("...");//2
    Sleep(1000);
    printf("..."); //<---------place
    Sleep(1000);
    printf("...");//3
  
    
printf("\n\n\n\tLocation of the order updated every after 1 min");
    //  Sleep(2000);
    printf("\n\n\n\t#Starting Point"); //<---------starting point 
    Sleep(4000);
    printf("->->-");//1
    Sleep(2000);
    printf(">->-");//2
    Sleep(2000);
    // printf(">->-"); 
    // Sleep(2000);
    printf("1.renuka devi madir"); //<---------first point
    printf("->->");//3
    Sleep(2000);
    printf("->->");//4
    Sleep(2000);
    printf("-2.mahavir college"); //<---------second point
    Sleep(4000);
    printf("->->");//5
    Sleep(2000);
    printf("->->");//6
    Sleep(2000);
    printf("-3.casualty dept."); //<---------third point
    Sleep(4000);
    printf("->->");//7
    Sleep(2000);
     printf("->->");//8
    Sleep(2000);
    printf("->->");//9
    Sleep(2000);
    printf("-4.samarat chowk"); //<---------fourth point
    Sleep(4000);
    printf("->->");//10
    Sleep(2000);
    printf("->->");//11
    Sleep(2000);
    printf("->->");//12
    Sleep(2000);
    printf("Reached destination\n\n\n\n"); //<--------Last point


    
    printf("\033[1;32m");
    printf("\n\n\n\n\n\t\t\t\t\t\t ORDER HAS BEEN REACHED");
    printf("\033[0m");
    ccolor(26);

    printf("\n\n\t\t\t\t\t\tPress any key to continue... ");
    printf("\e[1;97m");
    printf("\n\n\n\n");
    printChar('=', 120);
    printf("\n");
    printChar('\xdb', 120);
    printf("\n");
    printChar('=', 120);
    printf("\033[0m");
    getch();

}
void thanks()
{
    // ccolor(26);

    system("cls");
    // printHead();
    printf("\033[01;36m");
    printf("\n\n\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~ < THANKS FOR USING APPLICATION > ~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\033[1;32m");
    printf("\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  < FOOD ORDER SYSTEM > ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\033[01;33m");
    // printf("\n\n\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ < CREATED BY > ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    // printf("\n\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ < RAJVARDHAN KALE > ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\033[0m");
    // sleep(2);
}

typedef struct node
{

    float data;
    char foodname[50];
    int quantity;
    float price;
    struct node *next;

} node;
typedef struct head
{
    node *start;
} head;
void insertend(head *t, float data, char foodname[25], int quantity, float price)
{
    node *p, *q;
    p = (node *)malloc(sizeof(node));
    p->data = data;
    p->quantity = quantity;
    p->price = price;
    strcpy(p->foodname, foodname);
    p->next = NULL;
    if (t->start == NULL)
    {
        t->start = p;
    }
    else
    {
        q = t->start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
}
void ccolor(int clr)
{

    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, clr);
}
void foodlist(head *t)
{

    // printf("\n\t"); ccolor(240);
    // printf("_______________________________________________________");ccolor(26);
    printf("\n\t");
    // ccolor(240);
    printf("  Food Code          Name                Price         ");
    // ccolor(26);
    printf("\n\t");
    // ccolor(240);
    printf("-------------------------------------------------------");
    // ccolor(26);

    node *p;
    p = t->start;
    while (p != NULL)
    {
        printf("\n\t");
        printf("  %0.1f   |  %-25s     |    %0.2f   ", p->data, p->foodname, p->price);
        // ccolor(26);
        printf("\n\t");
        printf("-------------------------------------------------------");
        p = p->next;
    }
}
void foodlist1(head *t)
{
    printf("\n\t");
    // ccolor(240);
    printf("___________________________________________________________________");
    // ccolor(26);
    printf("\n\t");
    // ccolor(240);
    printf("  Food Code       Name                       Quantity      Price   ");
    // ccolor(26);
    printf("\n\t");
    // ccolor(240);
    printf("-------------------------------------------------------------------");
    // ccolor(26);

    node *p;
    p = t->start;
    while (p != NULL)
    {
        printf("\n\t");
        printf("  %0.1f   |  %-25s      |    %2d      |  %0.2f   ", p->data, p->foodname, p->quantity, p->price);
        printf("\n\t");
        printf("------------------------------------------------------------------");
        p = p->next;
    }
}
float getbill(head *t)
{
    node *p;
    float b = 0;
    p = t->start;
    while (p != NULL)
    {
        b = b + p->price;
        p = p->next;
    }
    return b;
}
void order(head *t, head *l, float fc, int qty)
{
    node *p;
    p = t->start;
    while (p->data != fc)
    {
        p = p->next;
    }
    insertend(l, fc, p->foodname, qty, (p->price * qty));
    return;
}
void cls()
{
    system("cls");
}

void main()
{
    information();
    getch();
    heading();
    // location();
   

    int value , option, z ,pay;
                int flag=0;

    // scanf("%d", &value);
    // if (value == 1)
    // {
    head x, s, m, d, o;
    x.start = s.start = m.start = d.start = o.start = NULL;
    float fcode;
    int qty, lo;
    ccolor(26);
    insertend(&s, 1.1, "Samosa", 1, 50);
    insertend(&s, 1.2, "Grilled Cheese Sandwich", 1, 100);
    insertend(&s, 1.3, "Nachos", 1, 150);
    insertend(&s, 1.4, "Chicken Burger", 1, 150);
    insertend(&s, 1.5, "BBQ Chicken Roll", 1, 250);
    insertend(&m, 2.1, "Pav Bhaji", 1, 200);
    insertend(&m, 2.2, "Punjabi Thali", 1, 350);
    insertend(&m, 2.3, "Mexican Sizzler", 1, 250);
    insertend(&m, 2.4, "Peri Peri Chicken Pizza", 1, 250);
    insertend(&m, 2.5, "Margherita Pizza", 1, 200);
    insertend(&m, 2.6, "Veg Pulao", 1, 250);
    insertend(&m, 2.7, "Chicken Handi Biryani", 1, 350);
    insertend(&d, 3.1, "Chocolate Overload Waffle", 1, 150);
    insertend(&d, 3.2, "Cinnamon Waffle", 1, 150);
    insertend(&d, 3.3, "Chocolate Cake", 1, 250);
    insertend(&d, 3.4, "Red Velevet Cake", 1, 350);
    insertend(&d, 3.5, "Strawberry Mouse", 1, 100);
    insertend(&d, 3.6, "Orea Freakshake", 1, 150);
    insertend(&d, 3.7, "Fruit Milkshake", 1, 80);
    // login
    char uid[20], pwd[20], uid1[20], pwd1[20], c = ' ', k = ' ';
    int i = 0, ch;
    while (1)
    {
        cls();
    mainscr:
        heading();
    ccolor(26);
        printf("\n\nEnter Choice:\n1.Login\n2.New User\n3.Exit\n");
    
        scanf("%d", &ch);
        if (ch == 3)
            break;
        // register new user
        if (ch == 2)
        {
            printf(" \n\n                  ENTER USERNAME:-");
            scanf("%s", &uid1);
            printf(" \n\n                  ENTER PASSWORD:-");
            while (i < 20)
            {
                pwd1[i] = getch();
                c = pwd1[i];
                if (c == '\r')
                    break;
                else
                    printf("*");
                i++;
            }
            pwd1[i] = '\0';
            printf("\n\n            Registered Successfully!\n");
            Sleep(2000);
        }
        else
        {
            printf("\n  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  ");
            printf(" \n\n                  ENTER USERNAME:-");
            scanf("%s", &uid);
            printf(" \n\n                  ENTER PASSWORD:-");
            c = ' ';
            i = 0;
            while (i < 20)
            {
                pwd[i] = getch();
                c = pwd[i];
                if (c == '\r')
                    break;
                else
                    printf("*");
                i++;
            }
            pwd[i] = '\0';
            // USERMENU
            if (strcmp(uid, uid1) == 0 && strcmp(pwd, pwd1) == 0)
            {
                printf("\n\n            LOGIN SUCCESFULL!");
                Sleep(2000);
                cls();
                int i, ch;
                // Main screen interface module
                loc:
                location();
            mainmenu:
            cls();
    ccolor(26);

                printf("Enter choice: \n1.View Menu\n2.View Previous Order\n3.Log Out\n");
                scanf("%d", &ch);
                if (ch == 2)
                {
                    if (o.start == NULL)
                    {
                        printf("Previous Order does not exist!\n");
                        Sleep(2000);
                        cls();
                        goto mainmenu;
                    }
                    else
                    {
                        cls();
                        foodlist1(&o);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if (ch == 0)
                        {
                            goto mainmenu;
                        }
                    }
                }
                else if (ch == 1)
                {
                    // selection of order from menu module
                order:
    ccolor(26);

                    cls();
                    printf("Enter Choice:\n");
                    printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                    scanf("%d", &ch);
                    while (1)
                    {
                    do{
                        switch (ch)
                        {
                            
                            
                        case 1:
                            foodlist(&s);
                            printf("\n");
                            printf("Enter Food Code:\n");
                            scanf("%f", &fcode);
                            printf("Enter Quantity of Food:\n");
                            scanf("%d", &qty);
                              if(qty>=0){
                                order(&d, &o, fcode, qty);
                            foodlist1(&o);
                            flag=0;
                             goto afterorder;
                            
                            }
                            else{
                                printf("please Enter positve quantity:");
                                flag=1;
                            break;
                            }
                            break;
                        case 2:
                            foodlist(&m);
                            printf("\n");
                            printf("Enter Food Code:\n");
                            scanf("%f", &fcode);
                            printf("Enter Quantity of Food:\n");
                            scanf("%d", &qty);
                             if(qty>=0){
                                order(&d, &o, fcode, qty);
                            foodlist1(&o);
                            flag=0;

                             goto afterorder;
                            
                            }
                            else{
                                printf("please Enter positve quantity:");
                                flag=1;
                            break;
                            }
                            break;
                        case 3:
                            foodlist(&d);
                            printf("\n");
                            printf("Enter Food Code:\n");
                            scanf("%f", &fcode);
                            printf("Enter Quantity of Food:\n");
                            scanf("%d", &qty);
                            if(qty>=0){
                                order(&d, &o, fcode, qty);
                            foodlist1(&o);
                            flag=0;
                            // goto afterorder;
                            }
                            else{
                                printf("please Enter positve quantity:");
                                flag=1;

                           break;
                            }
                            break;

                        default:
                            printf("Invalid Choice.\n");
                        }
                    }
                    while(flag==1);
                   
                        // After order process  modulee
                    afterorder:
    ccolor(26);
                  
                        printf("\n\n");
                        printf("\n\t\tEnter Choice: \n\t\t1.Hungry For More? \n\t\t2.View Order \n\t\t3.Confirm Order?\n");
                        scanf("%d", &ch);
                        if (ch == 1)
                        {
                            cls();
                            goto order;
                        }
                        else if (ch == 2)
                        {
                            cls();
                            printf("Current Order:\n");
                            foodlist1(&o);
                            goto afterorder;
                        }
                        // billing system of order
                        else if (ch == 3)
                        {
                            cls();
                            foodlist1(&o);
                            printf("\nTotal amount to pay: %0.2f\n", getbill(&o));
                            printf("\nEnjoy Your Meal!\n");
                            printf("\nPress 0 to place your order\n");

                            // printf("\npress 4 to place an order\n");

                            scanf("%d", &ch);
                            if (ch == 0)
                            {
                                cls();
                                // goto mainmenu;
                                goto lastpage;
                            }
                      else
                        printf("\nInvalid Choice.\n");
                        }
                     
                    }

                }
            }
        

            // else if (ch == 3)
            // {
            //     cls();
            //     goto mainscr;
            // }

            // admin acesss module

            else if (strcmp(uid, "admin") == 0 && strcmp(pwd, "admin123") == 0)
            {
                printf("\n\n \t\t           WELCOME ADMIN");
                Sleep(3000);
                cls();
                int adch;
            admin:
    ccolor(26);

                printf("\n\n            Enter Choice:\n");
                printf("            1. View Menu\n");
                printf("            2. Update Menu\n");
                printf("            3. View Recent Order\n");
                printf("            4. Log Out\n");
                scanf("%d", &adch);
                cls();
                if (adch == 4)
                    goto mainscr;
                switch (adch)
                {
                case 1:
                    cls();
                    printf("\nSNACKS:\n");
                    foodlist(&s);
                    Sleep(3000);
                    printf("\nMAIN COURSE:\n");
                    foodlist(&m);
                    Sleep(3000);
                    printf("\nDESSERT:\n");
                    foodlist(&d);
                    printf("\nPress 0 to continue.\n");
                    scanf("%d", &ch);
                    if (ch == 0)
                    {
                    }
                    break;
                case 3: // Sleep(3000);
                    cls();
                    printf("Recent Order:\n");
                    foodlist1(&o);
                    printf("\nPress 0 to continue.\n");
                    scanf("%d", &ch);
                    if (ch == 0)
                    {
                        goto admin;
                    }

                    break;
                case 2:
                    cls();
                    float fcu, pu;
                    char fnameu[50];
                    printf("UPDATE MENU\n");
                    printf("What do you want to update?\n");
                    printf("Enter Choice:\n");
                    printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                    scanf("%d", &ch);
                    switch (ch)
                    {
                    case 1:
                        printf("\nEnter Food Code:\n");
                        scanf("%f", &fcu);
                        printf("\nEnter Food name:\n");
                        scanf("%s", &fnameu);
                        printf("\nEnter price:\n");
                        scanf("%f", &pu);
                        insertend(&s, fcu, fnameu, 1, pu);
                        printf("\nMENU UPDATED\n");
                        foodlist(&s);
                        break;
                    case 2:
                        printf("\nEnter Food Code:\n");
                        scanf("%f", &fcu);
                        printf("\nEnter Food name:\n");
                        scanf("%s", &fnameu);
                        printf("\nEnter price:\n");
                        scanf("%f", &pu);
                        insertend(&m, fcu, fnameu, 1, pu);
                        printf("\nMENU UPDATED\n");
                        foodlist(&m);
                        break;
                    case 3:
                        printf("\nEnter Food Code:\n");
                        scanf("%f", &fcu);
                        printf("\nEnter Food name:\n");
                        scanf("%s", &fnameu);
                        printf("\nEnter price:\n");
                        scanf("%f", &pu);
                        insertend(&d, fcu, fnameu, 1, pu);
                        printf("\nMENU UPDATED\n");
                        foodlist(&d);
                        break;
                    }
                    goto admin;
                    break;

                default:
                    printf("\nInvalid Choice\n");
                }
            }

            else
            {
                printf("\n\n        INVALID USERNAME , PLEASE TYPE CORRECT PASSWORD ");
                Sleep(2000);
            }
        }
        
    }

    // location();
    lastpage:
    ccolor(26);

    payment();
        //   order page  
// printf("Choose your option\n");
 printf("\n\n1.update of the order");
printf("\npress 1 to see the update of order:");
scanf("%d",&option);
switch (option)
{
case 1 :
cls();
printf("your order has been arrived ");
// loading_screen(); // <-------------------------- Loading screen activation here 
track(); // <------------------------------------- Loading the tracking here


    break;
//     case 2 :
//     cls();
// printf("This taking 20 mintues to reach detination\n");

// printf("\n\nEnter 1 to go on order page :");
// scanf("%d",&z);
// if(z==1){
//     goto lastpage;
// }
//     break;
//     case 3 :
//     cls();
// printf("Enter 3\n");
// printf("\n\nEnter 1 to go on order page :");
// scanf("%d",&z);
// if(z==1){
//     goto lastpage;
// }


//     break;
//     case 4:
//     cls();
// printf("Enter 4\n");
// printf("\n\nEnter 1 to go on order page :");

// scanf("%d",&z);
// if(z==1){
//     goto lastpage;
// }

//     break;
//  case 5:
//  exit(0);

default:
printf("Enter the valid option :");

    break;
}
            thanks();
}
// }
