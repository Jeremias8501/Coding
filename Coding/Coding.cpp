#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <windows.h>
#include <string>
#include <ctime>
using namespace std;

class Main {
public:
    void loading(); //Class Method
    void welcome();
};
void Main::loading() {//Loading, Method of Class Main


    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading ";
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading .";
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading ..";
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading ...";
    system("cls");
}
void Main::welcome (){ //Welcome
    system("cls");
    cout<<"  =====================================================================================================================\n";
    cout<<"  =*******************************************************************************************************************=\n";
    cout<<"  =*=================================================================================================================*=\n";
    cout<<"  =*=                                                                                                               =*=\n";
    cout<<"  =*=                                                                                                               =*=\n";
    cout<<"  =*=        **        **   *********  ***         **********   *********   ***        ***  *********               =*=\n";
    cout<<"  =*=        **        **   *********  ***        ***********  ***********  ****      ****  *********               =*=\n";
    cout<<"  =*=        **   ***  **   ***        ***        ***          ***     ***  *****    *****  ***                     =*=\n";
    cout<<"  =*=        **  ****  **   *******    ***        ***          ***     ***  **************  *******                 =*=\n";
    cout<<"  =*=        *** **** ***   *******    ***        ***          ***     ***  ***  ****  ***  *******                 =*=\n";
    cout<<"  =*=        ************   ***        ***        ***          ***     ***  ***        ***  ***                     =*=\n";
    cout<<"  =*=        ****    ****   *********  *********  ***********  ***********  ***        ***  *********               =*=\n";
    cout<<"  =*=        ***      ***   *********  *********   **********   *********   ***        ***  *********               =*=\n";
    cout<<"  =*=                                                                                                               =*=\n";
    cout<<"  =*=================================================================================================================*=\n";
    cout<<"  =*******************************************************************************************************************=\n";
    cout<<"  =====================================================================================================================\n\n\n\n\t\t\t\t\t\t\t";
    Sleep(1000);
    cout<<"Please wait...\n\t";
    for(int i=0;i<100;i++) {
        printf("%c",177);
        Sleep(5);
    }
    Sleep(500);
    cout<<"\n\n\t\t\t\tWELCOME TO ONLINE CLOTHES SHOP MANAGEMENT SYSTEM!\n\n\n\n";
    Sleep(1000);
    system("pause");
    system("cls");
}

class Log_System:public Main {
public:
    char user_username[20];
    char user_password[20];
    char systempassword[20];
    char system_password[20];
    char admin_name[30];
    string admin_age;
    char admin_id[20];
    string admin_gender;
    char admin_address[30];
    char itemno[20];
    char brandname[20];
    string quantity;
    string price;
    int mens_x,womens_x, total;
    int mens_payment;
    int mens_quantity;
    string brand[41]={"Louis Vitton","Gucci","Giorgo Armani","Ballenciaga","The North Face","Rhone","Flinth and Tinder","Outerknown","Bonobos","Wellen","Levi's","Wrangler","Diesel","Lee Jeans","Pepe Jeans","Belstaff","Acne Studios","Uniqlo","Burberry","Moncler","House Of Versace","Chanel","Prada","Dolce Gabbna","Ralph Lauren","Billabong","Hummel","Ellesse","Nike","Puma","Made Well","Everlane","Agolde","AYR","Re/Done","Woodland Jackets","Tommy Hilfiger Jackets","Clavin Klein Jacket","Fort Collins Jackets","Roadster Jackets"};
    double mens_price[41]={00.00,750.00,560.00,850.00,400.00,1000.00,750.00,800.00,450.00,650.00,899.00,900.00,470.00,560.00,750.00,840.00,1000.00,2000.00,2500.00,1500.00,3000.00,900.00,800.00,950.00,600.00,1100.00,850.00,950.00,800.00,700.00,900.00,1000.00,900.00,930.00,850.00,940.00,1500.00,2300.00,3000.00,1300.00,2900.00};
    char mens_color[8]={'R','O','Y','G','V','I','B'};
    string mens_size[9]={"XXS","XXS","XS","S","M","L","XL","XXL"};
    int womens_payment;
    int womens_quantity;
    void admin_form();
    void user_admin();
    void user_homepage();
    void user_mens_apparel();
    void receipt_total();
    void men_slip();
    void greet();
    void receipt_total2();
    void women_slip();
    void user_womens_apparel();
    void validating();
    void proceed();
    void user_profile();
    void searched();
};
class User:public Log_System{
public:
    void user_signing();
    void user_signin();
    void user_signup();
};
class Admin:public Log_System{
public:
    char admin_id[30];
    void sign_up();
    void admin_dashboard();
    void add_item();
    void modify_item();
    void profile();
    void admin_profile();
};

int main() {
    SetConsoleTitle("Made by: Angelo Joseph Jeremias;BSCS 1st-Block A ;12-11-21;");
    Main load;
    //load.loading();
    load.welcome();
    Log_System sfas;
    sfas.user_admin();
return 0;
}
void Admin::sign_up(){
    string get;
    do {
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\tEnter the password: ";
    cin>>systempassword;
    strcpy(system_password,systempassword);
    strcat(system_password,".txt");
    fstream fout(system_password,ios::in|ios::out);

    if(!fout) {
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\tYour password was incorrect \n";
    };
    Sleep(500);
    getline(fout,get);
        system("cls");
    fout.close();

    }while (systempassword!=get); {
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\tYour password is correct.Proceed!\n";
        Sleep(500);
        system("cls");
        Log_System sign;
        sign.validating();
        sign.admin_form();
        sign.user_admin();
    }

}
void Admin::admin_dashboard() {
    string choice;
    char c;
cout<<"\t\t\t\t\t\tDashboard";
cout<<"\n\t===========================================================================";
cout<<"\n\t\t1. Add Product";
cout<<"\n\t\t2. Modify the Product";
cout<<"\n\t\t3. Profile";
cout<<"\n\t\t4. Logout";
cout<<"\n\n\t===========================================================================";
cout<<"\n\n\tEnter your choice: ";
cin>>choice;
if (choice=="1") {
    Admin ai;
    ai.add_item();
} else if (choice=="2") {
    system("cls");
    Admin sdf;
    sdf.modify_item();
    sdf.admin_dashboard();
} else if(choice=="3") {

    system("cls");
    Admin tre;
    tre.admin_profile();
    tre.admin_dashboard();
} else if (choice=="4") {
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
    char logout[9]= {'L','O','G','O','U','T','.','.','.'};

    for(int i=0;i<9;i++) {
        cout<<logout[i]<<"\t";
    Sleep(200);
    }
    system("cls");
    Log_System log;
    log.user_admin();
} else{
    cout<<"The number you enter is invalid!";
    system("cls");
    Admin error;
    error.admin_dashboard();
}
}
void Admin::modify_item() {
char file[50];
char item[20];
cout<<"Enter the item no. you want to modify: ";
cin>>item;
strcpy(file,item);
strcat(file,".txt");
fstream fout(file, ios::in|ios::out);
if (!fout) {
    cout<<"file couldn't be opened. Item no. not found. \n";
} else {
    char file;
    cout<<"File Found!";
    cout<<"\nModify the brandname: ";
    cin.getline(brandname,30);
    cout<<"\nModify the price: ";
    cin>>price;
    cout<<"\nModify the quantity: ";
    cin>>quantity;
    fout<<"\nModify the brandname: "<<brandname<<"\nModify the Price: "<<price<<"\nModify the quantity: "<<quantity;
    fout.close();
    system("cls");
    Admin dash;
    dash.admin_dashboard();
}


}
void Admin::add_item(){

char file[20];
string another;
    cout<<"\t\t\t\tAdd Product";
    cout<<"\nItem no.: ";
    cin>>itemno;
    strcpy(file,itemno);
    strcat(file,".txt");
    ofstream Myproduct(file);
    cout<<"\nItem no: "<<itemno;
    cout<<"\n\nBrand name: ";
    cin>>brandname;
    cout<<"\nQuantity: ";
    cin>>quantity;
    cout<<"\nPrice: ";
    cin>>price;
    Myproduct<<"Brandname: "<<brandname<<endl;
    Myproduct<<"Price: "<<price<<endl;
    Myproduct<<"Quantity: "<<quantity<<endl;
    Myproduct.close();
    system("cls");
    cout<<"\n\nDo you want to add another item:Yes(1)No(2)?";
    cin>>another;
    system("cls");
    if(another=="1") {
        system("cls");
        Admin ai;
    ai.add_item();
    } else if (another=="2") {
    Admin db;
    db.admin_dashboard();
    system("cls");
    } else
    cout<<"\n\n\n\n\n\t\t\t\t\tThe number is invalid\n";
    system("cls");
    Admin gf;
    gf.add_item();
    Sleep(500);
    system("cls");
}

void Log_System::admin_form() {

    cout<<"\n\n\nEnter your new ID:(Name,Age,Present Year) ";
    cin>>admin_id;

    ofstream form(strcat(admin_id,".txt"));
    cout<<"Note:To enter your name and adress you have to use underscore instead of spaces.(Ex.Juan_Dela_Cruz)";
    cout<<"\n\nLast Name: ";
    cin>>admin_name;
    cout<<"\nAge: ";
    cin>>admin_age;
    cout<<"\nGender: ";
    cin>>admin_gender;
    cout<<"\nAddress: ";
    cin>>admin_address;

    form<<"Name: "<<admin_name<<endl;
    form<<"\nAge: "<<admin_age<<endl;
    form<<"\nGender: "<<admin_gender<<endl;
    form<<"\nAddress: "<<admin_address<<endl;
    form.close();
    system("cls");
    cout<<"\n\n\n\n\t";
    char regis[13]={'R','E','G','I','S','T','E','R','E','D','!','!','!'};

    for (int i=0;i<13;i++) {
        cout<<regis[i]<<"\t";
        Sleep(200);
    }
    Sleep(1000);
    system("cls");
}

void Log_System::validating(){

string choice;
    char file[30];
    cout<<"\n\n\t\t\tDo you already have an account?Yes(1)No(2)\n";
    cin>>choice;

    if(choice=="1") {
        system("cls");
        cout<<"Please enter your ID: ";
        cin>>admin_name;
        strcpy(file,admin_name);
        strcat(file,".txt");
        fstream fout (file,ios::in|ios::out);
        if(fout) {
            system("cls");
            Admin sign;
        sign.admin_dashboard();
        } else {
            cout<<"You don't have yet an account";
        fout.close();
        Log_System asd;
        asd.proceed();
        }

    }else if(choice=="2") {
        system("cls");
        Log_System sad;
        sad.admin_form();
        sad.user_admin();
    } else {
        cout<<"The number is invalid";
        Sleep(500);
        system("cls");
        Log_System fd;
        fd.admin_form();
        fd.user_admin();
    }
}

void Log_System::user_admin () { //Someone who are using this must choose between the two(1)

    string choice;
cout<<"\t\t\t\tWELCOME TO ONLINE CLOTHES SHOP MANAGEMENT SYSTEM";
cout<<"\n\t\t\t\t7TH STREET,BARANGGAY ESTACION,PANIQUI,TARLAC,PHILIPPINES"<<"\n\t\t\t\tCellphone no:09083454738";
cout<<"\n\t\t\t\tMIN:4326789430297856"<<"\tSN:295047224";
time_t now=time(0);
char* dt=ctime(&now);
cout<<"\n\t\t\t\tThe local date and time is:"<<dt<<endl;
cout<<"\n\t\tPlease choose below: \n\t";
cout<<"==================================================================================================";
cout<<"\n\n\n\t\t\t\t\t-->1. User";
cout<<"\n\n\n\t\t\t\t\t-->2. Admin";
cout<<"\n\n\n\t\t\t\t\t-->3. EXIT\n\n\n\n\n\n\t";
cout<<"==================================================================================================";
cout<<"\n\t\t\t\tEnter your choice: ";
    cin>>choice;

    cout<<"\aYou choose: "<<choice;
    system("cls");

    if (choice=="1") { //Signing In
        User us;
        us.user_signing();
    } else if (choice=="2") { //Signing Up
        system("cls");
        Admin afd;
        afd.sign_up();
        afd.admin_dashboard();
        Sleep(200);
        system("cls");
        Log_System ua;
        ua.user_admin();
    } else if (choice=="3") { // Restarting
        cout<<"\n\n\n\n\n\n\n\t\t\t\t\tThank for using our system\n\n\n";
        Sleep(200);
        Log_System na;
        welcome();
        na.user_admin();
    } else
    cerr<<"\n\n\n\n\t\t\t\t\tThe number you enter is invalid\a";
    Sleep(200);
    system("cls");
    Log_System ml;
    ml.user_admin();
}

void User::user_signing () { //Choosing if the user wants to Sign Up or Sign in (2)



    string choice;
    cout<<"\n\n\t\t\t\t\tGood Day ! Welcome Aboard! \n";
    cout<<"\t\t\t\t\tHow may I help you??\n\t";
    cout<<"==================================================================================================";
    cout<<"\n\n\n\t\t\t\t\t-->1. Sign In";
    cout<<"\n\n\n\t\t\t\t\t-->2. Sign Up";
    cout<<"\n\n\n\t\t\t\t\t-->3. Back";
    cout<<"\n\n\n\t\t\t\t\t-->4. EXIT\n\n\n\n\t";
    cout<<"==================================================================================================";

    cout<<"\n\t\t\t\tEnter a choice: ";
    cin>>choice;
    Beep(500,500);

    if (choice=="1") { //When the user signed his account
        system("cls");
        User sgf;
        sgf.user_signin();

    } else if (choice=="2") { //When user make a new account
        system("cls");
        User user;
        user.user_signup();
        Sleep(200);
        system("cls");

        user.user_signing();
    } else if (choice=="3") { //Back to previous page
        system("cls");
        Log_System list;
        list.user_admin();
    } else if (choice=="4") { //Log out
        system("cls");
        cout<<"\n\n\n\n\n\n\n\t\t\t\t\tThank for using our system";
        system("cls");
        welcome();
        Log_System list;
        list.user_admin();
    } else {                   //For Invalid input
        system("cls");
        cout <<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tInvalid Input.";
        system("cls");
        User list;
        list.user_signing();
    }

}

void User::user_signin () { //The user put his username and password
    char file[20];
    char username[20];

    system("cls");

    cout<<"\t\t\t\t\t\tSIGN IN\n";
    cout<<"\t==================================================================================================\n";

    cout<<"\t\t\t\tType your username: ";
    cin>>username;
    strcpy(file,username);
    strcat(file,".txt");

    cout<<"\n\t\t\t\tType your password: ";
    cin>>user_password;
    fstream searching(file,ios::in|ios::out);
    cout<<"\n\n\n\t==================================================================================================";
    Sleep(50);
    if(!searching) {
        cout<<"\n\t\t\t\t\tWrong username and password";
        Sleep(500);
        system("cls");
        User iop;
        iop.user_signing();
    } else
    cout<<"\n\n\n\t\t\t\tThe username and password was correct.Proceed!\n\n";
    Sleep(1000);
    cout<<"\n\nYou successfully login";
    Sleep(500);
    system("cls");
    Log_System login;
    login.user_homepage();
    searching.close();


}

void User::user_signup() {
    char file[20];
    char type[20];
    cout<<"Input new account";
    cout<<"\nEnter your username: ";
    cin>>type;
    strcpy(file,type);
    strcat(file,".txt");
    ofstream signup(file);
    cout<<"Enter your password: ";
    cin>>user_password;
    signup<<user_username<<endl;
    signup<<user_password<<endl;
    signup.close();
    system("cls");
    char you[3]={'Y','O','U'};
    char succ[12]={'S','U','C','C','E','S','S','F','U','L','L','Y'};
    char sign[6]={'S','I','G','N','E','D'};
    char up[3]={'U','P','!'};

    cout<<"\n\n\n\n\n\t\t\t\t\t";
    for (int i=0;i<3;i++){
        cout<<you[i];
        Sleep(100);

    }
    cout<<" ";
        for (int i=0;i<12;i++){
        cout<<succ[i];
        Sleep(100);

    }
    cout<<" ";
        for (int i=0;i<6;i++){
        cout<<sign[i];
        Sleep(100);

    }
    cout<<" ";
        for (int i=0;i<3;i++){
        cout<<up[i];
        Sleep(100);

    }
    cout<<" ";
    Sleep(1000);
}

void Log_System::user_homepage() {
    string choice;
    int mens_choice;
    int womens_choice;
    int num;
    system("cls");
    cout<<"-------------------------------------------->DASHBOARD<---------------------------------------------------\n";
    cout<<"\tCategory(1)\tSearch Product(2)\tLogout(3)\t\t\n\n\n\n";
    cout<<"Welcome to the Online Clothes Shop!";
    cout<<"\n\nPlease choose number from above: ";
    cin>>choice;

    if(choice=="1") {//Category
            do{
                system("cls");
                cout<<"\t\t\t\t\t\tCategory\n";
                cout<<"\t\t\t\t\t\t\n1. Men's Apparel";
                cout<<"\t\t\t\t\t\t\n2. Women's Apparel";
                cout<<"\nEnter a choice: ";
                cin>>choice;


            }while (choice!="1" && choice!="2");{
                if (choice=="1") {
                        Log_System jkl;
                        jkl.user_mens_apparel();
                        jkl.men_slip();
                        jkl.receipt_total();
                        jkl.greet();

                } else if(choice=="2") {
                        Log_System asd;
                        asd.user_womens_apparel();
                        asd.women_slip();
                        asd.receipt_total2();
                        asd.greet();
                } else {
                cout<<"The number you enter is invalid!";
                Sleep(1000);
                Log_System ghj;
                ghj.user_homepage();
                }
            }

    } else if (choice=="2") { //Search Product

            cout<<"1. Search Product\n";
            cout<<"2. Back";
            cout<<"\n\nEnter the number you choose: \n";
            cin>>num;
                if (num==1) {
                 Log_System fgh;
                 fgh.searched();
                 system("cls");
                 fgh.user_homepage();
                } else if (num==2) {
                    system("cls");
                    Log_System fas;
                    fas.user_homepage();
                }
            Log_System product;
            product.user_homepage();
    } else if (choice=="3")  {//Logout
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
            char logout[9]= {'L','O','G','O','U','T','.','.','.'};

            for(int i=0;i<9;i++) {
                cout<<logout[i]<<"\t";
            Sleep(200);
            }
            system("cls");
            Log_System out;
            out.user_admin();

    } else
            cout<<"\n\n\n\n\n\t\t\t\tThe number you enter is invalid!!";
            Log_System error;
            error.user_homepage();

}

void Log_System::user_mens_apparel() {
cout<<"\n\n\n\t->Men's Apparel<-\n";
cout<<"\n========================================================================================================";
cout<<"\n\tTops";
Sleep(00);
cout<<"\n========================================================================================================";
cout<<"\n1. Louis Vitton................................................................................P750.00";
cout<<"\n2. Gucci.......................................................................................P560.00";
cout<<"\n3. Giorgo Armani...............................................................................P850.00";
cout<<"\n4. Ballenciaga.................................................................................P400.00";
cout<<"\n5. The North Face..............................................................................P1000.00";
cout<<"\n========================================================================================================";
Sleep(200);
cout<<"\n\tShorts";
Sleep(200);
cout<<"\n========================================================================================================";
cout<<"\n6. Rhone.......................................................................................P750.00";
cout<<"\n7. Flinth and Tinder...........................................................................P800.00";
cout<<"\n8. Outerknown..................................................................................P450.00";
cout<<"\n9. Bonobos.....................................................................................P650.00";
cout<<"\n10 Wellen......................................................................................P899.00";
cout<<"\n========================================================================================================";
Sleep(200);
cout<<"\n\tJeans";
Sleep(200);
cout<<"\n========================================================================================================";
cout<<"\n11. Levi's.....................................................................................P900.00";
cout<<"\n12. Wrangler...................................................................................P470.00";
cout<<"\n13. Diesel.....................................................................................P560.00";
cout<<"\n14. Lee Jeans..................................................................................P750.00";
cout<<"\n15. Pepe Jeans.................................................................................P840.00";
cout<<"\n========================================================================================================";
Sleep(200);
cout<<"\n\tJackets";
Sleep(200);
cout<<"\n========================================================================================================";
cout<<"\n16. Belstaff...................................................................................P1000.00";
cout<<"\n17. Acne Studios...............................................................................P2000.00";
cout<<"\n18. Uniqlo.....................................................................................P2500.00";
cout<<"\n19. Burberry...................................................................................P1500.00";
cout<<"\n20. Moncler....................................................................................P3000.00";
cout<<"\n========================================================================================================";
Sleep(200);
}

void Log_System::user_womens_apparel() {
    cout<<"\t->Women Apparels<-\n";
cout<<"\n========================================================================================================";
cout<<"\n\tTops";
Sleep(200);
cout<<"\n========================================================================================================";
cout<<"\n11. House of Versace............................................................................P900.00";
cout<<"\n12. Chanel......................................................................................P800.00";
cout<<"\n13. Prada.......................................................................................P950.00";
cout<<"\n14. Dolce Gabbna................................................................................P600.00";
cout<<"\n15. Ralph Lauren................................................................................P1100.00";
cout<<"\n========================================================================================================";
Sleep(200);
cout<<"\n\tShorts";
Sleep(200);
cout<<"\n========================================================================================================";
cout<<"\n16. Billabong...................................................................................P850.00";
cout<<"\n17. Hummel......................................................................................P950.00";
cout<<"\n18. Ellesse.....................................................................................P800.00";
cout<<"\n19. Nike........................................................................................P700.00";
cout<<"\n20 Puma........................................................................................P900.00";
cout<<"\n========================================================================================================";
Sleep(200);
cout<<"\n\tJeans";
Sleep(200);
cout<<"\n========================================================================================================";
cout<<"\n21. Made Well..................................................................................P1000.00";
cout<<"\n22. Everlane...................................................................................P900.00";
cout<<"\n23. Agolde.....................................................................................P930.00";
cout<<"\n24. AYR........................................................................................P850.00";
cout<<"\n25. Re/Done....................................................................................P940.00";
cout<<"\n========================================================================================================";
Sleep(200);
cout<<"\n\tJackets";
Sleep(200);
cout<<"\n========================================================================================================";
cout<<"\n26. Woodlang Jackets..........................................................................P1500.00";
cout<<"\n27. Tommy Hilfiger Jackets....................................................................P2300.00";
cout<<"\n28. Clavin Klein Jackets......................................................................P3000.00";
cout<<"\n29. Fort Collins Jackets......................................................................P1300.00";
cout<<"\n30. Roadster Jackets......................................................................... P2900.00";
cout<<"\n========================================================================================================";
Sleep(200);

}
void Log_System::men_slip() {
    cout<<"\n\nYou choose: ";
    cin>>womens_x;

    system("cls");
    cout<<"\n====================================================================================================";
    cout<<"\nName of item: "<<brand[mens_x];
    cout<<"\nQuantity: ";
    cin>>mens_quantity;
    cout<<"\nColor: ";
    cout<<"\n\n1. Red";
    cout<<"\t2. Orange";
    cout<<"\t3. Yellow";
    cout<<"\t4. Green";
    cout<<"\t5.Violet";
    cout<<"\t6. Indigo";
    cout<<"\t7. Blue";
    cout<<"\nYou choose: ";
    cin>>womens_x;
    cout<<mens_color[womens_x];
    cout<<"\nSizes: ";
    cout<<"\n\n1. Extra Extra Small";
    cout<<"\t2. Extra Small";
    cout<<"\t3. Small";
    cout<<"\t4. Medium";
    cout<<"\t5. Large";
    cout<<"\t6.Extra Large";
    cout<<"\t7. Extra Extra Large";
    cout<<"\nYou choose: ";
    cin>>womens_x;
    cout<<mens_size[womens_x];
    cout<<"\nPrice of the item: P"<<mens_price[womens_x];
    total=mens_quantity*mens_price[womens_x];
    Sleep(1000);
    system("cls");
}

void Log_System::women_slip() {
cout<<"\n\nYou choose: ";
    cin>>womens_x;

    system("cls");
    cout<<"\n====================================================================================================";
    cout<<"\nName of item: "<<brand[mens_x];
    cout<<"\nQuantity: ";
    cin>>womens_quantity;
    cout<<"\nColor: ";
    cout<<"\n\n1. Red";
    cout<<"\t2. Orange";
    cout<<"\t3. Yellow";
    cout<<"\t4. Green";
    cout<<"\t5.Violet";
    cout<<"\t6. Indigo";
    cout<<"\t7. Blue";
    cout<<"\nYou choose: ";
    cin>>womens_x;
    cout<<mens_color[womens_x];
    cout<<"\nSizes: ";
    cout<<"\n\n1. Extra Extra Small";
    cout<<"\t2. Extra Small";
    cout<<"\t3. Small";
    cout<<"\t4. Medium";
    cout<<"\t5. Large";
    cout<<"\t6.Extra Large";
    cout<<"\t7. Extra Extra Large";
    cout<<"\nYou choose: ";
    cin>>womens_x;
    cout<<mens_size[womens_x];
    cout<<"\nPrice of the item: P"<<price[womens_x];
    total=womens_quantity*price[womens_x];
    Sleep(1000);
    system("cls");
}
void Log_System::receipt_total(){
    cout<<"\n====================================================================================================";
    cout<<"\n\t\t\t\t\tONLINE CLOTHES SHOP MANAGEMENT SYSTEM";
    cout<<"\nGST ID: 008912423452"<<"\t VAT Registered: TIN:098-778-345-0000";
    cout<<"\n\t\t\t\t\tMIN:4326789430297856"<<"\tSN:295047224";"\n====================================================================================================\n";
    cout<<"\nSALES INVOICE NO.:00122324543"<<"\nTRANSACTION NO.:0000303886"<<"\nAdmin:"<<admin_name;
    cout<<"\nDATE:12-14-21"<<"\t\t\t\t\t\t\tTIME: 09:03:00 AM";
    cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
    cout<<"\n\tBrand"<<"\t\tQuantity"<<"\t\tColor"<<"\t\tSize"<<"\t\tPrice";
    cout<<"\n\t"<<brand[mens_x]<<"\t\t"<<mens_quantity<<"\t\t"<<mens_color[mens_x]<<"\t\t"<<mens_size[mens_x]<<"\t\t"<<mens_price[mens_x]<<".00";
    cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
    cout<<"\nTOTAL AMOUNT DUE: P"<<total<<".00";
    do {
        cout<<"\nCASH: P";
    cin>>mens_payment;

    } while (mens_payment<total); {
    mens_payment-=total;
    cout<<"CHANGE: P"<<mens_payment<<".00";
    cout<<"\n====================================================================================================";
    cout<<"\n\t\t\t\t\t\tCUSTOMER INFORMATION";
    cout<<"\nNAME:______________________________________________________";
    cout<<"\nADDRESS:______________________________________________________";
    cout<<"\nTIN:______________________________________________________";
    cout<<"\nBUS.TYPE:______________________________________________________";
    cout<<"\n====================================================================================================\n\n";

    system("pause");
    }


}

void Log_System::receipt_total2(){
cout<<"\n====================================================================================================";
    cout<<"\n\t\t\t\t\tONLINE CLOTHES SHOP MANAGEMENT SYSTEM";
    cout<<"\nGST ID: 008912423452"<<"\t VAT Registered: TIN:098-778-345-0000";
    cout<<"\n\t\t\t\t\tMIN:4326789430297856"<<"\tSN:295047224";"\n====================================================================================================\n";
    cout<<"\nSALES INVOICE NO.:00122324543"<<"\nTRANSACTION NO.:0000303886"<<"\nAdmin:"<<admin_name;
    cout<<"\nDATE:12-14-21"<<"\t\t\t\t\t\t\tTIME: 09:03:00 AM";
    cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
    cout<<"\n\tBrand"<<"\t\tQuantity"<<"\t\tColor"<<"\t\tSize"<<"\t\tPrice";
    cout<<"\n\t"<<brand[womens_x]<<"\t\t"<<womens_quantity<<"\t\t\t"<<mens_color[womens_x]<<"\t\t"<<mens_size[womens_x]<<"\t\t"<<price[womens_x]<<".00";
    cout<<"\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ";
    cout<<"\nTOTAL AMOUNT DUE: P"<<total<<".00";
    do {
    cout<<"\nCASH: P";
    cin>>womens_payment;

    } while (womens_payment<total); {
    womens_payment-=total;
    cout<<"CHANGE: P"<<womens_payment<<".00";
    cout<<"\n====================================================================================================";
    cout<<"\n\t\t\t\t\t\tCUSTOMER INFORMATION";
    cout<<"\nNAME:______________________________________________________";
    cout<<"\nADDRESS:______________________________________________________";
    cout<<"\nTIN:______________________________________________________";
    cout<<"\nBUS.TYPE:______________________________________________________";
    cout<<"\n====================================================================================================\n\n";

    system("pause");

    }
}
void Log_System::greet() {
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\tThank you for buying our product! Please come again!";
    Sleep(1500);
    system("cls");
    Log_System nbv;
    nbv.user_homepage();
}

void Admin::admin_profile() {
    char file[30];
        cout<<"Enter your ID: ";
    cin>>admin_id;

    strcpy(file,admin_id);
    strcat(file,".txt");
    ifstream fout (file);
    if(!fout) {
        cout<<"\n\nI.D couldn't be found,please enter another\n\n";
        system("cls");

    }

    if(fout.is_open() ){
        char mytext;
        while(fout) {
            mytext=fout.get();
            cout<<mytext;
        }
    fout.close();
    cout<<endl<<endl;
    system("pause");
    system("cls");
}
}
void Log_System::proceed() {
    string choice;
    system("cls");
    for (int i=0;i<100;i++){
        cout<<"=";
    };
    cout<<"\n\n\n1. Create a new account?";
    cout<<"\n2. Enter again";
    cout<<"\n3. Back\n\n\n";
    for (int j=0;j<100;j++){
        cout<<"=";
    };
    cout<<"\nEnter your choice: ";
    cin>>choice;
    if(choice=="1") {
            system("cls");
        Log_System hgj;
        hgj.admin_form();
        system("cls");
        hgj.user_admin();
    } else if(choice=="2"){
        system("cls");
        Log_System ert;
        ert.validating();
    } else if (choice=="3") {
        system("cls");
        Log_System uio;
        uio.user_admin();
    } else {
        system("cls");
        cout<<"The number you enter is invalid";
        Log_System plk;
        plk.proceed();
    }
}

void Log_System::user_profile() {
    char file[30];
        cout<<"Enter the ID: ";
    cin>>admin_id;

    strcpy(file,admin_id);
    strcat(file,".txt");
    ifstream fout (file);
    if(!fout) {
        cout<<"\n\nI.D couldn't be found,please enter another\n\n";
        system("cls");

    }

    if(fout.is_open() ){
        char mytext;
        while(fout) {
            mytext=fout.get();
            cout<<mytext;
        }
    fout.close();
    cout<<endl<<endl;
    system("pause");
    system("cls");
}
}

void Log_System::searched() {
    char file[30];
        cout<<"Enter the item no.: ";
    cin>>admin_id;

    strcpy(file,admin_id);
    strcat(file,".txt");
    ifstream fout (file);
    if(!fout) {
        cout<<"\n\nI.D couldn't be found,please enter another\n\n";
        system("cls");

    }

    if(fout.is_open() ){
        char mytext;
        while(fout) {
            mytext=fout.get();
            cout<<mytext;
        }
    fout.close();
    cout<<endl<<endl;
    system("pause");
    system("cls");

}
}
