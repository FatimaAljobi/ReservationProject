//Travel Reservation Project for flight tickets booking  
//by: Fatima Aljobi

#include<iostream>
#include<windows.h>
#include<fstream>
#include<string.h>

using namespace std;

int local=0;
int internati=5;


void welcoming()
{
  		
   	system("CLS");
  cout<<"     ************************************************ \n";	
  cout<<"       Welcome to TRAVEL for flight tickets booking \n";	
  cout<<"     ************************************************ \n\n";	
 
    
}


class L_booking //class for Local booking
{
protected: //protected members
    
    int pnr; //Passenger Name Record
    char f_l[10],toja[7],tojd[7]; //Airline,Arrival Time,Departure Time
    long int doj; //dayofjourney
    int choice,src,dest; //selectflight,source,destination

public://public member functions
   
    void l_count()
    {
        local++; // increment variable
        pnr=local;
    }
   
    int j_detail() // function declaration and definition for domestic journey
    {
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "\1.Sanaa(1) \t\2.Aden(2) \t\3.Alhodida(3) \t\4.Suqatraa(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Alsaeeda(1)\t08:00\t\t11:05\t\tRY.50000\t\tRefundable\n";
            cout << "\2.Fly Sanaa(2)\t14:00\t\t17:05\t\tRY.55000\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRY.60000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Alsaeeda(1)\t08:00\t\t11:05\t\tRY.50000\t\tRefundable\n";
            cout << "\2.Fly Sanaa(2)\t14:00\t\t17:05\t\tRY.55000\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRY.60000\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Alsaeeda(1)\t08:00\t\t11:05\t\tRY.40000\t\tRefundable\n";
            cout << "\2.Fly Sanaa(2)\t14:00\t\t17:05\t\tRY.42050\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRY.61000\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Alsaeeda(1)\t08:00\t\t11:05\t\tRY.54000\t\tRefundable\n";
            cout << "\2.Fly Sanaa(2)\t14:00\t\t17:05\t\tRY.25000\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRY.28900\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Alsaeeda(1)\t08:00\t\t11:05\t\tRY.50000\t\tRefundable\n";
            cout << "\2.Fly Sanaa(2)\t14:00\t\t17:05\t\tRY.45000\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRY.60000\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Alsaeeda(1)\t08:00\t\t11:05\t\tRY.58000\t\tRefundable\n";
            cout << "\2.Fly Sanaa(2)\t14:00\t\t17:05\t\tRY.55080\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRY.60500\t\tRefundable\n";
        }
        else if(src==dest)//condition
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight() //function declaration and definition for selecting flight
    {
	   cout << "\nEnter your choice" <<endl;
        cin >> choice;
        switch(choice) // switch case
        {
          
		  case 1://condition
                cout << "\nFlight selected:"<<endl;
                cout << "Alsaeeda"<<endl;
                strcpy(f_l,"Alsaeeda");//copy to string
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00"); //copy to string
                strcpy(toja,"11:05");// copy to string
                break;
          
		  case 2://condition
                cout << "\nFlight selected:"<<endl;
                cout << "Fly Sanaa"<<endl;
                strcpy(f_l,"Fly Sanaa");//copy to string
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");//copy to string
                strcpy(toja,"17:05");//copy to string
                break;
          
		  case 3://condition
                cout << "\nFlight selected:" << endl;
                cout << "Go Air" << endl;
                strcpy(f_l,"Go Air");//copy to string
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");//copy to string
                strcpy(toja,"22:05");//copy to string
                break;
          
		  default://condition
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};


class i_booking //class for international booking
{
	protected://protected members
    
	int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
   
   public://public member functions
    
	void i_count()
    {
        internati++; //increment variable
        pnri=internati;
    }
    
    int j_detaili() // function declaration and definition for journey details
    {
        cout << "Enter DateOfJourney(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "\1.London(1) \2.Dubai(2) \3.Seoul(3) \4.Berlin(4) \5.NewYork(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tUSD.25000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tUSD.21500\tRefundable\n";
            cout << "\3.AlYemenia(3)\t18:00\t\t22:05\t\tUSD.24000\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tUSD.25500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tUSD.21300\tRefundable\n";
            cout << "\3.AlYemenia(3)\t18:00\t\t22:05\t\tUSD.24650\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tUSD.52500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tUSD.59420\tRefundable\n";
            cout << "\3.AlYemenia(3)\t18:00\t\t22:05\t\tUSD.64892\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tUSD.17800\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tUSD.14900\tRefundable\n";
            cout << "\3.AlYemenia(3)\t18:00\t\t22:05\t\tUSD.18700\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tUSD.32000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tUSD.38500\tRefundable\n";
            cout << "\3.AlYemenia(3)\t18:00\t\t22:05\t\tUSD.41259\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tUSD.82500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tUSD.87550\tRefundable\n";
            cout << "\3.AlYemenia(3)\t18:00\t\t22:05\t\tUSD.81478\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)//switch case
        {
        case 1://condition
            cout << "\nFlight selected:" <<endl;
            cout << "Vistara" << endl;
            strcpy(f_i,"Vistara");//copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");//copy to string
            strcpy(tojai,"14:05");//copy to string
            break;
        case 2://condition
               cout << "\nFlight selected:" << endl;
               cout << "Fly Dubai" << endl;
               strcpy(f_i,"Fly Dubai");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");//copy to string
                strcpy(tojai,"18:05");//copy to string
                break;
        case 3://condition
            cout << "\nFlight selected:" << endl;
            cout << "AlYemenia" << endl;
            strcpy(f_i,"AlYemenia");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");//copy to string
            strcpy(tojai,"22:05");//copy to string
            break;
        default://condition
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }

};


class passenger: public L_booking ,public i_booking //class passenger publicly inherited from class l_booking and i_booking
{

protected://protected members
   
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no; //contact num.

public://public member functions
   
    void p_detail(int x) //function declaration and definition
    {
	   if(x==1) //if else for local and international booking selecti
        { 
		j_detail(); //function call
        select_flight();
        }
        else
        { 
		j_detaili();
        select_flighti();
        }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    
	int gender_check()//to check gender input as valid
    {
    	
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();//function call
        }
	}
       
	void more_details() //to take more details of the passenger
    {
    	cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;      //displaying details
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;

	}

     int getpnr()//function to get pnr for domestic booking
   	 {
            return pnr;
     }

     int getpnri()//function to get pnr for international booking
   	 {
         return pnri;
     }

     void disp()//function to display details for local booking
  	 {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_l << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()//function to display details for international booking
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};


class payment //class for payment
{
protected: //protected members
  
    //long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
    
    
public: //public members functions
    
	void pay_detail()//function declaration and definition for payment method
    {  
	    cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://card
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://credit card
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://bank
            cout << "Banks Available: \1.WestPac Bank(1) \2.Yemen Bank(2) \3.YKU Bank(3) \4.AMP Bank(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};


void createfile(passenger p) //file creation for local booking
{  
   ofstream fin("local.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p)); //writing to file
   fin.close(); //closing file
}


void cancelticket(int x) //function to cancel ticket local
{ 
   passenger p;
   int f=0;
   
   ifstream fout("local.txt",ios::binary|ios::app); //for reading file
   ofstream fin("local2.txt",ios::binary|ios::app); //for writing to a new file
   fout.read((char *)&p,sizeof(p)); //reading file
   while(fout)
   {
     if(p.getpnr()!=x) //checking pnr
      fin.write((char *)&p,sizeof(p));//writing to file
      else
     {
         p.disp();//display details
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded:RY.1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   
   if(f==0) //if f==0,pnr not found
   cout<<"Ticket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("local.txt");//deleting old file
   rename("local2.txt","local.txt");//renaming new file
}


void checkticket(int x) //function to check pnr or ticket
{ 
   passenger p;
   int f=0;
   ifstream fout("local.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {
	  p.disp();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if onr found
      break;
     }
     fout.read((char *)&p,sizeof(p)); //reading another record from the same file

   }
   
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}

void createfilei(passenger p) //opening a file for international booking
{ 
   ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}


void cancelticketi(int x) //function to cancel ticket international
{ 
   passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);//opening file
   ofstream fin("international2.txt",ios::binary|ios::app);//writing to a new file
   fout.read((char *)&p,sizeof(p));//reading old file
   while(fout)
   {
     if(p.getpnri()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to new file;
      else
     {
         p.dispi();//display details
         cout<<"Your Above ticket is being deleted:\n" << "Amount refunded:RY.1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from old file
   }
   
   if(f==0)
   cout<<"\nTicket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("international.txt");
   rename("international2.txt","international.txt");
}


void checkticketi(int x) //function to check pnr or ticket international
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnri()==x)//checking pnr
     {
	  p.dispi();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if pnr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the file

   }
   
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}


int main()
{
	system("color f1");
	
	char input;//character variables
    class L_booking d1;//object for class d_booking
    class i_booking i1;//object for class i_booking
    class passenger p1;//object for class passenger
    class payment p2;//object for class payment
	int choice,choice2,n;
	
	
	 do//do while loop
    {
	welcoming();
	cout << "\n\n\t\t\t\1.Book Flight(1) \n\t\t\t\2.Cancel Fight(2) \n\t\t\t\3.Check Ticket(3) \n\t\t\t\4.Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> choice;
      switch(choice)
      {
          case 1: //Booking
              system("CLS");
              cout << "\n\n\1.Local Fights(1) \n\2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> choice2;
              switch(choice2) //inner switch case
              {
                   case 1://for booking local ticket
                        p1.l_count();
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);//call to create file
                        break;
                  
				   case 2: //for booking international ticket
                           p1.p_detail(2);//function calls
                           p1.i_count();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);//call to create file
                           break;
                   
				   default://wrong input
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
              break;
  
   		  case 2:  //canceling ticket
               system("CLS");
               cout << "\1.Local Fights(1) \n\2.International Flights(2)" << endl;
               cout << "\nPlease enter your option" << endl;
               cin >>choice2;
                  if(choice2==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n); //function call for local booking cancellation
                }
                 else if(choice2==2)
               {  
			      cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);//function call for international cancellation
               }
                 else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
        
		   case 3://for displaying booked ticket details
                system("CLS");
                cout << "\1.Local Fights(1) \n\2.International Flights(2)" << endl;
                cout << "\nPlease enter your option" << endl;
                cin >>choice2;
                  if(choice2==1)
                  {
				  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);
				  } //function call to display local ticket details
                  
				  else if(choice2==2)
                  {  
				  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticketi(n);
                  } //function call to display international ticket details
                  else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
      
     	   case 4: //Exit
		    	system("CLS");  
			    return 0; 
			    
			    
          default: //for wrong input
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main(); 
	  }
	  
	cout<<"\n\n\nDo you want to continue:(y/Y)" << endl;
    cin >> input;
	}
	while(input=='Y' || input=='y'); //condition for do while loop
    
	return 0;
}
