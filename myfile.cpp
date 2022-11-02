#include <iostream>
#include <fstream>

using namespace std;

int main (){
	
	ofstream myLog;
	
	
	//ios::out   output
	//ios::app   menuliskan pada akhir baris
	//ios::trunc membuatfile jika tidak ada, akan dihapus dan dibuat baru jika ada
	
//	myLog.open("datapraktikum.log");
	
//	myLog << "hallo dunia 2";

	myLog.open("datapraktikum.log",ios::trunc);
	myLog<<"input baru ke 5";
////	
	
	myLog.close();
	
	
	return 0;
}
