#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

double deg2rad(double x){
    return ;
}
double rad2deg(double y){
    return ;
}
double findXComponent(double L1,double L2,double A3,double A4){
    return ;
}
double findYComponent(double L1,double L2,double A3,double A4){
    return ;
}
double pythagoras(double L1,double L2){
    return ;
}
double showResult(double x,double y){
    return ;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
