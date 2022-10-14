//

#include <iomanip>
#include <iostream>
using namespace std;
void getinput(int &, int &, int &);
void maxmin(int, int, int, int &, int &);
void getinput(int &n1, int &n2, int &n3){
    cin >> n1 >> n2 >> n3;
}
void maxmin(int n1, int n2, int  n3, int &max, int &min){
	if (n1 < n2 && n1 < n3){
		if (n2 < n3){
			min = n1;
			max = n3;
		} else {
			min = n1;
			max = n2;
		}
	} else if (n2 < n1 && n2 < n3){
		if (n1 < n3){
			min = n2;
			max = n3;
		} else {
			min = n2;
			max = n1;
		}
	} else if (n3 < n1 && n3 < n2){
		if (n1 < n2){
			min = n3;
			max = n2;
		} else {
			min = n3;
			max = n1;
		}
	}
}

// complete the function maxmin( )
