#include <iostream>
#include <fstream>

using namespace std;


//ios::in
//ios::ate = mulai dari akhir file
//ios::binary = format binari


int main (){
	
	ifstream myLog;
	
	string data,data2,temp;
	bool isAkhir = false;

	string user,pass;

	myLog.open("data2.log");
//	myLog >> data>>data2; 
//		cout<<data<<" "<<data2<<endl;
//	getline(myLog,temp);   //cari \n atau enter

//	cout<<temp<<endl;



//////
//while (!isAkhir){
//	getline(myLog,temp);
//	data.append("\n" + temp);
//	if(temp == "akhir") {
//		isAkhir = true;
//	}
//}
//cout<<data<<endl; 



////	getline(myLog,temp);
//	cout<<temp<<endl; 
while(!myLog.eof()){


	getline(myLog,temp);
	cout<<temp<<endl; 
	
//	myLog>>user;
//	myLog>>pass;
	
//	cout <<user<<" "<<pass<<endl;
} 




myLog.close();



//cout<<data<<endl;  //tampilkan di layar

	
	

	
	return 0;
}
