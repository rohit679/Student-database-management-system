//////////////////////////////////////////////////////////////////////////////
///********************STUDENT DATABASE MANAGEMENT SYSTEM******************///
//////////////////////////////////////////////////////////////////////////////


/*+++++++++++++++++++++++++++++++HEADER FILES+++++++++++++++++++++++++++++++*/

#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#define ENTER 13
#define TAB 9
#define BKSP 8

/*++++++++++++++++++++++++++FUNCTION DECLARATION++++++++++++++++++++++++++++*/

void introduction();
void front_page();
void incharge();
void student();
void update_student_address();
void update_student_age();
void update_student_class();
void check_data();
void admin();
void add_new_data();
void update_student_data();
void show_all_data();
void show_single_data();
void erase_all_data();
void erase_single_data();
void update_password();
void check_authentication();

/*+++++++++++++++++++++++++++++STUDENT CLASS++++++++++++++++++++++++++++++++*/

class student
{
	public:
	char name[50],father_name[50],address[50];
	char roll_number[20];
	int admission_number;
	char standard[5],age[5],password[10];
	void input()
	{
		cout<<"\n--------------------------------------------------------------------------------";
		cout<<"\n++++++++++++++++++++++++++++SHREE JAIN VIDYALAYA++++++++++++++++++++++++++++++++";
		cout<<"\n--------------------------------------------------------------------------------";
		cout<<"\n1)ENTER NAME:";
		gets(name);
		cout<<"\n2)ENTER FATHER'S NAME:";
		gets(father_name);
		cout<<"\n3)ENTER AGE:";
		gets(age);
		cout<<"\n4)ENTER ADDRESS:";
		gets(address);
		cout<<"\n5)ENTER STANDARD:";
		gets(standard);
		cout<<"\n6)ENTER ROLL NUMBER:";
		gets(roll_number);
		cout<<"\n7)ENTER STUDENT PASSWORD";
		gets(password);
	}
	void output()
	{
		cout<<"\n--------------------------------------------------------------------------------";
		cout<<"\n++++++++++++++++++++++++++++SHREE JAIN VIDYALAYA++++++++++++++++++++++++++++++++";
		cout<<"\n--------------------------------------------------------------------------------";
		cout<<"\n################################################################################";
		cout<<"\n\t\t\tADMISSION NUMBER: "<<admission_number;
		cout<<"\n\t\t\tNAME: "<<name;
		cout<<"\n\t\t\tFATHER NAME: "<<father_name;
		cout<<"\n\t\t\tAGE: "<<age;
		cout<<"\n\t\t\tSTANDARD: "<<standard;
		cout<<"\n\t\t\tADDRESS: "<<address;
		cout<<"\n\t\t\tROLL NUMBER: "<<roll_number;
		cout<<"\n################################################################################\n";
	}
}j;

/*++++++++++++++++++++++++++++++MAIN FUNCTION+++++++++++++++++++++++++++++++*/

void main()
{
	clrscr();
	introduction();
	front_page();
	getch();
}

/*+++++++++++++++++++++++++++INTRODUCTION FUNCTION++++++++++++++++++++++++++*/

void introduction()
{
	textbackground(2);
	textcolor(BLACK);
	cout<<"\n--------------------------------------------------------------------------------";
	cout<<"\n+++++++++++++++++++++STUDENT DATABASE MANAGEMENT SYSTEM+++++++++++++++++++++++++";
	cout<<"\n--------------------------------------------------------------------------------";
	cout<<"\n\t\t!!!Welcome to student database management system!!!";
	cout<<"\n\n->This project covers almost all aspects that a console program can cover.";
	cout<<"\n->It includes insertion,deletion,updation functions.";
	cout<<"\n->There is much more to do,so enjoy!!!";
	delay(500);
	cout<<"\n\n\n\nDESIGNED BY:-";
	cout<<"\n\t\tROHIT PRASAD\n\t";
	delay(500);
	cout<<"\t\t\tPRESS ANY KEY TO CONTINUE";
	getch();
}

/*++++++++++++++++++++++++++++++++FRONT PAGE++++++++++++++++++++++++++++++++*/

void front_page()
{
	int x=0;
	while(x<3)
	{
		textbackground(5);
		clrscr();
		char a;
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\t++++++++++++++++++++++SHREE JAIN VIDYALAYA++++++++++++++++++++++";
		cout<<"\n\t----------------------------------------------------------------";
		delay(400);
		cout<<"\n\n\n\t\t\t   1)ENTRY AS INCHARGE";
		delay(300);
		cout<<"\n\n\t\t\t   2)ENTRY AS STUDENT";
		delay(500);
		cout<<"\n\n\t\t\t   3)EXIT";
		sleep(1);
		cout<<"\n\n\n\t\t\t   ENTER YOUR CHOICE(1-3):";
		cin>>a;
		switch(a)
		{
			case '1':
			{
				incharge();
				break;
			}
			case '2':
			{
				student();
				break;
			}
			case '3':
			{
				exit(0);
				break;
			}
			default:
				cout<<"\nPLEASE ENTER A CORRECT OPTION";
				getch();
		}
		x++;
	}
	cout<<"\nYOU HAVE REACHED MAXIMUM LIMIT\nPLEASE TRY LATER";
	getch();
	exit(0);
}

/*++++++++++++++++++++++++++ADMIN CHECKING SECTION++++++++++++++++++++++++++*/

void incharge()
{
	textbackground(4);
	char a[]="rohit";
	char b[10];
	while(1)
	{
		again:
		clrscr();
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\t++++++++++++++++++++++SHREE JAIN VIDYALAYA++++++++++++++++++++++";
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\n\t\t\t   *************************";
		cout<<"\n\t\t\t   ADMIN AUTHENTICATION PAGE";
		cout<<"\n\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\n\t\t\tENTER PASSWORD:";
		int z=0;
		char ch;
		while(1)
		{
			ch=getch();
			if(ch== ENTER || ch==TAB)
			{
				b[z]='\0';
				break;
			}
			else if(ch==BKSP)
			{
				if(z>0)
				{
					z--;
					cout<<"\b \b";
				}
			}
			else
			{
				b[z++]=ch;
				cout<<"* \b";
			}
		}
		if(strcmp(a,b)==0)
		{
			admin();
		}
		else
		{
			cout<<"\n\n\n\n\t\tenter again";
			getch();
			goto again;
		}
	}
}

/*++++++++++++++++++++++++++++++ADMIN SECTION+++++++++++++++++++++++++++++++*/

void admin()
{
	char d;
	while(1)
	{
		textbackground(2);
		clrscr();
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\t++++++++++++++++++++++SHREE JAIN VIDYALAYA++++++++++++++++++++++";
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\n\t****************************************************************";
		cout<<"\n\t+++++++++++++++++++++++++++ADMIN PAGE+++++++++++++++++++++++++++";
		cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\t1)ADD A NEW STUDENT DATA";
		cout<<"\n\t2)DISPLAY PARTICULAR STUDENT DATA";
		cout<<"\n\t3)DISPLAY ALL STUDENT DATA";
		cout<<"\n\t4)DELETE PARTICULAR DATA";
		cout<<"\n\t5)DELETE ALL DATA";
		cout<<"\n\t6)BACK TO THE FRONT PAGE";
		cout<<"\n\t7)EXIT";
		cout<<"\n\tENTER YOUR CHOICE(1-7):";
		cin>>d;
		switch(d)
		{
			case '1':
			{
				add_new_data();
				break;
			}
			case '2':
			{
				show_single_data();
				break;
			}
			case '3':
			{
				show_all_data();
				break;
			}
			case '4':
			{
				erase_single_data();
				break;
			}
			case '5':
			{
				erase_all_data();
				break;
			}
			case '6':
			{
				front_page();
				break;
			}
			case '7':
				exit(0);
			default:
			{
				cout<<"\nPLEASE ENTER A VALID OPTION";
			}
		}
	}
}

/*++++++++++++++++++++++++++++++STUDENT SECTION++++++++++++++++++++++++++++*/

void student()
{
	char g;
	textbackground(5);
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\t++++++++++++++++++++++SHREE JAIN VIDYALAYA++++++++++++++++++++++";
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\n\t****************************************************************";
		cout<<"\n\t+++++++++++++++++++++++++STUDENT PAGE+++++++++++++++++++++++++++";
		cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n\n\t1)CHECK YOUR DATA";
		cout<<"\n\t2)UPDATE YOUR DATA";
		cout<<"\n\t3)BACK TO FRONT PAGE";
		cout<<"\n\t4)EXIT";
		cout<<"\n\n\n\tENTER ANY CHOICE(1-4):";
		cin>>g;
		switch(g)
		{
			case '1':
			{
				check_data();
				break;
			}
			case '2':
			{
				check_authentication();
				break;
			}
			case '3':
			{
				front_page();
				break;
			}
			case '4':
			{
				exit(0);
				break;
			}
			default:
				cout<<"\nPLEASE ENTER A VALID OPTION";
		}
	}
}

/*++++++++++++++++++++++++++CHECK AUTHENTICATION++++++++++++++++++++++++++++*/

void check_authentication()
{
	textbackground(4);
	clrscr();
	char pass[10];
	int admission;
	int m=0;
	fstream k;
	cout<<"ENTER ADMISSION NUMBER:";
	cin>>admission;
	k.open("example.dat",ios::in);
	while(k.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number==admission)
		{
			cout<<"\nENTER YOUR PASSWORD:";
			gets(pass);
			if(strcmp(j.password,pass)==0)
			{
				m=1;
				break;
			}
			else
			{
				cout<<"YOU HAVE ENTERED A WRONG PASSWORD\nPRESS ENTER TO CONTINUE\n";
				getch();
				student();
			}
		}
	}
	k.clear();
	k.close();
	if(m==1)
	{
		update_student_data();
	}
	getch();
}

/*+++++++++++++++++++++++++STUDENT DATA UPDATE PAGE+++++++++++++++++++++++++*/

void update_student_data()
{
	textbackground(4);
	clrscr();
	while(1)
	{
		clrscr();
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\t++++++++++++++++++++++SHREE JAIN VIDYALAYA++++++++++++++++++++++";
		cout<<"\n\t----------------------------------------------------------------";
		cout<<"\n\n\t****************************************************************";
		cout<<"\n\t+++++++++++++++++++++++++UPDATION PAGE++++++++++++++++++++++++++";
		cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		char h;
		cout<<"\n\n\n\t1)UPDATE YOUR ADDRESS";
		cout<<"\n\t2)UPDATE YOUR AGE";
		cout<<"\n\t3)UPDATE YOUR STANDARD";
		cout<<"\n\t4)UPDATE YOUR PASSWORD";
		cout<<"\n\t5)BACK TO MENU PAGE";
		cout<<"\n\n\tENTER YOUR CHOICE(1-5):";
		cin>>h;
		switch(h)
		{
			case '1':
			{
				update_student_address();
				break;
			}
			case '2':
			{
				update_student_age();
				break;
			}
			case '3':
			{
				update_student_class();
				break;
			}
			case '4':
			{
				update_password();
			}
			case '5':
			{
				student();
				break;
			}
			default:
			cout<<"\n\n\tPLEASE ENTER A VALID CHOICE";
		}
	}
}

/*++++++++++++++++++++++++++++NEW STUDENT ENTRY+++++++++++++++++++++++++++++*/

void add_new_data()
{
	textbackground(1);
	int temp;
	clrscr();
	fstream i,k;
	k.open("example.dat",ios::in);
	while(k.read((char *)&j,sizeof(j)))
	{
	}
	temp=j.admission_number;
	k.clear();
	k.close();
	i.open("example.dat",ios::out|ios::ate);
	if(i.tellp()==0)
	{
		j.admission_number=1;
	}
	else
	{
		j.admission_number=++temp;
	}
	j.input();
	i.write((char *)&j,sizeof(j));
	cout<<"written";
	i.close();
	getch();
}

/*+++++++++++++++++++++++++DISPLAY ALL STUDENT DATA+++++++++++++++++++++++++*/

void show_all_data()
{
	textbackground(4);
	clrscr();
	fstream k;
	k.open("example.dat",ios::in);
	while(k.read((char *)&j,sizeof(j)))
	{
		clrscr();
		j.output();
		getch();
	}
	k.clear();
	k.close();
	getch();
}

/*+++++++++++++++++++++++++DISPLAY SINGLE STUDENT DATA+++++++++++++++++++++++++*/

void show_single_data()
{
	textbackground(4);
	clrscr();
	int m=0,admission;
	cout<<"ENTER ADMISSION NUMBER:";
	cin>>admission;
	fstream k;
	k.open("example.dat",ios::in);
	while(k.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number==admission)
		{
			m=1;
			break;
		}
	}
	k.clear();
	if(m==1)
	{
		k.seekg(k.tellp()-sizeof(j));
		j.output();
	}
	k.close();
	getch();
}

/*++++++++++++++++++++++++++++UPDATING ADDRESS++++++++++++++++++++++++++++++*/

void update_student_address()
{
	textbackground(5);
	clrscr();
	fstream l;
	char address[50],addr[50];
	int adm=j.admission_number;
	int m=0;
	l.open("example.dat",ios::out|ios::in|ios::ate);
	l.seekg(0);
	while(l.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number==adm)
		{
		m=1;
		break;
		}
	}
	l.clear();
	if(m==1)
	{
		l.seekg(l.tellp()-sizeof(j));
		cout<<"\n\n\t\tENTER OLD ADDRESS:";
		gets(addr);
		cout<<"\n\n\t\t\nENTER NEW ADDRESS:";
		gets(address);
		strcpy(j.address,address);
		l.write((char*)&j,sizeof(j));
		cout<<"\n\n\n\t\t\tADDRESS UPDATED.......";
	}
	l.close();
	getch();
}

/*++++++++++++++++++++++++++++UPDATE STUDENT AGE++++++++++++++++++++++++++++*/

void update_student_age()
{
	textbackground(2);
	clrscr();
	fstream n;
	char ageb[5],agec[5];
	int n1=0,adm;
	adm=j.admission_number;
	n.open("example.dat",ios::out|ios::in|ios::ate);
	n.seekg(0);
	while(n.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number==adm)
		{
			n1=1;
			break;
		}
	}
	n.clear();
	if(n1==1)
	{
		n.seekg(n.tellp()-sizeof(j));
		cout<<"\n\n\t\tENTER OLD AGE:";
		gets(ageb);
		cout<<"\n\n\t\t\nENTER NEW AGE:";
		gets(agec);
		strcpy(j.age,agec);
		n.write((char*)&j,sizeof(j));
		cout<<"\n\n\n\t\t\tAGE APDATED.......";
	}
	n.close();
	getch();
}

/*++++++++++++++++++++++++++UPDATE STUDENT STANDARD+++++++++++++++++++++++++*/

void update_student_class()
{
	textbackground(5);
	clrscr();
	fstream r;
	char stana[5],stanb[5];
	int r1=0,adm;
	r.open("example.dat",ios::out|ios::in|ios::ate);
	r.seekg(0);
	while(r.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number==adm)
		{
			r1=1;
			break;
		}
	}
	r.clear();
	if(r1==1)
	{
		r.seekg(r.tellp()-sizeof(j));
		cout<<"\n\n\t\tENTER OLD STANDARD:";
		gets(stana);
		cout<<"\n\n\t\t\nENTER NEW STANDARD:";
		gets(stanb);
		strcpy(j.standard,stanb);
		r.write((char*)&j,sizeof(j));
		cout<<"\n\n\n\t\t\STANDARD UPDATED.......";
	}
	r.close();
	getch();
}

/*++++++++++++++++++++++++++SHOWING INDIVIDUAL DATA+++++++++++++++++++++++++*/

void check_data()
{
	textbackground(3);
	clrscr();
	fstream s;
	char pass[10];
	int admission;
	cout<<"\n\n\tENTER YOUR ADMISSION NUMBER";
	cin>>admission;
	s.open("example.dat",ios::in);
	while(s.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number==admission)
		{
			cout<<"\nENTER YOUR PASSWORD:";
			gets(pass);
			if(strcmp(j.password,pass)==0)
			{
				j.output();
				break;
			}
			else
			{
				cout<<"\nYOU HAVE ENTERED WRONG PASSWORD\nPRESS ENTER TO CONTINUE";
				getch();
				student();
			}
		}
	}
	s.clear();
	s.close();
	getch();
}

/*+++++++++++++++++++++++++DELETING INDIVIDUAL DATA+++++++++++++++++++++++++*/

void erase_single_data()
{
	textbackground(4);
	clrscr();
	fstream u,v;
	u.open("example.dat",ios::in);
	v.open("example1.dat",ios::out|ios::ate);
	int admission;
	cout<<"ENTER YOUR ADMISSION NUMBER";
	cin>>admission;
	while(u.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number!=admission)
		{
			v.write((char *)&j,sizeof(j));
		}
	}
	u.clear();
	v.close();
	remove("example.dat");
	rename("example1.dat","example.dat");
	cout<<"\n\n\t\t\tDATA DELETED.......";
	getch();
}

/*+++++++++++++++++++++++++++++DELETING ALL DATA++++++++++++++++++++++++++++*/

void erase_all_data()
{
	textbackground(4);
	clrscr();
	fstream u,v;
	u.open("example.dat",ios::in);
	v.open("example1.dat",ios::in|ios::out|ios::ate);
	v.close();
	remove("example.dat");
	rename("example1.dat","example.dat");
	cout<<"\n\n\t\t\tALL DATA DELETED.......";
	getch();
}

/*++++++++++++++++++++++++++UPDATE STUDENT PASSWORD+++++++++++++++++++++++++*/

void update_password()
{
	textbackground(5);
	clrscr();
	fstream r;
	char old_pass[5],new_pass[5];
	int r1=0,addmission;
	cout<<"ENTER YOUR ADDMISSION NUMBER";
	cin>>addmission;
	r.open("example.dat",ios::out|ios::in|ios::ate);
	r.seekg(0);
	while(r.read((char *)&j,sizeof(j)))
	{
		if(j.admission_number==addmission)
		{
			r1=1;
			break;
		}
	}
	r.clear();
	if(r1==1)
	{
		r.seekg(r.tellp()-sizeof(j));
		cout<<"\n\n\t\tENTER OLD PASSWORD:";
		gets(old_pass);
		cout<<"\n\n\t\t\nENTER NEW PASSWORD:";
		gets(new_pass);
		strcpy(j.password,new_pass);
		r.write((char*)&j,sizeof(j));
		cout<<"\n\n\n\t\t\PASSWORD UPDATED.......";
	}
	else
	{
		cout<<"enter a valid addmission number";
	}
	r.close();
	getch();
}
