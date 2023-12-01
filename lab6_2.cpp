#include <iostream>
#include <cmath>

using namespace std;

//มุม1
double deg2rad(double x){         
    return M_PI*x/180.0;
}
//มุม2
double rad2deg(double x){    
    return x*180/M_PI;
}

//องค์ประกอบตามแนวแกน X 
//Input 4 ตัว คือ ความยาวและค่ามุมในหน่วย radian ของเวกเตอร์ทั้ง 2 ตัวที่ต้องการนำมาบวกกัน และจะ Return คำตอบออกไปเป็นขนาดขององค์ประกอบตามแนวแกน X ของเวกเตอร์ลัพธ์
double findXComponent( double l1, double l2, double a1, double a2){
    return  l1*cos(a1)+l2*cos(a2);
}
//หาองค์ประกอบตามแนวแกน Y ของเวกเตอร์ลัพธ์ 
//มี Input 4 ตัว คือ ความยาวและค่ามุมในหน่วย radian ของเวกเตอร์ทั้ง 2 ตัวที่ต้องการนำมาบวกกัน และจะ Return คำตอบออกไปเป็นขนาดขององค์ประกอบตามแนวแกน Y ของเวกเตอร์ลัพธ์
double findYComponent(double l1, double l2,double a1,double a2){
    return l1*sin(a1)+l2*sin(a2);
}
 //องค์ประกอบตามแนวแกน X ของเวกเตอร์ลัพธ์ และ องค์ประกอบตามแนวแกน Y ของเวกเตอร์ลัพธ์
 //Return คำตอบออกไปเป็นความยาวของเวกเตอร์ลัพธ์
    double pythagoras(double l1,double l2){ //pythagoras function
    return pow((pow(l1,2)+pow(l2,2)),1/2.0);
}

   void showResult(double result_vec_length,double result_vec_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << result_vec_length<<endl;
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction<<endl;
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
     // 
     //ซึ่งเป็นค่าความยาวของเวกเตอร์ลัพธ์ และทิศทางของเวกเตอร์ลัพธ์ซึ่งเป็นค่ามุมในหน่วยองศา 
    showResult(result_vec_length,result_vec_direction);
}