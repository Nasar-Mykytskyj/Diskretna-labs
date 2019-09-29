#include<iostream>

using namespace std;
int main() {
	bool x, y, z;
	bool rez1, rez2, rez3, rez4,rez;
	cout << "put your number x,y,z 0 or 1:"<<endl;
	cin >> x;
	if (((x!= 0) && (x != 1))) {
		cout << "error";
		return 0;
	}
	
	cin >> y;
	if ((y != 0) && (y != 1)) {
		cout << "error";
		return 0;
	}
	
	cin >> z;
	if ((z != 0) && (z != 1)) {
		cout << "error";
		return 0;
	}
	
	//x=>y
	if ((!x || y)==true) {
		rez1 = true;
	}
	else {
		rez1 = false;
	}
	//y=>z
	if((!y || z)==true) {
		rez2 = true;
	}
	else {
	rez2 = false;
	}
	//(x=>y)^(y=>z)
	if ((rez1 || rez2)==true) {
		rez3 = true;
	}

	else {
		rez3 =false;

	}
	//x=>z
	if ((!x || z) == true) {
		rez4 = true;
	}
	else {
		rez4 = false;
	}
	if ((!rez3 || rez4) == true) {
		rez = true;
	}
	else {
		rez = false;
	}
	cout << "|_X_|" << "|_Y_|" << "|_Z_|" << "|_X=>Y_|" << "|_y=>z_|" << "|_(x=>y)^(y=>z)_|" << "|_x=>z_|" << "|__FINALRESULT__|" << endl;
	cout <<" "<<  x <<"     " <<  y<<"    "  << z<<"      "<< rez1<<"     "<< rez2<<"          " << rez3<<"              " << rez4<<"        " << rez<<endl;
	 
}