#include "std_lib_facilities.h"

int main()

	try {

		cout << " Success!\n" ;
		cout << " Success!\n" ;
		cout << " Success" << "!\n" ;
		cout << " Success!" << "\n" ;
		int res = 7; vector<int> v(10); v[5] = res; cout << " Success!\n" ;
		vector<int> v2(10); v2[5] = 7; if (v2[5]==7) cout << " Success!\n" ;
		if (1) cout << " Success!\n" ; else cout << " Fail!\n" ;
		bool c = true; if (c) cout << " Success!\n" ; else cout << " Fail!\n" ;
		string s = " ape " ; bool c2 = true; if (c2) cout << " Success!\n" ;
		string s2 = " ape " ; if (s2== " ape " ) cout << " Success!\n";
		string s3 = " ape " ; if (s3!= " fool " ) cout << " Success!\n" ;
		string s4 = " ape " ; if (s4== " ape " ) cout << " Success!\n" ;
		vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << " Success!\n" ;
		vector<char> v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << " Success!\n" ;
		string s5 = " Success!\n" ; for (int i=0; i<10; ++i) cout << s5[i];
		if (true) /*then*/ cout << " Success!\n" ; else cout << " Fail!\n " ;
		int x = 2000; char c3 = 'x'; if (c3=='x') cout << " Success!\n" ;
		string s6 = " Success!\n" ; for (int i=0; i<10; ++i) cout << s6[i];
		vector<int> v5(5); for (int i=0; i<=v5.size(); ++i) ; cout << " Success!\n" ;
		int i=0; int j = 9; while (i<j) --j; if (j==i) cout << " Success!\n" ;
		int x2 = 3; double d = 5/(x2 - 2); if (d==2*x2-1) cout << " Success!\n" ;
		string s7 = " Success!\n" ; for (int i=0; i<10; ++i) cout << s7[i];
		//int i1, j1 = 0; while (i1<10) ++j1; if (j1<10) cout << " Success!\n" ;
		int x3 = 5; double d1 = 5/(x3 - 4); if (d1==2*x3-5) cout << " Success!\n" ;
		cout << " Success!\n" ;

		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
	return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
	return 2;
	}
