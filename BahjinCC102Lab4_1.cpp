#include<iostream>
using namespace std;
int main(){
    char choice;
    int students=0, quiz=0, score=0, quizz=0;
    double PlaceHold=0.0;
    do{
        cout<<"enter number of students: ";
        cin>>students;
        cout<<"enter number of quizzes per students: ";
        cin>>quiz;

        int StudMatrx[students][quiz];
        

        for(int i=0; i<students; i++){

        cout<<"enter score for student: "<<i+1<<endl;

            for(int j=0; j<quiz; j++){
                cout<<"Quiz: "<<j+1<<endl;
                cin>>score;
                StudMatrx[i][j]=score;

                }

                    }
                    cout<<endl;

            //table
                for(int i=0; i<1; i++){
                        cout<<"Student"<<"   ";

                    for(int j=0; j<quiz; j++){
                    cout<<"Q"<<j+1<<"   ";
                    }
                    cout<<"Average";
                }
                cout<<endl;
                for(int j=0; j<=quiz; j++){
                    cout<<"---------";
                }
                cout<<endl;



                for(int i=0; i<students; i++){
                    cout<<"   "<<i+1<<"      ";
                for(int j=0; j<quiz; j++){

                PlaceHold+=StudMatrx[i][j];
                cout<< StudMatrx[i][j]<<"   ";



                }

                PlaceHold=PlaceHold/quiz;
                cout<<"   "<<PlaceHold;
                PlaceHold=0;
                cout<<endl;
                }
                cout<<"Repeat process: "<<endl;
                cin>>choice;
        }while(choice=='y');


return 0;
}

