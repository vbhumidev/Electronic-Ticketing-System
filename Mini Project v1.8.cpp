#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<string.h>
#include<stdio.h>
#include<windows.h>
using namespace std;

string city;
int i,vlen,vrfy,vrfy1;


    void f()  { fflush(stdin); }
    void time1()
        {   time_t t1;
            time(&t1);
            cout<<"\t\t\t\t\t\t\t\t\t"<<ctime(&t1)<<"\n\n";
        }
    void title()
		{
		  system("cls");
		  cout<<endl<<"   TTTTTTT  I   CCCC  K   K  EEEEE  TTTTTTT      PPPP   L      EEEEE      A     SSSSS  EEEEE  "<<endl<<
		  	          "      T     I  C      K  K   E         T         P   P  L      E         A A    S      E      "<<endl<<
		              "      T     I  C      KKK    EEE       T         PPPP   L      EEE      A   A   SSSSS  EEE    "<<endl<<
		              "      T     I  C      K  K   E         T         P      L      E       AAAAAAA      S  E      "<<endl<<
		              "      T     I   CCCC  K   K  EEEEE     T         P      LLLLL  EEEEE   A     A  SSSSS  EEEEE  "<<endl<<endl<<
		              "  ____________________________________________________________________________________________"<<endl<<
		              "  ____________________...Welcome to electronic movie ticketing system...______________________"<<endl<<endl;
	      time1();
	    }

	    void end()
        {
	        char a[]="\n\n\t\t\t Thanks for using our electronic system. ",b[]="\n\t\t\t Please collect printout of your ticket. ",c[]="\n\t\t\t  HAVE A NICE DAY AND ENJOY YOUR MOVIE.   ";
            char d[]="\n\t\t_________________________________________________________________ ",e[]="\n\t\t      Ticket is in the same folder in which this program is .  ";
            i=0; while(a[i]!='.')    {	cout<<a[i]; 	i++;    Sleep(100);  }
            i=0; while(b[i]!='.')    {	cout<<b[i]; 	i++;    Sleep(100);  }
            i=0; while(c[i]!='.')    {	cout<<c[i]; 	i++;    Sleep(100);  }
   	        cout<<d;
	        Sleep(100);
            i=0; while(e[i]!='.')    {	cout<<e[i]; 	i++;    Sleep(100);  }
            getch();
}
    void bigcinema()
	{
		cout<<"\t You have selected BIG Cinema,"<<city<<endl<<endl;
					cout<<
					      "\t Select a movie from following movie box & enter movie code"<<endl<<
					      "   ---------------------------------------------------------------------------------------------------------------"<<endl<<
					      "   |     Today        |                 |                |      Tommorow    |                                    |"<<endl<<
					      "   |-------------------------------------------------------------------------------------------------------------|"<<endl<<
					      "   |   Movie          |        Time     |    Moviecode   |    Movie         |       Time        |    Movie Code  |"<<endl<<
					      "   |-------------------------------------------------------------------------------------------------------------|"<<endl<<
					      "   |1. Love Punjab          09:00am-12:00pm   (lp-912)   |  1. Shootout at wadala   09:00am-12:00pm    (sw-912)  |"<<endl<<
	                      "   |2. Ambarsariya          12:30pm-03:30pm   (am-123)   |  2. Singh is Bling       12:30pm-03:30pm    (sb-123)  |"<<endl<<
	                      "   |3. Dead Pool            04:00pm-07:00pm   (dp-407)   |  3. Love Punjab          04:00pm-07:00pm    (lp-407)  |"<<endl<<
						  "   |4. Batman v/s Superman  07:30pm-11:30pm   (bs-711)   |  4. Dead Pool            07:30pm-11:30pm    (dp-711)  |"<<endl<<
						  "   ---------------------------------------------------------------------------------------------------------------"<<endl;
	 }
	 void pvrcinema()
	 {
	 	cout<<"\t You have selected P.V.R Cinema,"<<city<<endl<<endl;
					cout<<"\t Select a movie from following movie box & enter movie code : "<<endl<<
					      "   ---------------------------------------------------------------------------------------------------------------"<<endl<<
					      "   |     Today        |                                   |       Tommorow     |                                 |"<<endl<<
					      "   |------------------------------------------------------|------------------------------------------------------|"<<endl<<
					      "   |   Movie          |        Time      |    Movie code  |   Movie            |      Time        |   Movie Code |"<<endl<<
					      "   |------------------------------------------------------|------------------------------------------------------|"<<endl<<
					      "   |1. Mission impossible   09:00am-12:00pm   (mi-912)    | 1. Airlift               09:00am-12:00pm    (ai-912) |"<<endl<<
	                      "   |2. Antman               12:30pm-03:30pm   (an-123)    | 2. Singh is Bling        12:30pm-03:30pm    (sb-123) |"<<endl<<
	                      "   |3. Farrar               04:00pm-07:00pm   (fa-407)    | 3. Kung Fu Panda 3       04:00pm-07:00pm    (kp-407) |"<<endl<<
						  "   |4. Munde Kamal De       07:30pm-11:30pm   (md-711)    | 4. Jai Gangajal          07:30pm-11:30pm    (jg-711) |"<<endl<<
						  "   ---------------------------------------------------------------------------------------------------------------"<<endl;
	 }
	 void sarb()
	 {
	 	cout<<"\t You have selected Sarb Multiplex,"<<city<<endl<<endl;
				     cout<<"\t Select a movie from following movie list & enter movie code : "<<endl<<
				          "  -----------------------------------------------------------------------------------------------------------------"<<endl<<
					      "  |     Today          |                                 |      Tommorow                                          |"<<endl<<
					      "  |------------------------------------------------------|--------------------------------------------------------|"<<endl<<
					      "  |   Movie            |     Time          |  Movie Code |    Movie              |     Time        |  Movie Code  |"<<endl<<
					      "  |------------------------------------------------------|--------------------------------------------------------|"<<endl<<
					      "  |1.  Antman              09:00am-12:00pm   (an-912)    | 1. Mission impossible     09:00am-12:00pm    (mi-912)  |"<<endl<<
	                      "  |2.  Munde Kamal De      12:30pm-03:30pm   (md-123)    | 2. Love Punjab            12:30pm-03:30pm    (lp-123)  |"<<endl<<
	                      "  |3.  Dead Pool           04:00pm-07:00pm   (dp-407)    | 3. Antman                 04:00pm-07:00pm    (an-407)  |"<<endl<<
						  "  |4.  Singh is Bling      07:30pm-11:30pm   (sb-711)    | 4. Farrar                 07:30pm-11:30pm    (fa-711)  |"<<endl<<
						  "  -----------------------------------------------------------------------------------------------------------------"<<endl;
	 }

class moviebooking
    {
    	string movie,timing,tickettype,email,expirydate,bankname,accountpassword,accountno,phone,cardno,theatername,alpha,password,pass,users[10];
    	int theater,noofticket,paytype,seatno[10],price,num,op,accstatus,accstatus1;
        long int serialno;
        char userid[10],user[10],name[20],cardname[20];
    	public:
        moviebooking()
		{
		serialno=0000;
		op=0;
		}
    	void movies()
		{
			cout<<"\t Enter City - ";
			cin>>city;
			t1:
			cout<<endl<<"\t Choose theater from following: \n 1. BIG Cinema \n 2. P.V.R Cinema \n 3. Sarb Multiplex "<<endl<<
			            "                    Enter No. - ";
			cin>>theater; cout<<endl;

			switch (theater)
			{
				case 1:
				{
				    theatername="BIG Cinema";
					bigcinema();
					break;
				}
				case 2:
				{
				    theatername=" P.V.R Cinema ";
					pvrcinema();
					break;
				}
				case 3:
				{
				     theatername=" Sarb Multiplex ";
				     sarb();
					 break;
				}
				default :
				{
				cout<<"Error: !!! Redirecting !!!";
				goto t1;
				}
			};


        }

    void movietiming()
    {
    	string lp,am,dp,bs,sw,sb,mi,an,fa,ai,md,kp,jg;
    	cout<<endl<<" Enter Movie Code : "<<endl<<
    	            "````````````````````"<<endl;
			cout<<endl<<"\t (Alphabetic part)- ";   cin>>alpha;   cout<<ends<<"\t (Numeric part)   - "  ;cin>>num;
    	if("lp"==alpha)      { movie="Love Punjab"; }
	    else if("am"==alpha) { movie="Ambarsariya"; }
	    else if("dp"==alpha) { movie="Dead Pool"; }
	    else if("bs"==alpha) { movie="Batman v/s Superman"; }
	    else if("sw"==alpha) { movie="Shootout at wadala"; }
        else if("sb"==alpha) { movie="Singh is Bling"; }
        else if("mi"==alpha) { movie="Mission impossible";}
        else if("an"==alpha) { movie="Antman";}
        else if("fa"==alpha) { movie="Farrar";}
        else if("ai"==alpha) { movie="Airlift"; }
        else if("md"==alpha) { movie="Munde Kamal De";}
        else if("kp"==alpha) { movie="Kung Fu Panda 3"; }
        else if("jg"==alpha) { movie="Jai Gangajal";}
        else  {
			cout<<endl<<"\t\t Error: Redirecting!!! "<<endl;
			movietiming();
		      }

    	if(912==num)    { timing="09:00am-12:00pm"; }
		else if(123==num){ timing="12:30pm-03:30pm"; }
		else if(407==num){ timing="04:00pm-07:00pm"; }
		else if(711==num){ timing="07:30pm-11:30pm"; }
    	else
		{
			cout<<endl<<"\t\t Error: Redirecting!!! "<<endl;
			movietiming();
	    }

	}

	    void seats()
        {

        	cout<<endl<<"\t How many tickets?   "<<endl<<
			            "\t  (Max. limit 10)   :";   cin>>noofticket;
			cout<<endl<<"\t Platinum(250 Rs)  , Gold(200 Rs) or Silver(180 Rs) - ";
			cin>>tickettype;

			cout<<endl<<"\t -------------------------------------------------"<<endl<<
			            "\t |      *** Sitting overview of theater ***      |"<<endl<<
			            "\t -------------------------------------------------"<<endl<<
	                    "\t |  Silver   -  01 02 03 04 05   06 07 08 09 10  |"<<endl<<
			            "\t |              11 12 13 14 15   16 17 18 19 20  |"<<endl<<
			            "\t |  Gold     -  21 22 23 24 25   26 27 28 29 30  |"<<endl<<
			            "\t |              31 32 33 34 35   36 37 38 39 40  |"<<endl<<
			            "\t |  Platinum -  41 42 43 44 45   46 47 48 49 50  |"<<endl<<
			            "\t -------------------------------------------------"<<endl;


			cout<<endl<<" Choose your seat no. "<<endl<<
			            "``````````````````````"<<endl;
			int ticketno=1;
			for(i=1;i<=noofticket;i++)
			{

				if("Platinum"==tickettype||"platinum"==tickettype)
				{
					price=250;
					cout<<"\t Choose seat no.(41-50) for "<<ticketno<<" ticket(Platinum) : ";    cin>>seatno[i];
					 	if((seatno[i])<41||(seatno[i])>50)
					 {
					 	cout<<endl<<"\t\t Error : Seat no. is not selected according to ticket type. "<<endl<<
					 	            "\t\t Redirecting !!! \n\t\t Enter ticket type again: ";
					 	cin>>tickettype;  cout<<endl;
					 	i=0;
					 	ticketno=0;
					 }
				}
				else if("Gold"==tickettype||"gold"==tickettype)
				{
					price=220;
					cout<<"\t Choose seat no.(21-40) for "<<ticketno<<" ticket(Gold) : ";    cin>>seatno[i];
						if((seatno[i])<21||(seatno[i])>40)
					 {
					 	cout<<endl<<"\t\t Error : Seat no. is not selected according to ticket type. "<<endl<<
					 	            "\t\t Redirecting !!! \n\t\t Enter ticket type again: ";
					 	cin>>tickettype;  cout<<endl;
					 	i=0;
					 	ticketno=0;
					 }
				}
				else if("Silver"==tickettype||"silver"==tickettype)
				{
				    price=180;
					cout<<"\t Choose seat no.(01-20) for "<<ticketno<<" ticket(Silver) : ";    cin>>seatno[i];
					if((seatno[i])<01||(seatno[i])>20)
					 {
					 	cout<<endl<<"\t\t Error : Seat no. is not selected according to ticket type. "<<endl<<
					 	            "\t\t Redirecting !!! \n\t\t Enter ticket type again: ";
					 	cin>>tickettype;  cout<<endl;
					 	i=0;
					 	ticketno=0;
					 }
		        }
		        else
		        {
		        	cout<<endl<<endl<<"\t\t Error: Redirecting !!! \n\t\t Enter ticket type again: ";
		        	cin>>tickettype;
		        	i=0;
					ticketno--;
				}
				ticketno++;
			};

		}

		void details()
		{
			g1:
			cout<<endl<<"\t\t\t E-mail addresss  :- ";  cin>>email;
			  cout<<"\t\t\t Verifing Email";
			  for(i=0;i<3;i++)
			    {
			     	cout<<".";
			    	Sleep(1000);
		     	}
			    vlen=email.length();
			    vrfy=email.find('@');
			    vrfy1=email.find('.');
		     	if(vlen==0)
		    	{ cout<<"\t\t\t Invalid E-mail \n"; goto g1; }
		    	else if((vrfy<vlen)&&(vrfy1<vlen))
		     	{
				cout<<"\t Email Verified \n";
			    }
			else { cout<<"\t\t\t Invalid E-mail \n"; goto g1; }
		    cout<<"\n\t\t\t Enter Your Name  :- "; fflush(stdin); cin>>name;
			g2:
			cout<<"\n\t\t\t Phone No.        :- "; fflush(stdin); cin>>phone;
			vlen=phone.length();
			if(vlen<10)
			{  cout<<"\t\t\t Invalid Phone no. \n"; goto g2; }
		}
	    void paymentmethod()
        {
   	        cout<<endl<<"\t\t  Select a Payment method :   "<<endl<<
		                "\t\t ```````````````````````````  "<<endl<<
			            "\t\t\t 1. Cerdit card / Debit card "<<endl<<
			            "\t\t\t 2. Net Banking              "<<endl<<
			            "                               Enter No. -";
			cin>>paytype;
			switch(paytype)
			{
				case 1: {
					     cout<<"\n\t\t Enter your Card details: "<<endl<<
					           "\t\t````````````````````````` "<<endl;
						 cout<<"\t\t\t( Warning - Enter Name without Blank space )"<<endl;
					     cout<<"\t\t\t Name of Card holder   - "; fflush(stdin); gets(cardname);
					     cout<<"\t\t\t Card No.              - "; fflush(stdin); cin>>cardno;
					     cout<<"\t\t\t Expiry date(dd/mm/yy) - ";  cin>>expirydate;
				    	 break;
				        }

				case 2: {
					     cout<<"\n\t\t Enter your Account details: "<<endl<<
						       "\t\t```````````````````````````` "<<endl;
					     cout<<"\t\t\t Bank Name   - "; fflush(stdin); cin>>bankname;
					     cout<<"\t\t\t Account No. - "; fflush(stdin); cin>>accountno;
					     cout<<"\t\t\t Password    - "; fflush(stdin); cin>>accountpassword;
				         break;
				        }
			}

        }
	    void payment()
	    {
	    	cout<<endl<<"\t Total Due Payment = Rs "<<(price*noofticket)<<endl<<endl;
		    paymentmethod();
       	}
		void conformation()

		   {
		   	char conf1,conf2,conf3,conf4,conf5;
		   	cout<<endl<<" Conformation: "<<endl<<
		   	            "`````````````` "<<endl<<
		   	            " !!! Please press 'y' if following information is correct & 'n' if something is wrong !!! \n\n";
		   	cout<<" Movie details:"<<endl<<
		   	      "```````````````"<<endl<<
		          "\t Movie Name     - "<<movie<<endl<<
				  "\t Movie timing   - "<<timing<<endl<<endl;
			cout<<"                      Press 'y' or 'n' - ";        conf1=getche();
                   if(conf1=='n')
				   {
				   	cout<<" Please select movie again "<<endl;
				   	movietiming();
				   }

			cout<<"\n\t No. of tickets - "<<noofticket<<endl<<
				  "\t Ticket type    - "<<tickettype<<endl<<
				  "\t Seat no.       - ";

				  for(i=1;i<=noofticket;i++)
				  {
				  	cout<<seatno[i]<<" ";
				  }
			cout<<endl<<endl;
			cout<<"                      Press 'y' or 'n' -";        conf2=getche();
			      if(conf2=='n')
				   {
				   	cout<<"\n\t\t Please select seats again "<<endl;
				   	seats();
				   }

			cout<<"\n Personal details: "<<endl<<
		 	      "`````````````````` "<<endl<<
			      "\t Email Address   :- "<<email<<endl<<
			      "\t Phone No.       :- "<<phone<<endl<<endl;
			cout<<"                      Press 'y' or 'n' - ";        conf3=getche();
				  if(conf3=='n')
				  {
				  	cout<<endl<<"\n\t\t Wrong Personal details "<<endl;
				  	details();
				  }

			cout<<endl<<" Payment details: "<<endl<<
			            "````````````````` "<<endl;
			switch(paytype)
			  {
				case 1: {
					     cout<<"\t Your Card details: "<<endl;
					     cout<<"\t Name of Card holder   - "<<cardname<<endl;
					     cout<<"\t Card No.              - "<<cardno<<endl;
					     cout<<"\t Expiry date(dd/mm/yy) - "<<expirydate<<endl<<endl;;
					     cout<<"\t                      Press 'y' or 'n' - ";        conf4=getche();
					     if(conf4=='n')
				          {
				          	cout<<endl<<"\n\t\t Please select payment option again "<<endl;
				        	payment();
				          }
				    	 break;
				        }

				case 2: {
					     cout<<"\t Your Account details: "<<endl;
					     cout<<"\t Bank Name   - "<<bankname<<endl;
					     cout<<"\t Account No. - "<<accountno<<endl;
					     cout<<"\t Password    - "<<accountpassword<<endl;
					     cout<<"\t                      Press 'y' or 'n' - ";        conf4=getche();
						  if(conf4=='n')
				          {
				          	cout<<endl<<"\n Please select payment option again "<<endl;
				        	payment();
				          }
				         break;
			           }
		      }
		      cout<<endl<<"\n\t Press y to book ticket and n to exit - "; conf5=getche();
			    if(conf5=='y')
			    {
			    	cout<<endl<<"\t Your ticket/tickets is/are booked sucessfully "<<endl;
				}
				else if(conf5=='n')
				{
					exit;
				}
	    }
	   void eticket()
	   {
	   	ofstream file("eticket");
	   	file<<"   TICKET PLEASE"<<endl;
	   	file<<"       Your movie ticket :"<<endl;
	   	for(i=1;i<=noofticket;i++)
	   	{
	   		serialno++;
	   		file<<endl<<" Venue         - "<<theatername<<","<<city<<endl<<
			            " Movie         - "<<movie<<ends<<ends<<ends<<"Timing - "<<timing<<endl<<
						" Ticket type   - "<<tickettype<<ends<<" Seat no. - "<<seatno[i]<<endl<<
						" Total Price   - Rs "<<price<<endl<<
						" Serial no.    - 934/320/"<<serialno<<endl<<endl<<
						" HAVE A NICE DAY AND ENJOY YOUR MOVIE "<<endl<<endl<<
						"Cut here-------------------------------------------"<<endl<<endl;


		}
	   	file.close();
	}
            void filew();
		   	void newaccount()
    		{   accstatus1=1;
    		    n1:
			    title();
    		    cout<<"\n\t\t\t Enter User ID    :- "; cin>>userid;
    		    accounts();
    		      if(accstatus1==0)
                    {
                     cout<<"\n\t\t\t  User Id already exist. Try another one..  ";
					 Sleep(2000);
					 accstatus1=1;
					 goto n1;
				    }
				  else if(accstatus1==1)
				    {
				      fstream f2("accounts",ios::app);
                      f2<<"\n"<<userid;
                      f2.close();
				    }
    			details();
    		/*	cout<<"\n\t\t\t Enter your Name  :- ";
				fflush(stdin);
				gets(name);*/

			g3:
			    cout<<"\n\t\t\t Enter Password( must be more than 5 characters ) :- "; fflush(stdin); cin>>password;
			        vlen=password.length();
				            if(vlen<5)
    			            {  cout<<"\t\t\t Invalid Password \n"; goto g3; }

    		title();
    		cout<<"\n\t\t\t For doing movie ticket payment : ";
    		paymentmethod();
            filew();
    		cout<<"\n\t\t!!! Your account is created successfully !!!";
    		Sleep(1000);
    		menu();
          	}

	   void switch1(int);
       void admin1();
       void accounts();
       void menu()
    		{
    		 title();
    		 cout<<endl<<"\t\t\t 1. Log In  \n"<<
    		             "\t\t\t 2. Create New Account \n"<<
    		             "\t\t\t 3. Skip \n"<<
    		             "\t\t\t 4. Shut Down"<<"\n\t\t\t Enter No. - "; cin>>op;

				switch(op)
				{
					case 1: {
						     int a=1;
						     l1:
			                 title();
							 cout<<"\n\t\t\t LOG IN: \n\n\t\t\t User ID  : "; cin>>user;
						     cout<<"\n\t\t\t Password : "; cin>>pass;
							 if((strcmp(user,"admin"))==0)
							 {
								   if("password"!=pass)
						           {
						             cout<<"\n\t\t\t\t Invalid Password..!  "<<(3-a)<<" Attempts left ";
						             if(a==3)
						              {
						               cout<<"\n\t\t\t System is going to shutdown";
						               Sleep(2000);
						     	       exit(0);
							          }
						            a++;
					                Sleep(1000);
							        goto l1;
						           }
						          else
						           {
						        	 admin1();
							       }
							 }
							 else
						     {
						        accounts();
						        if(accstatus==0)
							    {
							     cout<<"\n\n\t\t\t Account do not exist..! \n";
							     Sleep(2000);
								 goto l1;
							    }
							    else
							    {
						          ifstream file2(user,ios::binary|ios::in);
						          f();
						          file2>>userid>>password>>name>>email>>phone>>paytype;
						          f();
						          if(paytype==1)
    		                       {
    			                   file2>>cardname>>cardno>>expirydate;
    			                   f();
			                       }
			                      if(paytype==2)
			                       {
				                    file2>>bankname>>accountno>>accountpassword;
				                    f();
			                       }
			                    }
	                         {
			                  if(password==pass)
			                  {
			                  	 m1:
							     title();
						         cout<<"\n\t\t\t You have successfully Log In \n\n";
						         cout<<"\n\t\t\t !!! Welcome "<<name<<" !!!\n";
	                             cout<<"\n\t\t\t 1. Movie Booking \n\t\t\t 2. View Profile \n\t\t\t 3. Edit Profile \n\t\t\t 4. Log Out ";
	                             cout<<"\n\t\t\t\t Enter No.- "; cin>>op;
	                             switch1(op);
	                             goto m1;
 	                          }
 	                          else
 	                          {
 	                             cout<<"\n\t\t\t\t Wrond Password...";
							     Sleep(2000);
							     goto l1;
							  }
					         }
						    }
						    break;
					        }
					case 2: {
						    newaccount();
						    break;
					        }
					case 3: {
						    title();
	                        movies();
 	                        movietiming();
 	                        title();
 	                        seats();
 	                        title();
 	                        details();
 	                        title();
 	                        payment();
 	                        title();
 	                        conformation();
						    break;
					        }
 					case 4:{
 						    title();
						    cout<<"\n\n\n\t\t\t BYE BYE ";
							Sleep(1000);
							exit(0);
						    break;
					       }
					default:{
						    cout<<"\n\t\t\t Invalid option... ";
						    Sleep(1000);
						    menu();
						    break;
					        }
				}
           }
    }m;

    void moviebooking::filew()
    {
    	ofstream file1(userid,ios::binary|ios::out);
    		file1<<userid<<endl<<password<<endl<<name<<endl<<email<<endl<<phone<<endl<<paytype;
    		if(paytype==1)
    		{
    			file1<<endl<<cardname<<endl<<cardno<<endl<<expirydate;
			}
			if(paytype==2)
			{
				file1<<endl<<bankname<<endl<<accountno<<endl<<accountpassword;
			}
		file1.close();
	}
    void moviebooking::switch1(int op)
    {
     switch(op)
     {
     	case 1:{
     		    title();
		        movies();
 	            movietiming();
 	            title();
 	            seats();
 	            title();
 	            conformation();
			    m.eticket();
             	end();
 	            break;
		       }
		case 2:{
			   title();
			    cout<<"\n\t\t\t Your account details:";
			    cout<<"\n\n\t\t\t User ID  : "<<userid<<"\n\t\t\t Password : "<<password<<"\n\t\t\t Name     : "<<name<<"\n\t\t\t E-mail   : "<<email<<"\n\t\t\t Phone no.: "<<phone;
    		if(paytype==1)
    		{
    			cout<<"\n\n\t\t\t Credit Details: ";
				cout<<"\n\n\t\t\t Card holder  : "<<cardname<<"\n\t\t\t Card no.    :"<<cardno<<"\n\t\t\t Expiry date  : "<<expirydate;
			}
			if(paytype==2)
			{
				cout<<"\n\n\t\t\t Bank Details: ";
				cout<<"\n\n\t\t\t Bank             : "<<bankname<<"\n\t\t\t Account no.      : "<<accountno<<"\n\t\t\t Account Password : "<<accountpassword;
			}
			    Sleep(3000);
			    break;
	           	}

		case 3:
		{
			title();
			    cout<<"\n\n\t\t\t 1. To Change Password \n\t\t\t 2. To Edit Personal details \n\t\t\t 3. To Edit Payment details";
			    cout<<"\n\n\t\t\t Enter no.- "; cin>>op;
			    switch(op)
			    {
			    	case 1: {
			    		     title();
			    		     g4:
							 cout<<"\n\n\t\t\t Enter Existing Password :- ";	cin>>pass;
							 if(password==pass)
							 {
							  g3:
			                  cout<<"\n\t\t\t Enter New Password( must be more than 5 characters ) :- "; cin>>password;
			                  vlen=password.length();
				              if(vlen<5)
    			              {   cout<<"\t\t\t Invalid Password \n"; goto g3; }
    			              filew();
    			              cout<<"\n\n\t\t\t Password Successfully Changed  ";
    			              Sleep(500);
    			              for(i=5;i>=0;i--)
    			                {
    			                  title();
    			                  cout<<"\n\t\t\t You'll be automatically Redirected to Log In page in "<<i<<" sec";
    			                  Sleep(1000);
    			                }
    			              }
    			             else
    			             {
    			             	cout<<"\n\t\t\t Password do not match..";
    			             	Sleep(1000);
    			             	goto g4;
							 }
						      break;
					        }

			    	case 2: {
			    		     title();
    			             details();
							 filew();
 						     break;
					        }
					case 3: {
						     title();
						     paymentmethod();
						     filew();
						     break;
					        }
		       }
	    }
	    case 4:
		{
	            menu();
			    break;
		}

    }
  }
    void moviebooking::accounts()
    {
      i=0,accstatus=0;
 ifstream f1("accounts",ios::binary|ios::in);
	  	while(f1)
	  	{
	  		f1>>users[i];
	  		if(user==users[i])
	  		{
	  		    accstatus=1;
			}
			if(userid==users[i])
	  		    {
	  		        accstatus1=0;
			    }
			i++;
		}
	  f1.close();
	}

	void moviebooking::admin1()
    {
	 title();
	 cout<<"\n\n\t\t\t !!! Welcome Varinder Singh !!! ";
	 cout<<"\n\n\t\t\t 1. To Manage Movies \n\t\t\t 2. To Manage Theaters \n\t\t\t 3. To Manage Accounts \n\t\t\t 4. Settings ";
    }
 main()
 {
    system("color 17");
    m.menu();
    m.eticket();
 	end();
 	m.menu();
 }
