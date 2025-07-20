#include <iostream>
#include <fsrream>
using namespace std;


class temp{
    
    string id,name,author;
    fstream file;
    public:
    void addBook();
    void showAll();
    void extractBook();


};




int main() {

    cout<<"-------------------------------------------------"
    cout<<"1-Show All Books";
    cout<<"2-Extract Book";
    cout<<"3-Add Books (ADMIN)";
    cout<<"4-Exit";
    cout<<"----------------------------------------------------";
    cout<<"Enter Your Choice ::  ";
    cin>>choice;


    switch(choice){
        case: '1':

        break;
        case: '2':

        break;
        case: '3':

        break;
        case: '4':

        break;
        default:
            cout<<"Invaild Choice........!";
    }


    return 0;
}
//Admin panel
void temp :: addBook(){
    cout<<"\nEnter Book ID :: ";
    getline(cin,id);
    cout<<"Enter Book Name :: ";
    getline(cin,name);
    cout<<"Enter Book Author name :: ";
    getline(cin,author);

    file.open("bookData.txt", ios :: out | ios :: app); 
    file<<id<<"*"<<name<<"*"<<author<<endl;
    file.close();
}

void temp :: showAll(){
    file.open("bookData.txt", ios :: in);
    getline(file,id,'*');
    getline(file,name,'*');
    getline(file,author,'\n');
        cout<<"\n\n"
        cout<<"\t\t Book Id \t\t Book Name \t\t Author's Name";
    while(!file.eof()) {
        cout<<"\t\t "<<id<<" \t\t "<<name<<" \t\t\t "<<author<<endl;
    }
}