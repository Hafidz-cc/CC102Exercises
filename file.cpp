#include<fstream>
#include<iostream>
using namespace std;
int main(){

fstream file, Copy;

file.open("color.txt", ios::out);{
if(file.is_open()){
    cout<<"color.txt is open \n";

    file<<"red\n";
    file<<"orange\n";
    file<<"yellow\n";
    file<<"green\n";
    file<<"blue\n";

file.close();
}
else{
    cout<<"color.txt cant be opened \n";
}

}

file.open("color.txt", ios::in);{
if(file.is_open()){

    cout<<"color_copy.txt is open \n";
    string line;

    Copy.open("color_copy.txt",ios::out);{
      while(getline(file,line)){
        Copy<<line<<endl;

        }
Copy.close();
file.close();
        }
    }




else{
    cout<<"couldnt open file\n";
}


}


return 0;
}
