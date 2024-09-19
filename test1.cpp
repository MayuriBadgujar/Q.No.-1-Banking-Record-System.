/*Bookshop Management System
File handling has been effectively used for each feature of this project
Operations
1. Add Book Records:
2. Show Book Records:
3. Check Availability:
4. Modify Book Records:
5. Delete Book Records:*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string name,book;
	cout<<"\n***    Create file   ***";
	cout<<"\nEnter file name :";
	cin>>name;
	ofstream output(name+".text");
	cout<<"File created successfully!";
	cout<<"\n Add Books :";
	cin>>book;
	cout<<"Book record "<<book;
	while(output.get(book)=1){
	
	if(output.get(book)){
		cout<<"\nBook is present in my file";
	}
	else{
		cout<<"\nBook is not present in my file";
	}
	if(output.update(book)){
		cout<<"Book Updated";
	}
	if(output.remove(book)){
		cout<<"\nBook Removed successfully!";
	}
}
	output<<book;
	output.close();
}