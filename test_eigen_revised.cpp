#include <iostream>
#include "Eigen/Dense"
#define PI 3.14159265359

using namespace Eigen;
using namespace std;

int main(){
    
    
    
char c;    
do{
    int num = 0;
    int num1= 0;
    int num2 = 0;
    int num3= 0;
    //int num4= 0;
    //int num5= 0;
    cout<<"Insert the number of row for Matrix1"<<endl;
    cin >> num;
    cout<<"Insert the number of coloumn for Matrix1"<<endl;
    cin >> num1;
    cout<<"Insert the number of row for Matrix2"<<endl;
    cin >> num2;
    cout<<"Insert the number of coloumn for Matrix2"<<endl;
    cin >> num3;
    /*
    cout<<"Insert the number of row for Matrix3"<<endl;
    cin >> num4;
    cout<<"Insert the number of coloumn for Matrix3"<<endl;
    cin >> num5;
    */
    MatrixXd m1 = MatrixXd(num,num1);
    MatrixXd m2 = MatrixXd(num2,num3);
    //MatrixXd m3 = MatrixXd(num4,num5);
    MatrixXd m4;
    MatrixXd m5;
    MatrixXd m6;
    
    
    for (int i = 0; i < num; i++) { 
        
         m1(i,i) = 1; 
    
        
    }
    
    for (int i = 0; i < num2; i++) { 
        
         m2(i,i) = 2; 
    
        
    }
    
    
    

    cout << m1 << endl;
    cout << "\n";
    cout << m2 << endl;
    cout << "\n";

    cout<< "compute M1,M2"<<endl;
        
        
            cin>>c;
            switch(c){
                case '+':
                    if(num1!=num2){
                        cout<< "compute m1,m2"<<endl;
                        cout<< "ERROR! Different Dimension!"<<endl;
                        
                    }
                    m4 = m1 + m2;
                    cout<<m4<<endl;
                    //break;
                case '-':
                    if(num1!=num2){
                        cout<< "compute m1,m2"<<endl;
                        cout<< "ERROR! Different Dimension!"<<endl;
                        break;
                    }
                    m4 = m1 - m2;
                    cout<<m4<<endl;
                    //break;
                case '*':
                    if(num1!=num2){
                        cout<< "compute m1,m2"<<endl;
                        cout<< "ERROR! Different Dimension!"<<endl;
                        break;
                    }
                    m4 = m1 * m2;
                    cout<<m4<<endl;
                    //break;
                case 'T':
                    if(num1!=num2){
                        cout<< "compute m1,m2"<<endl;
                        cout<< "ERROR! Different Dimension!"<<endl;
                    //    break;
                    }
                    m5=m1.transpose();
                    m6=m2.transpose();
                    cout<< m5 <<endl;
                    cout<< m6 <<endl;
                case 'Q':
                    break;
            }
        
        //else{
        //    cout<< "ERROR! Different Dimension!"<<endl;
        //    break;

        //}


        
    }while (c != 'q');


    
    return 0;
}
