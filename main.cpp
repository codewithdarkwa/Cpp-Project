#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;
void showMenu(){
    cout<<endl<<endl;
cout<<"*************************************Menu********************************************************\n";
cout<<"  1.Simultaneous Equation   || 2.Quadratic Equation      || 3.Linear Equation                  || "<<endl;
cout<<"  4.Sequence and Series     || 5.Fibonacci Sequence      || 6.Matrix                           || "<<endl;
cout<<"  7.Prime Numbers           || 8.Factorial of a number   || 9.Number Bases                     || "<<endl;
cout<<"  10.Mean And Median        || 11.Temperature conversion || 12.Permutation and Combination     || "<<endl;
cout<<"  13.Patterns in C++        || 14.Palindromic numbers    || 15.Multiplication Table Generator  || "<<endl;
cout<<"  16.Sorting                ||                           ||                                    || "<<endl;
cout<<"*************************************************************************************************\n"<<endl;
}
void Sequence_Series(){
  int choice;
    cout<<"============================"<<endl;
    cout<<"| 1. Arithmetic Sequence   |"<<endl;
    cout<<"| 2. Geometric Sequence    |"<<endl;
    cout<<"============================"<<endl;
    cout<<"Select one::";
    cin>>choice;
    system("cls");
    int op;
    if(choice==1)
    {
         int s;
            cout<<"Enter the number of Sequence given::";
            cin>>s;
            int arr[s];
            for(int i=0;i<s;i++){
                cout<<"Enter the numbers::";
                cin>>arr[i];
            }
            system("cls");
              for(int i=0;i<s;i++){
                cout<<arr[i]<<" ";
            }
        cout<<endl<<endl;
        cout<<"*********************************************"<<endl;
        cout<<"1.Find the First term and Common difference"<<endl;
        cout<<"2.Find the nth term"<<endl;
        cout<<"*********************************************"<<endl;
        cout<<"choose an option::";
        cin>>op;
        switch(op){
    case 1:
            if(arr[1]-arr[0]==arr[2]-arr[1])
        cout<<"The first term a is "<<arr[0]<<" and the common difference d is "<<arr[1]-arr[0];
            else
         cout<<"There is no common difference in the sequence ";
         break;
    case 2:
        int nth;
        cout<<"Enter the nth term::";
        cin>>nth;
         if(arr[1]-arr[0]==arr[2]-arr[1]){
        cout<<"The "<<nth<<"th term of the sequence is "<<arr[0]+((nth-1)*(arr[1]-arr[0]));
         }
        else
         cout<<"There is no common difference in the sequence ";
         break;
    default:
        cout<<"Invalid input";
        break;
        }
    }
    if(choice==2){
         int s;
            cout<<"Enter the number of Sequence given::";
            cin>>s;
            int arr[s];
            for(int i=0;i<s;i++){
                cout<<"Enter the numbers::";
                cin>>arr[i];
            }
            system("cls");
              for(int i=0;i<s;i++){
                cout<<arr[i]<<" ";
            }
        cout<<endl<<endl;
        cout<<"*********************************************"<<endl;
        cout<<"1.Find the First term and Common ratio"<<endl;
        cout<<"2.Find the nth term"<<endl;
        cout<<"*********************************************"<<endl;
        cout<<"choose an option::";
        int op;
        cin>>op;
        if(op==1){
              if(arr[1]/arr[0]==arr[2]/arr[1])
        cout<<"The first term a is "<<arr[0]<<" and the common ratio r is "<<arr[1]/arr[0];
            else
         cout<<"There is no common ratio in the sequence ";
        }
        else if(op==2){
             int nth;
        cout<<"Enter the nth term::";
        cin>>nth;
         if(arr[1]/arr[0]==arr[2]/arr[1]){
        cout<<"The "<<nth<<"th term of the sequence is "<<arr[0] * (pow(arr[1]/arr[0],nth-1));
         }
        else
         cout<<"There is no common ratio in the sequence ";
        }

    }
}
void Matrix(){

    cout<<setw(45)<<"==========================================\n";
	cout<<"1.Addition of Matrix"<<endl;
	cout<<"2.Transpose of a Matrix"<<endl;
	cout<<"3.Multiplication of Matrix"<<endl;
	cout<<setw(45)<<"==========================================\n";
	int choice;
	cout<<"Choose an option:: ";
	cin>>choice;
	switch(choice){
		case 1:
			//Declaring the array a, b and sum as an integer.
	int a[2][3], b[2][3], sum[2][3];
	//array a
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<" Enter the value A: ";
			//accepting the input of a.
			cin>>a[i][j];

	}
		}
		//clearing the console
		system("cls");
       //Displaying to the console the input of a.
    cout<<"The matrix A is:::\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<setw(2)<<a[i][j]<<" ";
		}
		cout<<endl;
	}

    //array b
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter the value of B: ";
			//accepting the value of b.
			cin>>b[i][j];

		}
	}
	//clearing the console
	system("cls");
	 //Displaying to the console the array of a
	 cout<<"The matrix A is:::\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<setw(2)<<a[i][j]<<" ";
		}
		cout<<endl;
	}
		//Displaying to the console the array of b
	cout<<"The matrix B is:::\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<setw(2)<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	//solving for the sum of matrix a and b
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			sum[i][j]=a[i][j]+ b[i][j];
		}
		cout<<endl;
	}
	//Displaying to the console the sum of matrix.
	cout<<"The sum of matrix A+B is \n";
	for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
			cout<<setw(2)<<sum[i][j]<<" ";
		}
		cout<<endl;
}
     break;

        case 2:
            //Declaring a and trans array as an integer

	int x[2][3], trans[3][2];
	//array
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter value a ";
			//accepting the value of a
			cin>>x[i][j];
		}
	}
	//clearing the console
	system("cls");
	//array trans
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			trans[i][j]= x[j][i];
		}
	}
	//Displaying to the console matrix of A
	cout<<"Matrix A:::\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout <<x[i][j]<<" ";
		}
		cout<<endl;
	}
	//Displaying to the console Transpose of A
	cout<<"Transpose of matrix A:::\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
		cout<<trans[i][j]<<" ";
		}
		cout<<endl;
	}
	break;
    system("cls");
        case 3:
    int c[2][3],y[3][2], z[2][2];

 	for(int i=0;i<2;i++){
 		for(int j=0;j<3;j++){
		 cout<<"Enter value a:: ";
		 cin>>c[i][j];
		 }
	 }
	 cout<<endl;
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<2;j++){
	 		cout<<"Enter value b:: ";
	 		cin>>y[i][j];
		 }
	 }
	   system("cls");

	 for(int i=0;i<2;i++){
	 	for(int j=0;j<2;j++){
	 		z[i][j]=0;
	 		for(int k=0;k<3;k++){
	 			z[i][j]=z[i][j]+(c[i][k]* y[k][j]);
			 }
		 }
	 }
	     cout<<endl;
	     cout<<"Matrix A:::\n";
	 for(int i=0;i<2;i++){
	 	for(int j=0;j<3;j++){
	 		cout<<setw(2)<<c[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	   cout<<endl;
	   cout<<"Matrix B:::\n";
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<2;j++){
	 		cout<<setw(2)<<y[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	    cout<<endl;
	   cout<<"Matrix AXB:::\n";
	 for(int i=0;i<2;i++){
	 	for(int j=0;j<2;j++){
	 		cout<<setw(3)<<z[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 break;
}
}
void Quadratic(){
int a, b, c;
	double Disc, Root1, Root2;

		cout<<"Enter the value of a >>>";
		cin >>a;
		cout<<"Enter the value of b >>>";
		cin>>b;
		cout<<"Enter the constant c >>>";
		cin>>c;

	Disc =b*b-4*a*c ;
						if (Disc ==0){
							Root1=- b/2*a;
							Root2 =Root1;
							cout<<"Roots are equal and are "<<Root1<<" and "<<Root2;
							}

		               else if(Disc > 0){
		               	Root1 = -b+sqrt(Disc);
		               	Root1 = Root1/2*a;
		               	Root2 = -b-sqrt(Disc);
		               	Root2 = Root2/2*a;
		               	cout<<"Roots are unequal and are "<<Root1<<" and "<<Root2;
		               	}
		               else{
		               	cout<<"Roots are imaginary";

		               	}

}
void Palindrome(){
      int n , num, digit, rev=0;

    cout << " Please Enter a number " << endl;
    cin>>num;
    n=num;
    do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    while(num!=0);
        cout<<" The reverse of the number is "<<rev<<endl;

    if(n==rev){
        cout<<" The number is Palindromic"<<endl;
    }
    else
        cout<<" The number is not a Palindromic"<<endl;

}
void Sorting(){
    int select;
cout<<"============================================\n\n";
cout<<"1.Bubble sorting "<<endl;
cout<<"2.Selection sorting"<<endl;
cout<<"3.Insertion sorting"<<endl;
cout<<"===========================================\n";
cout<<"Select an option ";
cin>>select;
switch(select){
case 1:
    //Declaring array as an integer
	int arr[5];
	for(int i=0;i<5;i++){
		cout<<"Enter value :::";
		//Getting input from the user
		cin>>arr[i];
	}
	//clearing the console
	system("cls");
	//Displaying the unsorted array
	cout<<"The unsorted array:::\n";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	//sorting the unsorted array
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
			}
		}
		cout<<endl;
		//Displaying the sorted array
		cout<<"\nSorted array:::\n";
			for(int i=0;i<5;i++){
				cout<<arr[i]<<" ";
	}

	break;

}
}
void Mean_Median(int arr[],int Size){
    //sorting the array
for(int i=0;i<Size;i++){
    for(int j=0;j<Size-1;j++){
        if(arr[j]<arr[j+1]){
        int temp;
        temp =arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

        }
    }
}
  double sum=0;
  double median,mean;
   cout<<"Sorted array \n";
  for(int i=0;i<Size;i++){
        //Displaying the sorted array
    cout<<arr[i]<<" ";
    sum+=arr[i];
  }
  if(Size%2!=0){
    int r= Size/2;
    median=arr[r];
  }
  else{
  int  r= Size/2;
    median=(arr[r]+arr[r-1])/2.0;
  }
  mean=sum/Size;
  cout<<"\n The mean is = "<<mean;
  cout<<"\n And the median is "<<median;

}
void Fibonacci_Sequence(){
  unsigned int first,second,next,num;
     cout<<"Enter the first and second number to generate the sequence:: ";
     cin>>first>>second;
     cout<<"Enter the number of sequence to generate:: ";
     cin>>num;
     cout<<first<<" "<<second;
    for(int i=0;i<num-2;i++){
        next=first+second;
        first=second;
        second=next;
        cout<<" "<<next;
    }

}

void Multiplication_Table(){
   int start,stop;
   cout<<"Where do you want to start the Generation of the table ";
   cin>>start;
   cout<<"Where do you want to end the Table ";
   cin>>stop;
 for(int i=start;i<=stop;i++){
    for(int j=1;j<=10;j++){
        cout<<setw(2)<<" "<<i<<" * "<<j<<" = "<<i*j<<endl;
    }
    cout<<endl;
 }
}
void Prime(){
    int num;
cout<<" Enter a number to check weather prime or not ";
cin>>num;
bool IsPrime=true;
for(int i=2;i<num;i++){
    if(num%i==0){
        IsPrime=false;
        break;
    }
}
    if(IsPrime)
    cout<<num<<" is a prime number";
    else
        cout<<num<<" is not a prime number";
}
void factorial(){
 int n, factorial=1;
    cout << " Please Enter the number to find the factorial of " << endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<" The Factorial of "<<n<<" is "<<factorial<<endl;


}
int Base_conversion(int number,int base_number){
int arr[number],x=0;
while(number!=0){
int	r=number%base_number;
	arr[x]=r;
	x++;
	number/=base_number;
}
x--;
for(x;x>=0;x--){
	cout<<arr[x];
}
}
 void Temperature_Convertion(){
     int fav;
     float c,Far,f,cel,kel;
	cout<<"*****************************\n";
	cout<<"=========================\n";
	cout<<"Temperature Conversion\n";
	cout<<"=========================\n";
	cout<<"1.Celsius to Fahrenheit\n";
	cout<<"2.Fahrenheit to Celsius\n";
	cout<<"3.Celsius to Kelvin\n";
	cout<<"4.Kelvin to Celsius\n";
	cout<<"\n*****************************\n";
     cout<<"  choose an option"<<endl;
     cin>>fav;
     if(fav==1){
		cout<<"Enter temperature in celsius ";
		cin>>c;
	Far= c*1.80+32;
	cout<<"\nThe temperature is "<<Far<<"F"<<" in Fahrenheit";
     }
	else if(fav==2){
      cout<<"Enter temperature in Fahrenheit ";
      cin>>f;
        float cel;
	cel=(f-32)/1.80;
	cout<<"\nThe temperature is "<<cel<<"c"<<" in Celsius" ;
	}
	else if(fav==3){
            float kel;
       cout<<"Enter the temperature in Celsius ";
       cin>>c;
       kel = c+273;
       cout<<"\nThe temperature is "<<kel<<"K"<<" in kelvin";

	}
	else if(fav==4){
        cout<<"Enter the temperature in Kelvin ";
        float kel;
        cin>>kel;
        cel =kel-273;
        cout<<"\nThe temperature is "<<cel<<"c"<<" in Celsius";
	}
	else{
        cout<<"Invalid input\n";
	}

}
    void pattern(){
      int length;
    char symbol;
    cout<<" Length:";
    cin>>length;
    cout<<"Symbol:";
    cin>>symbol;
    for(int i=1;i<=length;i++){
        for(int j=1;j<=i;j++){
            cout<<setw(2)<<symbol;
        }
        cout<<endl;
    }
    cout<<endl<<endl;

      for(int i=length;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" "<<symbol;
        }
    cout<<endl;
      }


    }

    void Permutation_Combination(){
      long int n,r,nfact=1,rfact=1,nCr,nPr,nrfact,n_rfact=1;
    char character;
    cout<<"Enter the value of n:: ";
    cin>>n;
    cout<<"Enter Character(C OR P):: ";
    cin>>character;
    cout<<"Enter the value of r:: ";
    cin>>r;
    nrfact=n-r;
    for(int i=n;i>1;i--){
        nfact=nfact*i;
    }
    for(int i=r;i>1;i--){
        rfact=rfact*i;
    }
    for(int i=nrfact;i>1;i--){
        n_rfact*=i;
    }
   nCr= nfact/(n_rfact*rfact);
   nPr= nCr*rfact;
    switch(character){
case 'c':
    cout<<n<<"C"<<r<<" = "<<nCr;break;
case 'p':
    cout<<n<<"P"<<r<<" = "<<nPr;break;
default:
    cout<<"Invalid input";
    }
    }
    void Linear_equation(){
     double pnt[4],m;
    for(int i=0;i<4;i++){
    cout<<"Enter the points ";
    cin>>pnt[i];
    }
    system("cls");
    cout<<"The points you entered are::: "<<endl;
    cout<<"("<<pnt[0]<<","<<pnt[1]<<")"<<" and "<<"("<<pnt[2]<<","<<pnt[3]<<")"<<endl;
    m = (pnt[3]-pnt[1])/(pnt[2]-pnt[0]);
    cout<<" The gradient is "<<m<<endl;
    cout<< " Hence the equation of a line gives ";
    if(m==0)
      cout<<"y = "<<pnt[1]-(m*pnt[0]);
    else if(m<1)
      cout<<"y + "<<m*-1<<"x"<<" = "<<pnt[1]-(m*pnt[0]);
    else if(m==1)
      cout<<"y - x "<<" = "<<pnt[1]-(m*pnt[0]);
   else{
      cout<<"y - "<<m<<"x"<<" = "<<pnt[1]-(m*pnt[0]);
   }

    }
    void Simultaneous_eqn(){
    double x,y;
    double x1,y1,c1;
    cout<<"From the first equation, enter the coefficient of x,y and the constant respectively "<<endl;
    cin>>x1>>y1>>c1;
    double x2,y2,c2;
    cout<<"From the second equation, enter the coefficient of x,y and the constant respectively "<<endl;
    cin>>x2>>y2>>c2;
 system("cls");

   if(x1==1){
  cout<<"x"<<" + "<<y1<<"y = "<<c1<<"........(1)"<<endl;
  cout<<x2<<"x"<<" + "<<y2<<"y = "<<c2<<"........(2)"<<endl;
  }
  else if(y1==1){
 cout<<x1<<"x"<<" + "<<"y = "<<c1<<"........(1)"<<endl;
  cout<<x2<<"x"<<" + "<<y2<<"y = "<<c2<<"........(2)"<<endl;
  }
  else if(x2==1){
 cout<<x1<<"x"<<" + "<<y1<<"y = "<<c1<<"........(1)"<<endl;
  cout<<"x"<<" + "<<y2<<"y = "<<c2<<"........(2)"<<endl;
  }
  else if(y2==1){
 cout<<x1<<"x"<<" + "<<y1<<"y = "<<c1<<"........(1)"<<endl;
  cout<<x2<<"x"<<" + "<<"y = "<<c2<<"........(2)"<<endl;
  }
    else{
  cout<<x1<<"x"<<" + "<<y1<<"y = "<<c1<<"........(1)"<<endl;
  cout<<x2<<"x"<<" + "<<y2<<"y = "<<c2<<"........(2)"<<endl;
  }
  if(x1==x2){
    y=(c1-c2)/(y1-y2);
    x=(c1-(y1*y))/x1;
    cout<<"The value of x and y are "<<x<<" and "<<y<<endl;
  }
  else{
    y=(c1*x2-c2*x1)/(y1*x2-y2*x1);
    x=(c1-(y1*y))/x1;
    cout<<"The value of x and y are "<<x<<" and "<<y<<endl;
  }

    }
  int main(){
  cout<<setw(30)<< "Loading ";
  for(int i=0;i<5;i++){
         Sleep(500);
  cout<<"...";
    }
    system("cls");
	int option;
	do{
	showMenu();
	cout<<"Choose an  option:: ";
	cin>>option;
	system("cls");
	switch(option){
		case 1: Simultaneous_eqn();
		break;
		case 2: Quadratic();
		break;
        case 3: Linear_equation();
        break;
        case 4: Sequence_Series();
        break;
        case 5: Fibonacci_Sequence();
        break;
        case 6: Matrix();
        break;
        case 7: Prime();
        break;
        case 8: factorial();
        break;
        case 11: Temperature_Convertion();
        break;
        case 12: Permutation_Combination();
        break;
        case 13: pattern();
        break;
        case 14:Palindrome();
        break;
        case 15:Multiplication_Table();
        break;
        case 16:Sorting();
        case 9:
    int num,base;
    cout<<"\n Enter the number in base 10::: ";
cin>>num;
cout<<"\n Enter the number in other base::: ";
cin>>base;
     Base_conversion(num,base);
     break;
        case 10:
        int size;
        cout<<" Enter the size of the array ";
        cin>>size;
        int myarr[size];
        for(int i=0;i<size;i++){
        cout<<"Enter value ";
        cin>>myarr[i];

    }
      Mean_Median(myarr,size);
        break;


	}
	}while(option!=0);
return 0 ;
}

