#include <iostream>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <limits>
#include <conio.h>
#include <windows.h>

using namespace std;

  ///////////////////////////////////////// Base class for all students/////////////////////////////////////////
class student
{

    private:
    string fname ,lname,grade,result;
    float phy,mat,cse,ece,bcu,bsu,evs,flu,minor,per,total;
    char str1[6],str2[6],str3[6],str4[6];
public:
////////////////////////////////////////////using_friend_function////////////////////////////////////////////////    
        friend void setmarks();
        friend void getmarks();
        friend void attendance();
        friend void add_att();
/////////////////////////////////////////////////attendance//////////////////////////////////
    void attendance()
    {
        system("cls");
    system("color 0b");
    cout<<"\n\n\n\n\n\t\t\t\t\tLoading Your Attendance";
    char x =219;
    for(int i=0;i<=35;i++)
    {
        cout<<x;
        if(i<10)
        Sleep(300);
        if(i>=10 && i<20)
        Sleep(150);
        if(i>=10)
        Sleep(25);
    }

    system("cls");
    cout<<"\n\n\n\n\t\t                       ATTENDANCE:"<<endl;
        cout<<"                         =========================================\n";
        cout<<"                                  Today's attendance\n";
        cout<<"                         =========================================\n";
        cout<<"                          physics                  :-"<<str1<<endl;
        cout<<"                          Maths                    :-"<<str2<<endl;
        cout<<"                          CSE                      :-"<<str3<<endl;
        cout<<"                          Electrical               :-"<<str4<<endl;
        cout<<"                         =========================================\n";
        cout<<"Hear P is for PRESENT ,A is for ABSENT and OD for ONDUTY\n";
        
    }
void add_att()
{ 
    cout<<"Enter today's attendance\n";
    cout<<"Physics:\n";
    cin>>str1;
    cout<<"Maths:\n";
    cin>>str2;
    cout<<"CSE:\n";
    cin>>str3;
    cout<<"Elecrical:\n";
    cin>>str4;
    
}

///////////////////////////////////////////////////RESULT//////////////////////////////////////////////////////// 
void setmarks()
{
    system("color 0b"); 
      cout<<"Enter First Name:"<<endl;
      cin>> fname;
      cout<<"Enter last Name:"<<endl;
      cin>> lname;
      {
      cout<<"Enter Physics marks"<<endl;
      cin>>phy;
      
        while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>phy;
          }while(phy>100);
        }
        if(!cin.fail())
         break;
      }
        
      }
      cout<<"Enter Maths marks"<<endl;
      cin>>mat;
      
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>mat;
          }while(mat>100);
        }
        if(!cin.fail())
         break;
      }

      cout<<"Enter OOP using C++ marks"<<endl;
      cin>>cse;
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>cse;
          }while(cse>100);
        }
        if(!cin.fail())
         break;
      }

      cout<<"Enter Electrical Engg. marks"<<endl;
      cin>>ece;
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>ece;
          }while(ece>100);
        }
        if(!cin.fail())
         break;
      }

      cout<<"Enter communication skills marks\n";
      cin>>bcu;
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>bcu;
          }while(bcu>100);
        }
        if(!cin.fail())
         break;
      }

      cout<<"Enter behavioural science marks\n";
      cin>>bsu;
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>bsu;
          }while(bsu>100);
        }
        if(!cin.fail())
         break;
      }

      cout<<"Enter Environmental science marks\n";
      cin>>evs;
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>evs;
          }while(evs>100);
        }
        if(!cin.fail())
         break;
      }

      cout<<"Enter French marks\n";
      cin>>flu;
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>flu;
          }while(flu>100);
        }
        if(!cin.fail())
         break;
      }

      cout<<"Enter minor track marks\n";
      cin>>minor;
      while(1)
      {
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout<<"You have entered wrong input"<<endl;
          do{
          cin>>minor;
          }while(minor>100);
        }
        if(!cin.fail())
         break;
      }
    
      total=phy+mat+cse+ece+bsu+bcu+evs+minor+flu;
      per=total/9;
}

void getmarks()
{
    system("cls");
    system("color 0b");
    cout<<"\n\n\n\n\n\t\t\t\t\tLoading Result";
    char x =219;
    for(int i=0;i<=35;i++)
    {
        cout<<x;
        if(i<10)
        Sleep(300);
        if(i>=10 && i<20)
        Sleep(150);
        if(i>=10)
        Sleep(25);
    }

    system("cls");
    cout<<"\n\n\n\n\t\tRESULT"<<endl;
    

    system("color 0d");        
    cout<<"******************************************************************************************************\n";
    cout<< "Student Name ------- "<<fname<<" "<<lname<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Subject                                           |                            Marks"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
  
    cout<<"Phyics                                            |                           "<<phy<<endl;
    cout<<"Maths                                             |                           "<<mat<<endl;
    cout<<"OOP using C++                                     |                           "<<cse<<endl;
    cout<<"Electrical Engg.                                  |                           "<<ece<<endl;
    cout<<"Communication skills                              |                           "<<bcu<<endl;
    cout<<"Behavioural science                               |                           "<<bsu<<endl;
    cout<<"Environmental science                             |                           "<<evs<<endl;
    cout<<"French                                            |                           "<<flu<<endl;
    cout<<"Minor track                                       |                           "<<minor<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"total                                             |                           "<<total<<endl;
    cout<<"percentage                                        |                           "<<per<<endl;
    cout<<"******************************************************************************************************\n";
   if(per>=80)
   {
   	 grade="A";
   	 result="PASS";
      cout<<"passed with first devision\n";

   }
   else if(per>=60)
   {
   	grade="B";
   	result="PASS";
      cout<<"passed with second devision\n";
   }
   else if(per>=35)
   {
   	grade="C";
   	result="PASS";
     cout<<"passed with third devision\n";

   }
   else
   {
   	grade="-";
   	result="FAIL";
    
   }

   cout<<"grade:                                          "<<grade<<endl;
   cout<<"result:                                        "<<result<<endl;
   cout<<"*******************************************************************************************************\n";
 }
};    
//////////////////////////////////using_herarical_inheritance////////////////////////////////////////
//////////////////////////////////first_derived_class_from_student////////////////////////////////////////  
class details:public student                               
{
    public:
      //  void faculty();
       // void course();
/////////////////////////////////////////////////FACULTY///////////////////////////////////////////////////////////        
        void faculty()
        {
            system("cls");
            system("color 0c");
             int choice;
        cout<<"Enter subject/code:\n1 :-Applied maths\n2 :- Applied physics\n3 :- basic electricl engg.\n4 :- electrical lab\n5 :- Aplied physics lab\n";
        cout<<"6 :- behaviour science\n7 :- communication skills\n8 :- cyber security\n9 :- french\n10 :- EVS\n11 :- Object oriented programing\n";
        cout<<"12 :- oops lab\n13 :- workshop\n";
        cin>>choice;    
                   switch (choice)
                     {
                        case 1:
                              cout<<"faculty name:- Dr. Ram Kumar"<<endl;                                     
                              cout<<"contact faculty:-.........."<<endl;      
                              break;     


                         case 2:
                             cout<<"faculty name:- Dr. snehal jani"<<endl;
                             cout<<"contact faculty:-.........."<<endl;
                             break;


                         case 3:
                             cout<<"faculty name:- Dr. neelam arya"<<endl;
                             cout<<"contact faculty:-.........."<<endl;
                             break;


                         case 4:
                             cout<<"faculty name:- Dr. neelam arya"<<endl;
                             cout<<"contact faculty:-.........."<<endl;
                             break;


                         case 5:
                              cout<<"faculty name:- Dr. snehal jani"<<endl;
                              cout<<"contact faculty:-.........."<<endl;
                              break;


                         case 6:
                             cout<<"faculty name:- Mr.sourabh kushwah"<<endl;
                             cout<<"contact faculty:-.........."<<endl;
                             break;


                         case 7:
                             cout<<"faculty name:- Dr. bishakha mandal"<<endl;
                             cout<<"contact faculty:-.........."<<endl;    
                             break;


                         case 8:
                             cout<<"faculty name:- Mrs.nidhi tripathi"<<endl;
                             cout<<"contact faculty:-.........."<<endl;  
                             break;


                         case 9:
                             cout<<"faculty name:- Ms Minnee Priya"<<endl;
                             cout<<"contact faculty:-.........."<<endl;    
                             break;
                     

                         case 10:
                             cout<<"faculty name:- Dr. jay prakash thakur"<<endl;
                             cout<<"contact faculty:-.........."<<endl;
                             break;
                     

                         case 11:
                             cout<<"faculty name:- Dr.nikhlesh pathik"<<endl;
                             cout<<"contact faculty:-.........."<<endl;
                             break;
                     

                         case 12:
                             cout<<"faculty name:- Dr.nikhlesh pathik"<<endl;
                             cout<<"contact faculty:-.........."<<endl;
                             break;
                     

                         case 13:
                             cout<<"faculty name:- Dr.rabindra prasad"<<endl;
                             cout<<"contact faculty:-.........."<<endl;  
                             break;
                     

                         default:
                            cout<<"no such data found\n try again";
                     }   

        }  
///////////////////////////////////////////////////COURSE////////////////////////////////////////////////////////        
         void course()
          {
             cout << "Engineering Course Details" << endl;
    cout << "----------------------------------" << endl;

    cout << "Course Code: CSE204" << endl;
    cout << "Course Name: Object  Oriented Programming using C++" << endl;
    cout << "Credits: 4" << endl;
    cout << "----------------------------------" << endl;

    cout << "Course Code: MTH201" << endl;
    cout << "Course Name: Applied Maths" << endl;
    cout << "Credits: 4" << endl;
    cout << "----------------------------------" << endl;


    cout << "Course Code: PHY101" << endl;
    cout << "Course Name: Applied Physics" << endl;
    cout << "Credits: 4" << endl;
    cout << "----------------------------------" << endl;


    
    cout << "Course Code: ECE101" << endl;
    cout << "Course Name: Basic Electrical Engg." << endl;
    cout << "Credits: 3" << endl;
    cout << "----------------------------------" << endl;



    cout << "Course Code: BSU214" << endl;
    cout << "Course Name: Communication Skills" << endl;
    cout << "Credits: 4" << endl;
    cout << "----------------------------------" << endl;

          }                                              
}; 
///////////////////////////////////////another_derived_class_from_student(second)///////////////////////////
class notice: public student
{
    public:
//void timetable();
//void scholarship();
//void fest();
//////////////////////////////////////////TIMETABLE//////////////////////////////////////////////////////////
void  timetable()
{ 
    system("cls");
    system("color 0b");
       string choice;
       cout<<"                **********Enter day**********               "<<endl;
       cin>>choice;
         if(choice=="sunday")
          {
           cout<<"sunday for Sleep";

          }
         else if(choice=="monday")
         {

             cout<<"timing:-09:15 to 10:10 [CBSC]"<<endl;
             cout<<"timing:-10:15 to 11:10 [PHYSICS]"<<endl;
             cout<<"timing:-11:15 to 12:10 [MATHS]"<<endl;
             cout<<"timing:-12:15 to 01:10 [LUNCH]"<<endl;
             cout<<"timing:-01:15 to 02:10 [MATHS]"<<endl;
             cout<<"timing:-02:15 to 03:10 [EVS]"<<endl;
             cout<<"timing:-03:15 to 04:10 [LIBRARY]"<<endl; 
             cout<<"timing:-03:15 to 04:10 [LIBRARY]"<<endl;   
         
         }
        else if(choice=="tuesday")
        {

            cout<<"timing:-09:15 to 10:10 [CSE LAB]"<<endl;
            cout<<"timing:-10:15 to 11:10 [CSE LAB]"<<endl;
            cout<<"timing:-11:15 to 12:10 [MATHS]"<<endl;
            cout<<"timing:-12:15 to 01:10 [LUNCH]"<<endl;
            cout<<"timing:-01:15 to 02:10 [MATHS]"<<endl;
            cout<<"timing:-02:15 to 03:10 [CSE]"<<endl;
            cout<<"timing:-03:15 to 04:10 [PHYSICS]"<<endl; 
            cout<<"timing:-03:15 to 04:10 [LIBRARY]"<<endl;   
        
                
        }
        else if(choice=="wednesday")
        { 

            cout<<"timing:-09:15 to 10:10 [CBCS]"<<endl;
            cout<<"timing:-10:15 to 11:10 [CBCS]"<<endl;
            cout<<"timing:-11:15 to 12:10 [MATHS]"<<endl;
            cout<<"timing:-12:15 to 01:10 [LUNCH]"<<endl;
            cout<<"timing:-01:15 to 02:10 [BSU]"<<endl;
            cout<<"timing:-02:15 to 03:10 [FRENCH]"<<endl;
            cout<<"timing:-03:15 to 04:10 [ECE]"<<endl; 
            cout<<"timing:-04:15 to 05:10 [LIBRARY]"<<endl;   
                
        }
        else if(choice=="thrusday")
        {

            cout<<"timing:-09:15 to 10:10 [MATHS]"<<endl;
            cout<<"timing:-10:15 to 11:10 [PHYSICS]"<<endl;
            cout<<"timing:-11:15 to 12:10 [BCU]"<<endl;
            cout<<"timing:-12:15 to 01:10 [LUNCH]"<<endl;
            cout<<"timing:-01:15 to 02:10 [CSE]"<<endl;
            cout<<"timing:-02:15 to 03:10 [ECE]"<<endl;
            cout<<"timing:-03:15 to 04:10 [PHYSICS LAB]"<<endl; 
            cout<<"timing:-04:15 to 05:10 [PHYSICS LAB]"<<endl;   
        
                
        }
        else if(choice=="friday"||"Friday"||"FRIDAY")
        {

            cout<<"timing:-09:15 to 10:10 [WORKSHOP]"<<endl;
            cout<<"timing:-10:15 to 11:10 [WORKSHOP]"<<endl;
            cout<<"timing:-11:15 to 12:10 [PHYSICS]"<<endl;
            cout<<"timing:-12:15 to 01:10 [LUNCH]"<<endl;
            cout<<"timing:-01:15 to 02:10 [EVS]"<<endl;
            cout<<"timing:-02:15 to 03:10 [ECE]"<<endl;
            cout<<"timing:-03:15 to 04:10 [ECE LAB]"<<endl; 
            cout<<"timing:-04:15 to 05:10 [ECE LAB]"<<endl;   
        
                
        }
        else if(choice=="saturday")
        {
          
            cout<<"no class"<<endl;
        }
        else
        {
        cout<<"NO MATCH IS FOUND";
        }
}
/////////////////////////////////////////////EXAM_TIMETABLE/////////////////////////////////////////////////////////
void examt()
{
    system("cls");

    system("color 0b");
 cout<<"-----------------------------------------------------------------------------------------------------\n";
 cout<<"------------------------------EXAM TIME TABLE FOR BTECH(cse) SMESTER-II------------------------------\n";
 cout<<"--------------------------------------------ASET-----------------------------------------------------\n";
 cout<<"|            DATE/DAY             |            SESSION            |              B TECH             |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           12.06.2023            |            MONDAY             |             PRACTICAL           |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           13.06.2023            |            TUESDAY            |             PRACTICAL           |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           14.06.2023            |          WEDNESDAY            |             PRACTICAL           |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           15.06.2023            |          THRUSDAY             |             PRACTICAL           |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           16.06.2023            |           FRIDAY              |             PRACTICAL           |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           17.06.2023            |          SATURDAY             |              HOLIDAY            |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           18.06.2023            |           SUNDAY              |              HOLIDAY            |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           19.06.2023            |  MONDAY(9:30am to 11:00am)    | BCU241 COMMUNICATION SKILLS-II  |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           19.06.2023            |  MONDAY(11:00am to 12:30pm)   |        FLU244 FRENCH-II         |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           20.06.2023            | TUESDAY(9:30am to 11:00am)    |  BSU243 BEHAVIOURAL SCIENCE-II  |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           20.06.2023            |  MONDAY(11:00am to 12:30pm)   | EVS242 ENVIRONMENTAL STUDIES-II |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           21.06.2023            | WEDNESDAY(9:30am to 12:30pm)  |            MINOR TRACK          |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           22.06.2023            |  THRUSDAY(09:30am to 12:30pm) |  MAT201 APPLIED MATHEMATICS-II  |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           23.06.2023            |   FRIDAY(09:30am to 12:30pm)  |    PHY101 APPLIED PHYSICS-I     |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           24.06.2023            |          SATURDAY             |              HOLIDAY            |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           25.06.2023            |           SUNDAY              |              HOLIDAY            |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           26.06.2023            |   MONDAY(09:30am to 12:30pm)  | ECE101 BASIC ELECTRICAL ENGG.-I |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";
 cout<<"|           27.06.2023            |  TUESDAY(09:30am to 12:30pm)  |    CSE204 OOPs USING C++-II     |\n";
 cout<<"|_________________________________|_______________________________|_________________________________|\n";

} 
////////////////////////////////////////////////SCHOLRSHIP//////////////////////////////////////////////////
void scholarship()
{
    system("cls");
    system("color 0b");
          int percentage;
          cout<<"enter your percentage"<<endl;
          cin>>percentage;
          if(percentage>85)
          {
              cout<<"you get 90% scholorship";
          
          }
          else if(percentage>75 && percentage<85)
          {
              cout<<" you get 50% scholorship"<<endl;
              
          
          }
          else if(percentage>75 && percentage<65)
          {
              cout<<"you get 25% scholorship"<<endl;
                  
          }
          
          
          else
          {
          cout<<"sorry! you are not eligible for any scholarship"<<endl;
          }
}
////////////////////////////////////////FEST///////////////////////////////////////////////////////////////////
    void fest()
    {
        system("cls");
        system("color 0a"); 
         cout<<"               ========================================================================"<<endl;
        cout<<"               \t\tThe most resent fest of amity is AMICROMA\n\t\t\t\t That usually heald in february\n\t\t\t\t for more information visit \n\t\t\t\tamityonline.com"<<endl;
     cout<<"               ========================================================================"<<endl;
    }
};
////////////////////////////////using_multilable_inheritance/////////////////////////////////////////////
////////////////////////////////////////fees//////////////////////////////////////////////////////////////////
class fees:public notice 
{
    
    public:
    
    fees(void);
    void display();
};

fees::fees(void) 
{ }
    void fees::display()
    {
        system("cls");
        system("color 0b");
    int coursecode;
    double fees;
    cout<<"                   ========================================================================"<<endl;
    cout<<"                                     Enter task to be performed                            "<<endl;
    cout<<"                   ========================================================================"<<endl;
    cout<<"                   *                         1. BBA                                       *"<<endl;
    cout<<"                   *                         2. B.Tech                                    *"<<endl;
    cout<<"                   *                         3. MBA                                       *"<<endl;
    cout<<"                   *                         4. BCA                                       *"<<endl;
    cout<<"                   *                         5. BA                                        *"<<endl;
    cout<<"                   *                         6. P.hd                                      *"<<endl; 
    cout<<"                   *                         7. B.Com                                     *"<<endl;
    cout<<"                   *                         8. B.Sc                                      *"<<endl;
    cout<<"                   ========================================================================"<<endl;
    cin>> coursecode;
    cout<<"Enter any key between 1-8"<<endl;
    switch(coursecode)
    {
        case 1:
        cout<<"BBA fees structure for first year is"<<endl;
        cout<<"$1.04 Lakhs"<<endl;
        break;
      
         case 2:
        cout<<"B.Tech fees structure for first year is"<<endl;
        cout<<"$1.64 Lakhs(1st Year fees)"<<endl;
        break;  
         case 3:
        cout<<"MBA fees structure for first year is"<<endl;
        cout<<"$3.24 Lakhs(1st Year fees)"<<endl;
        break;
         case 4:
         cout<<"BCA fees structure for first year is"<<endl;
         cout<<"$1.02 Lakhs(1st Year fees)"<<endl;
        break;
         case 5:
         cout<<"BA fees structure for first year is"<<endl;
         cout<<"$64,000 (1st Year fees)"<<endl;
        break;
         case 6:
         cout<<"P.hd fees structure for first year is"<<endl;
         cout<<"$64,000 (1st Year fees)"<<endl;
         case 7:
         cout<<"B.Com fees structure for first year is"<<endl;
         cout<<"$75,000 (1st Year fees)"<<endl;
        break;
         case 8:
         cout<<"B.Sc fees structure for first year is"<<endl;
         cout<<"$99,000 (1st Year fees)"<<endl;
        break;
    
         default:
        cout<<"No COURSE IS FOUND"<<endl;
        break;
        
    }
   // }
}
//////////////////////////password/////////////////////////////////////////////////////////////////////
/*void spass()
{
    char password[10],username[10]="unnati",US[10],ch;
    int i=0;
    bool iscorrect=0;
    while(( iscorrect==false)&&(i<3))
    {
        cout<<"Enter username:"<<endl;
        cin>>US;
        if(strcmp(username,US)==0)
    {
          cout<<"Enter password:"<<endl;iscorrect=true;
          for( int i=0;i<=7;i++)
          {
            ch= getch();
            password[i]=ch;
            ch='*';
            cout<<ch;
           
            if(ch!=13)
            {
                cout<<"";
            }
            else if(ch!=8)
            {
                cout<<"";
            }
            cout<<"Login successful\n";
            cout<<"Your password is:\n";
            for(int i=0;i<=7;i++)
            {
                cout<<password[i];
            }
            getch();
          }
    }      
          else
          {
            cout<<"Wrong password or username\n";
          }
          i++;
        
    }
}*/
/////////////////////////////////////////////////////////////////
void spass()
    {
            string username;
            string password;
            cout<<"Enter username:"<<endl;
            cin>>username;
            cout<<"Enter password:"<<endl;
            cin>>password;
            if(username == "unnati")
            {
                if(password =="saraswat")
                {
                 cout<<"Successfully login..."<<endl;
                }
                else{
                cout<<"Invalid password...!"<<endl;
                }
            }
            else
            {
                cout<<"Invalid username...!"<<endl;
            }
    }
 /////////////////////////////////////////////////////////////////////////
 void apass()
    {
            string username;
            string password;
            cout<<"Enter username:"<<endl;
            cin>>username;
            cout<<"Enter password:"<<endl;
            cin>>password;
            if(username == "162")
            {
                if(password =="unnati")
                {
                 cout<<"Successfully login..."<<endl;
                }
                else{
                cout<<"Invalid password...!"<<endl;
                }
            }
            else
            {
                cout<<"Invalid username...!"<<endl;
            }
    }   
 //////////////////////////////////////MAIN-FUNCTION//////////////////////////////////////////////////////
int main()
{
    int intake;
    student s;
    details det;
    notice no;
    fees fe;
    {
     system("color 0b");
     for(int i=0;i<120;i++)
     {
        cout<<"=";
        Sleep(15);
     }
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n";
    // cout<<"\t\t\t\t\t\t\t";
    cout<<"          DATE:-"<<__DATE__<<endl;
    cout<<"          TIME:-"<<__TIME__<<endl;
    cout<<"          ================================================================================================================="<<endl;
    cout<<"          ________________________________________________WELCOME TO_______________________________________________________"<<endl;
    cout<<"          *                                                                                                               *\n";
    cout<<"          *                                   *****STUDENT MANAGMENT SYSTEM*****                                          *"<<endl;
    cout<<"          *                                            Created by:                                                        *"<<endl;
    cout<<"          *                                   UNNATI SARASWAT"<<" E/N "<<"A***2052*****                                            *"<<endl;
    cout<<"          *                                                                                                               *"<<endl;
    cout<<"          *                                              section:                                                         *"<<endl;
    cout<<"          *                                                   E                                                           *"<<endl;
    cout<<"          *                                       B.Tech(cse)  Semester-II                                                *"<<endl;
    cout<<"          *                                         Under the guidance of:                                                *"<<endl;
    cout<<"          *                                          Dr.Nikhlesh Pathik                                                   *"<<endl;
    cout<<"          *                                                                                                               *"<<endl;
    cout<<"          _________________________________________________________________________________________________________________\n";
    cout<<"          ================================================================================================================="<<endl;
    cout<<"Press any key to ENTER..."<<endl;
    getch();
    system("cls");
    }

    int choice;
    while (choice!=5) 
    {
        cout<<"             DATE:-"<<__DATE__<<endl;
        cout<<"             TIME:-"<<__TIME__<<endl;
        cout<<"              =============================================================================       \n";
        cout<<"                              Choices of the tasks that to be performed\n";
        cout<<"              =============================================================================        \n";
        
        cout<<"             *                       1.Student login                                      *"<<endl;
        cout<<"             *                       2.Admin login                                        *"<<endl;
        cout<<"             *                       3.Details                                            *"<<endl;
        cout<<"             *                       4.Notices                                            *"<<endl;
        cout<<"             *                       5. Exit                                              *"<<endl;
        cout<<"              =============================================================================        \n";
        
        cout<<"Press any key between 1-5\n";
        cin>>choice;
        switch (choice)
         {
        case 1:
        system("cls");
            //spass();
            cout<<"            DATE:-"<<__DATE__<<endl;
            cout<<"            TIME:-"<<__TIME__<<endl;
            int c;
            cout<<"            ========================================================================="<<endl;
            cout<<"                                    select task to be performed                           "<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"            *                        1.Result                                       *"<<endl;
            cout<<"            *                        2.Attendence                                   *"<<endl;
            cout<<"            *                        3.Daily time table                             *"<<endl;
            cout<<"            *                        4.Exam timetable                               *"<<endl;
            cout<<"            *                        5.Faculty info.                                *"<<endl;
            cout<<"            *                        6.Exit                                         *"<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"Press any key between 1-6\n";
            cin>>c;
            switch (c)
            {
                case 1:
                s.getmarks();
                break;

                case 2:
                s.attendance();
                break;

                case 3:
                no.timetable();
                break;

                case 4:
                no.examt();
                break;

                case 5:
                det.faculty();
                break;

                case 6:
                exit(0);
            }
            
            break;
         
        case 2:
        system("cls");
            //apass();
            cout<<"           DATE:-"<<__DATE__<<endl;
            cout<<"           TIME:-"<<__TIME__<<endl;
            int co;
            cout<<"            ========================================================================="<<endl;
            cout<<"                                 Enter task to be performed                          "<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"            *                          1.Add result                                 *"<<endl;
            cout<<"            *                          2.Add Attendence                             *"<<endl;
            cout<<"            *                          3.Exit                                       *"<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"Press any key between 1-3 \n";
            cin>>co;
            switch (co)
            {
                case 1:
                s.setmarks();
                break;

                case 2:
                s.add_att();
                break;

                case 3:
                exit(0);
            }
            break;
          case 3:
          system("cls");
            cout<<"            DATE:-"<<__DATE__<<endl;
            cout<<"            TIME:-"<<__TIME__<<endl;
            int coo;
            cout<<"            ========================================================================="<<endl;
            cout<<"                              Enter task to be performed                            "<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"            *                       1.Fee Details                                   *"<<endl;
            cout<<"            *                       2.Scholarship                                   *"<<endl;
            cout<<"            *                       3.View courses                                  *"<<endl;
            cout<<"            *                       4.Exit                                          *"<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"Press any key between 1-4 \n";
            cin>>coo;
            switch (coo)
            {
                case 1:
                fe.display();
                break;

                case 2:
                no.scholarship();
                break;

                case 3:
                det.course();
                break;
                
                case 4:
                exit(0);
            }
            break;

            case 4:
            system("cls");
            int cooo;
            cout<<"            DATE:-"<<__DATE__<<endl;
            cout<<"            TIME:-"<<__TIME__<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"                                      Enter task to be performed                "<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"            *                         1.Fest                                        *"<<endl;
            cout<<"            *                         2.Exit                                        *"<<endl;
            cout<<"            ========================================================================="<<endl;
            cout<<"Press any key between 1-2\n";
            cin>>cooo;
            switch (cooo)
            {
                case 1:
                no.fest();
                break;

                case 2:
                exit(0);
            }
            break;
        case 5:
            exit(0);
            break;
        }
    }
    return 0;
    
}