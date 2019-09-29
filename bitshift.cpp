#include "../std_lib_facilities.h"

int main(){
	
	int a = 1;
	int db = 0;
	while(a){
		a = a << 1;
		db++;
	}
	cout << db << endl;
	return 0;
}
