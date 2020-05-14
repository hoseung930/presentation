#include <iostream>
#include "Eigen/Dense"
#define PI 3.14159265359

using namespace Eigen;
using namespace std;

int main(){
    MatrixXd m1 = MatrixXd(8,8);
    MatrixXd m2 = MatrixXd(8,8);
    MatrixXd m3 = MatrixXd(2,2);
    MatrixXd m4;
    MatrixXd m5;
    MatrixXd m6;
    int num;
    char c;

    cin >> num;
    double* alpha = new double[8];
    double* beta = new double[8];
    double* zeta = new double[2];
    for (int i = 0; i < 8; i++) {
         if (i == 0 || i == 2 || i ==4 || i == 6) alpha[i] = 1+i;
        
        else { alpha[i] = 0.5; 
        } 
    }
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) {
        
         m1(i,j) = alpha[i]; 
    
        } 
    }
    for (int i = 0; i < 8; i++) {
         if (i == 1 || i == 3 || i == 5 || i == 7) beta[i] = 1+i;
        
        else { beta[i] = 0.5; 
        } 
    }
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) {
        
         m2(i,j) = beta[i]; 
    
        } 
    }
    
    for (int i = 0; i < 2; i++) {
         if (i == 1) zeta[i] = 1+i;
        
        else { zeta[i] = 0.5; 
        } 
    }
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) {
        
         m3(i,j) = zeta[i]; 
    
        } 
    }
    cout << m1 << endl;
    cout << "\n";
    cout << m2 << endl;
    cout << "\n";
    cout << m3 << endl;
do{
    if (num == 1){
        cout<< "compute m1,m2"<<endl;
        
        if(sizeof(m1)==sizeof(m2))
            cin>>c;
            switch(c){
                
                case '+':
                    m4 = m1 + m2;
                    cout<<m4<<endl;
                    break;
                case '-':
                    m4 = m1 - m2;
                    cout<<m4<<endl;
                    break;
                case '*':
                    m4 = m1 * m2;
                    cout<<m4<<endl;
                    break;
                case 'T':
                    m5=m1.transpose();
                    m6=m2.transpose();
                    cout<< m5 <<endl;
                    cout<< m6 <<endl;
        }


    }

    else if (num == 2){
        if(sizeof(m2)!=sizeof(m3))
            cout<< "compute m2,m3"<<endl;
            cout<< "ERROR! Different Dimension!"<<endl;
            break;

    }
}while (c != 'q');


    delete alpha;
    delete beta;
    delete zeta;
    return 0;
}
