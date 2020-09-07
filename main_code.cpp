#include<iostream>
#include<algorithm>
#include<string>

#include "Commision.h"
#include "Family.h"
#include "JuniorCommision.h"
#include "NonCommision.h"
#include "Officer.h"
#include "Official.h"
#include "person.h"
#include "Student.h"
#include "Stuff.h"
#include "Visitor.h"
#include "place.h"

using namespace std;

bool verify()
{
    string username, password;

    //Take Input
    cout<<"User Name: ";
    cin>>username;
    cout<<"Password: ";
    cin>>password;

    //Check username and Password (hard coded)
    if((username=="rafat" && password=="106")||(username=="adnan" && password=="121")||(username=="nibir" && password=="129"))
        return true;
    else
        return false;

}
void displayChainOfCommand()
{

    int option[6];
    while(1)
    {
        //Base Options
        cout<<"What do you want to view/manage?"<<endl<<"<1> for person"<<endl<<"<2> for place"<<endl<<"<3> for resources"<<endl<<"<4> for duty"<<endl<<"<0> to exit"<<endl;
        cin>>option[0];

        if (option[0]==0)
            break; //Go back or exit

        switch(option[0])
        {

        case 1:
        {
            while(1)
            {
                int i=0;
                //Person Options
                cout<<"<1> Add person"<<endl<<"<2> View Personal Info"<<endl<<"<3> Set/Modify Access Level"<<endl<<"<4> Promote Official"<<endl<<"<0>Go back"<<endl;
                cin>>option[1];
                Person people[1000];

                if (option[1]==0)
                    break; //Go back or exit

                switch(option[1])
                {
                case 1:
                {
                    people[i].add_person();//Function for adding person, info & options will be inside function
                    break;
                }

                case 2:
                {
                    people[i].show_info();//Function for viewing info
                    break;
                }
                case 3:
                {
                    //function for viewing or modifying access level of person
                    break;
                }
                case 4:
                {
                    //function for promoting a certain individual with existing info and update some of the values
                    break;
                }
                default:
                    break;
                }
            }
            break;
        }

        case 2:
        {
            while(1)
            {
                //Place Options
                int i=0;
                cout<<"<1> Add Place"<<endl<<"<2> Place Person"<<endl<<"<3> View Place Info"<<endl<<"<4> Capacity"<<endl<<"<5> Access Level view/modify"<<endl<<"<0> Go back"<<endl;
                cin>>option[1];
                place location[100];

                if (option[1]==0)
                    break; //Go back or exit

                switch(option[1])
                {
                case 1:
                {
                    location[i].AddPlace();//Function for adding place, info & options will be inside function
                    break;
                }
                case 2:
                {
                    location[i].Place_Info();//function for viewing info
                    break;
                }
                case 3:
                {
                    location[i].Insert_Person();//function for assigning a place for person according to capacity
                    break;
                }
                case 4:
                {
                    location[i].Capacity();//function for checking total capacity, occupied & remaining capacity
                    break;
                }
                case 5:
                {
                    cout<<"Do you want to"<<endl<<"<1>View?"<<endl<<"<2>Modify"<<endl;
                    cin>>option[2];
                    //function for viewing or changing access level for places
                    if(option[2]==1)
                        location[i].Access_level();
                    else if(option[2]==2)
                        location[i].Modify_Access_Level();
                    break;
                }
                default:
                {
                    break;
                }
                }
            }
            break;
        }

        case 3:
        {
            while(1)
            {
                //Resource Options
                cout<<"<1> Buy"<<endl<<"<2> Sell"<<endl<<"<3> View"<<endl<<"<4> Add new type"<<endl<<"<5> Assign"<<endl<<"<0> Go back"<<endl;
                cin>>option[1];

                if (option[1]==0)
                    break; //Go back or exit

                switch(option[1])
                {
                case 0:
                    break;
                case 1:
                {
                    //buy an existing resource
                }
                case 2:
                {
                    //sell an existing resource
                }
                case 3:
                {
                    //function for viewing info, options will be inside function
                }
                case 4:
                {
                    //function for adding new type of resource
                }
                case 5:
                {
                    //function for a person taking charge of resource eg weapon
                }
                default:
                {
                    break;
                }
                }
            }
        }

        case 4:
        {
            while(1)
            {
                //Resource Options
                cout<<"<1> Assign Duty"<<endl<<"<2> View Duty"<<endl<<"<3> Reallocate Duty"<<endl<<"<4> Report Duty"<<endl<<"<0> Go back"<<endl;
                cin>>option[1];

                if (option[1]==0)
                    break; //Go back or exit

                switch(option[1])
                {
                case 0:
                    break;
                case 1:
                {
                    //assigning duty from one person to another
                }
                case 2:
                {
                    //view duty by ID
                }
                case 3:
                {
                    //reallocate one duty to other persons
                }
                case 4:
                {
                    //report duty
                }
                default:
                {
                    break;
                }
                }
            }
        }

        default:
        {
            break;
        }

        break;
        }
    }
}


int main()
{
    if(verify()==true)
        displayChainOfCommand();
    else
        cout<<"Access Denied!";
}
