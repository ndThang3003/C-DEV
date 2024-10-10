#include <iostream>
#include <iomanip> 
using namespace std;
int main ()
{
	double  d1, d2, d3;        // diêm hê 10 môn 1, 2, 3 
	double  dh1, dh2, dh3;     // diêm hê 4 môn 1, 2, 3 
	string ho_ten;
	cout << " nhap ho ten: ";
	cin >> ho_ten; 
	
	getline (cin, ho_ten );
	
	cout << " nhap diem mon 1, 2, 3:  ";
    cin >> d1>> d2>> d3;

	
	// tinh trung binh
	//diem 1
        if (d1 <=10.0 && d1 >=8.5) {
            dh1 = 4.0;
        } else if (d1<8.5 && d1 >=7.0) {
            dh1 = 3.0;
        }else if (d1<7 && d1>=5.5) {
            dh1 = 2.0;
        }else if (d1<5.5 && d1>=4) {
            dh1 = 1.0;
        }else if (d1<4 && d1>=0 ) {
            dh1 = 0;
        }
    //diem 2
        if (d2 <=10.0 && d2 >=8.5) {
            dh2 = 4.0;
        } else if (d2<8.5 && d2 >=7.0) {
            dh2 = 3.0;
        }else if (d2<7 && d2>=5.5) {
            dh2 = 2.0;
        }else if (d2<5.5 && d2>=4) {
            dh2 = 1.0;
        }else if (d2<4 && d2>=0 ) {
            dh2 = 0;
        }
    //diem 3 
        if (d3 <=10.0 && d3 >=8.5) {
            dh3 = 4.0;
        } else if (d3<8.5 && d3 >=7.0) {
            dh3 = 3.0;
        }else if (d3<7 && d3>=5.5) {
            dh3 = 2.0;
        }else if (d3<5.5 && d3>=4) {
            dh3 = 1.0;
        }else if (d3<4 && d3>=0 ) {
            dh3 = 0;
        }
        
        //check diem
    if (d1 <0 || d1 >10) {
        cout<<"nhap diem khong hop le!";
    }else if (d2 <0 || d2>10) {
        cout<<"nhap diem khong hop le!";
    }else if (d3 <0 || d3>10) {
        cout<<"nhap diem khong hop le!";
    }else {//cout
        cout<<setprecision(2);
        cout<<"Diem trung binh he 10 cua 3 mon: "<<(d1+d2+d3)/3<<endl;
        cout<<"Diem trung binh he 4 cua 3 mon: "<<(dh1+dh2+dh3)/3<<endl;
    }
    return 0;
   
 } 
