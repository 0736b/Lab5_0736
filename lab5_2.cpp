#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    return deg*(M_PI/180);
}

double rad2deg(double rad){
    return rad*(180/M_PI);
}

double findXComponent(double length1,double length2,double moom1,double moom2){
    double result1 = 0, result2 = 0;
    
    result1 = length1*cos(moom1);
    result2 = length2*cos(moom2);
    return result1+result2;
}

double findYComponent(double length1, double length2, double moom1,double moom2){
    double result1 = 0, result2 = 0;

    result1 = length1*sin(moom1);
    result2 = length2*sin(moom2);

    return result1+result2;
}

double pythagoras(double xlength, double ylength){
    double result;
    result = sqrt(pow(xlength,2)+pow(ylength,2));
    return result;
}

void showResult(double result_length, double result_direction){
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
   cout << "Length of the resultant vector = " << result_length <<endl;
   cout << "Direction of the resultant vector (deg) = " << result_direction <<endl;
   cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
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
