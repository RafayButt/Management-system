#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
using std::istringstream;
int main()
{
char t;
cout<<"\tPRESS 7 FOR TEACHERS PORTAL"<<endl;
cout<<"\tPRESS 8 FOR UNI CAFE"<<endl;
cout<<"\tPRESS 9 FOR GAME ZONE"<<endl;
cin>>t
if( t=='7')
{
 {
 		int size=23,marks;
		string email,menupage,a,b;
		string password;
		string name[size];
int rollnum[size],i;
int total[i];
int perfweight;

float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
		a="www.farooqkhan@gmail.com";
		b="farooqkhan123";
		cout<<"\tWELCOME TO AU TEACHER'S PORTAL!!!"<<endl<<endl;
		cout<<"ENTER YOUR E-MAIL: "<<endl<<endl;
		cin>>email;
		cout<<"ENTER YOUR PASSWORD: "<<endl<<endl;
		cin>>password;
	if(email !=a)
	cout<<"INCORRECT EMAIL! "<<endl;
	if (password !=b)
	cout<<"INCORRECT PASSWORD! "<<endl;
	int option;
	cout<<"WHICH CLASS DO YOU WANT TO ENTER? \n CHOOSE THE SPECIFIED OPTIONS BELOW!"<<endl<<endl;
	cout<<"Press 1 for CE-112L MTS II-B"<<endl;
	cout<<"Press 2 for CE-112L MTS II-A"<<endl;
	cout<<"Press 3 for CE-112L BEEP II-A"<<endl;
	cout<<"Press 4 for CE-115L BEBME-A"<<endl;
	cin>>option;
	if(option==1)
	size=23;  
    else if(option==2)
	size=40;
    else if(option==3)
	size=45;
	else if(option==4)
	size=43;
	else
	{
		cout<<"INVALID INPUT!!!";
	}
	char menuchoice;

	cout<<"\t AU PORTAL MAIN MENU-HOMEPAGE!!! "<<endl<<endl<<endl;
	cout<<"PRESS 'A' TO ENTER LAB PERFORFANCE CORNER! "<<endl;
	cout<<"PRESS 'B' TO ENTER LAB REPORT CORNER! "<<endl;
	cout<<"PRESS 'C' TO ENTER MID EXAMS CORNER! "<<endl;
	cout<<"PRESS 'D' TO ENTER FINAL EXAMS CORNER! "<<endl;
	cout<<"PRESS 'E' TO ENTER STUDENTS GRADE CORNER! "<<endl;
	cin>>menuchoice;
	if(menuchoice=='A'||menuchoice=='a')
	{
	

string line;
ifstream file("NUSABIA1.csv");
while (getline(file, line))
{
    string rand;
    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];   
	getline(iss, rand, ',');
    iss >>  lab3perf[i];  
	getline(iss, rand, ',');
    iss >>  lab4perf[i];  
	getline(iss, rand, ',');
    iss >>  lab5perf[i];  
	getline(iss, rand, ',');
    iss >>  lab6perf[i];  
	getline(iss, rand, ',');
    iss >>  lab7perf[i];  
	getline(iss, rand, ',');  
    iss >>  lab8perf[i];  
	getline(iss, rand, ',');
    iss >>  lab9perf[i];  
	getline(iss, rand, ',');
    iss >>  lab10perf[i];  
	getline(iss, rand, ',');
    iss >>  lab11perf[i];  
	getline(iss, rand, ',');
    iss >>  lab12perf[i];   
    getline(iss, rand, ',');
    iss >>  lab13perf[i];   
    i++;}
    
 
	for(int i=0;i<size;i++)
	{
	total[i]=total[i]+marks;
	perfweight=(total[i]/210)*25;
	}
	for(int i=0;i<size;i++)
	{
	cout<<rollnum[i]<<setw(10)<<name[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)
	<<lab6perf[i]<<setw(10)<<lab7perf[i]<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)
	<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10);
	cout<<endl;
	}
	
}

else if (menuchoice=='B'||menuchoice=='b')
{
	int i,rollnum[i];
	int total[i];
	string name[size];
	float lab1rep[size];
	float lab2rep[size];
	float lab3rep[size];
	float lab4rep[size];
	float lab5rep[size];
	float lab6rep[size];
	float lab7rep[size];
	float lab8rep[size];
	float lab9rep[size];
	float lab10rep[size];
	float lab11rep[size];
	float lab12rep[size];
	float lab13rep[size];
	float repweight;
	string rand;
	string line;
    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    getline(iss, rand, ',');
    iss >> lab1rep[i];
    getline(iss, rand, ',');
    iss >>  lab2rep[i];   
	getline(iss, rand, ',');
    iss >>  lab3rep[i];  
	getline(iss, rand, ',');
    iss >>  lab4rep[i];  
	getline(iss, rand, ',');
    iss >>  lab5rep[i];  
	getline(iss, rand, ',');
    iss >>  lab6rep[i];  
	getline(iss, rand, ',');
    iss >>  lab7rep[i];  
	getline(iss, rand, ',');  
    iss >>  lab8rep[i];  
	getline(iss, rand, ',');
    iss >>  lab9rep[i];  
	getline(iss, rand, ',');
    iss >>  lab10rep[i];  
	getline(iss, rand, ',');
    iss >>  lab11rep[i];  
	getline(iss, rand, ',');
    iss >>  lab12rep[i];   
    getline(iss, rand, ',');
    iss >>  lab13rep[i];   
    i++;
	for(int i=0;i<size;i++)
	{
	total[i]=total[i]+marks;
	repweight=(total[i]/210)*20;
	}
		for(int i=0;i<size;i++)
	{
	cout<<rollnum[i]<<setw(10)<<name[i]<<setw(10)<<lab1rep[i]<<setw(10)<<lab2rep[i]<<setw(10)<<lab3rep[i]<<setw(10)<<lab4rep[i]<<setw(10)<<lab5rep[i]<<setw(10)
	<<lab6rep[i]<<setw(10)<<lab7rep[i]<<setw(10)<<lab8rep[i]<<setw(10)<<lab9rep[i]<<setw(10)<<lab10rep[i]<<setw(10)
	<<lab11rep[i]<<setw(10)<<lab12rep[i]<<setw(10)<<lab13rep[i]<<setw(10);
	cout<<endl;
	}
	}
else if(menuchoice=='C'||menuchoice=='c')
{
	int mids[size];
	int total[size];
	float question1[size];
	float question2[size];
	float question3[size];
	float question4[size];
	float question5[size];
	int i;
	float midzweight;
	string rand;
	int rollnum[i];
	string name;
	string line;
    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name, ',');
    getline(iss, rand, ',');
    iss >> question1[i];
    getline(iss, rand, ',');
    iss >>  question2[i];   
	getline(iss, rand, ',');
    iss >>  question3[i];  
	getline(iss, rand, ',');
    iss >>  question4[i];  
	getline(iss, rand, ',');
    iss >>  question5[i];  
getline(iss, rand, ',');
 i++;
 {
for(int i=0;i<size;i++)
{

total[i]=0+i;
i++;
mids[i]=(total[i]/55)*20;
}
}
}
else if(menuchoice=='D'||menuchoice=='d')
{
		int i;
		string line;
		int total[i];
		float question1[size];
		string name[size];
		float question2[size];
		float question3[size];
		float question4[size];
		float question5[size];
		float question6[size];
		float finalsweight;
		int rollnum[size];
		string rand;

    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss>>marks;
    getline(iss, rand, ',');
    iss >> question1[i];
    getline(iss, rand, ',');
    iss >>  question2[i];   
	getline(iss, rand, ',');
    iss >>  question3[i];  
	getline(iss, rand, ',');
    iss >>  question4[i];  
	getline(iss, rand, ',');
    iss >>  question5[i];  
getline(iss, rand, ',');
iss >>  question6[i];  
	getline(iss, rand, ',');
 i++;
for(int i=0;i<size;i++)
{

total[i]=total[i]+marks;
i++;
finalsweight=(total[i]/50)*25;
}
}
else if(menuchoice=='E'|| menuchoice=='e')
{
	int check, index;
	string name[size];
	int roll_num[size];
	float GPA[size];
	for (int i=0;i<size;i++)
{
{
cout<<"Student Name "<<i+1 <<"Student Data"<<endl;
cout<<"Student Name:";
cin>>name[i];
cout<<"Roll NO:";
cin>>roll_num[i];
cout<<"GPA:";
cin>>GPA[i];
}
cout<<"\n\tEnter roll number for complete report=";
cin>>check;
for(int i=0;i<5;i++)
{
if(check==roll_num[i])
index=i;	
}
cout<<"\nGRADE REPORT"<<endl;
cout<<name[index];
cout<<GPA[index];
}
}
else{
	cout<<"INVALID INPUT!"<<endl;
}
}
else if(t=='8')
{
	#include <iostream>
using namespace std;
int main(){
	
	string items[20];
	int no_deals,no,itemNo[20],check;
	float price[20],totalBillFormula,totalBill[20],totalFinalBill=0;
	
	
     items[0]="Chicken Biryani";
	 items[1]="Chicken Pulao";
     items[2]="Chinese Rice";
     items[3]="Chicken Burger";
	 items[4]="Pizza Small`";
	 items[5]="Pizza Large";
	 items[6]="Shawarma Small";
	 items[7]="Shawarma Large";
	 items[8]="Daleem";
	 items[9]="Daal Chawal";
	 items[10]="Aalo Samosa";
	 items[11]="Chicken Samosa";
	 items[12]="Roll Paratha";
	 items[13]="Fries";
	 items[14]="Pakory Plate";
	 items[15]="Water Bottle";
	 items[16]="Cold Drink";
	 items[17]="Shake";
	 items[18]="Slush";
	 items[19]="Chai";
	
	price[0]=150;
	price[1]=150;
	price[2]=180;
	price[3]=170;
	price[4]=250;
	price[5]=700;
	price[6]=100;
	price[7]=150;
	price[8]=80;
	price[9]=100;
	price[10]=20;
	price[11]=30;
	price[12]=150;
	price[13]=100;
	price[14]=150;
	price[15]=30;
	price[16]=60;
	price[17]=100;
	price[18]=100;
	price[19]=10;
		
	do
	{
	cout<<"\n\n\n\t|*---------------------------IQRA's CAFE-----------------------------*|"<<endl;
	cout<<endl<<endl;
	cout<<"(1)  Chicken Biryani                    Rs150 only."<<endl;
	cout<<"(2)  Chicken Palao                      Rs150 only."<<endl;
	cout<<"(3)  Chinese Rice                       Rs180 only."<<endl;
	cout<<"(4)  Chicken Burgar                     Rs170 only."<<endl;
	cout<<"(5)  Pizza Small                        Rs250 only."<<endl;
	cout<<"(6)  Pizza Large                        Rs700 only."<<endl;
	cout<<"(7)  Shawarma Small                     Rs100 only."<<endl;
	cout<<"(8)  Shawarma Large                     Rs150 only."<<endl;
	cout<<"(9)  Daleem                             Rs80  only."<<endl;
	cout<<"(10) Daal Chawal                        Rs100 only."<<endl;
	cout<<"(11) Aalo Samosa                        Rs20  only."<<endl;
	cout<<"(12) Chicken Samosa                     Rs30  only."<<endl;
	cout<<"(13) Roll Paratha                       Rs150 only."<<endl;
	cout<<"(14) Fries                              Rs100 only."<<endl;
	cout<<"(15) Pakory Plate                       Rs150 only."<<endl;
	cout<<"(16) Water Bottle                       Rs30  only."<<endl;
	cout<<"(17) Cold Drink                         Rs60  only."<<endl;
	cout<<"(18) Shake                              Rs100 only."<<endl;
	cout<<"(19) Slush                              Rs100 only."<<endl;
	cout<<"(20) Chai                               Rs10  only."<<endl;
	
	
	cout<<endl;
	cout<<"Please select the order number: ";
	cin>>no;
	cout<<"Please enter the number of deals: ";
	cin>>no_deals;
	
	itemNo[no-1]=no;
	cout<<endl;
	
	totalBillFormula=price[no-1]*no_deals;
	switch(itemNo[no-1]) 
	{
	
        	case 1:
		totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Chicken Biryani."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: "<<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;

		break;
			case 2:
		totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order Chicken Palao."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: "<<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
				case 3:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Chinese Rice."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: "<<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
				case 4:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Chicken Burgar."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: "<<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;

		break;
				case 5:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Pizza Small ."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: "<<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;

		break;
				case 6:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Pizza Large."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 7:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Shawarma Small."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 8:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Shawarma Large."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 9:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Daleem."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 10:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Daal Chawal."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 11:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Aalo Samosa."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 12:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Chicken Samosa."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 13:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Roll Paratha."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 14:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Fries."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 15:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Pakory Plate."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 16:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Water Bottle."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 17:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Cold Drink."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 18:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Shake."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 19:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Slush."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;
		
					case 20:
					totalBill[no-1]=totalBillFormula+totalBill[no-1];
		cout<<"Order : Chai."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal:" <<price[no-1]<<endl;
		cout<<"Total price : "<<"Rs"<<totalBill[no-1]<<" "<<"only."<<endl;
		cout<<endl;
		
		break;


	}
		cout<<endl <<"Do You Want To Order Something Else?";
		cout<<endl <<"Press 1 for yes and 2 for no: ";
		cin>>check;
		
		

	}while(check==1);
	
	for(int i=0;i<20;i++)
		totalFinalBill=totalFinalBill+totalBill[i];
		
		cout<<endl <<"Final Bill=" <<totalFinalBill;
		cout<<"\n~---------THANK YOU FOR COMING-----------~"<<endl;
	

return 0;
}
}
else if(t=='9')
{
	#include <iostream>
using namespace std;
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main()
{
int player = 1,i,choice;
char mark;
do
{

board();

if(player % 2)
player = 1;

else
player = 2;
cout <<"Player "<< player <<", enter a number: "; cin >> choice;

if(player == 1)
{
mark = 'X';
}

else
{
mark = 'O';
}

if (choice == 1&& square[1] == '1')
square[1] = mark;

else if(choice==2&& square[2]== '2')
square[2] =mark;
else if(choice==3&& square[3]=='3')
square[3] =mark;
else if (choice== 4 && square[4] == '4')
square[4] =mark;
else if (choice== 5 && square[5] == '5')
square[5] =mark;
else if (choice== 6 && square[6] == '6')
square[6] =mark;
else if (choice== 7 && square[7] == '7')
square[7] =mark;
else if (choice== 8 && square[8] == '8')
square[8] =mark;
else if (choice== 9 && square[9] == '9')
square[9] =mark;
else
{
cout<<"Invalid move because u entered an invalid number ";
player--;
cin.ignore();
cin.get();
}

i=checkwin();

player++;

}while(i==-1);

board();

if(i==1)
cout<<"==>  Player "<<--player<<" win ";

else
cout<<"==>  Game draw";

cin.ignore();
cin.get();

return 0;

}

int checkwin()
{

if (square[1] == square[2] && square[2] == square[3])
return 1;

else if (square[4] == square[5] && square[5] == square[6])
return 1;

else if (square[7] == square[8] && square[8] == square[9])
return 1;

else if (square[1] == square[4] && square[4] == square[7])
return 1;

else if (square[2] == square[5] && square[5] == square[8])
return 1;

else if (square[3] == square[6] && square[6] == square[9])
return 1;

else if (square[1] == square[5] && square[5] == square[9])
return 1;

else if (square[3] == square[5] && square[5] == square[7])
return 1;

else if (square[1] != '1'&& square[2] != '2'&& square[3] != '3' &&square[4] != '4'&& square[5] != '5'&& square[6] != '6'&&square[7] != '7'&& square[8] != '8'&& square[9] != '9')
return 0;

else
return -1;

}

void board()
{

system("cls");
cout<<"\n==========================";
cout <<"\n\tTic Tac Toe\n";
cout<<"\n==========================\n";
cout <<"Player 1 (X) - Player 2 (O)"<< endl << endl; cout << endl;
cout <<"     ||     ||"<<endl;
cout <<""<< square[1] <<"    ||"<< square[2] <<"    ||"<< square[3] << endl;
cout <<"=====||=====||====="<<endl;
cout <<"     ||     ||"<<endl;
cout <<""<< square[4] <<"    ||"<< square[5] <<"    ||"<< square[6] << endl;
cout <<"=====||=====||====="<<endl;
cout <<"     ||     ||"<<endl;
cout <<""<< square[7] <<"    ||"<< square[8] <<"    ||"<< square[9] << endl;
cout <<"     ||     ||"<<endl << endl;
}

}
else
cout<<"ENTER VALID OPTION"<<endl;
]
