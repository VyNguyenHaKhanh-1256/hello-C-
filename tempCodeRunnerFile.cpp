#include <iostream>
using namespace std;
int main(){
    int chieu_cao, can_nang;
    cout<<"Nhap vao chieu cao cua ban: ";
    cin>>chieu_cao;
    cout<<"Nhap vao can nang cua ban: ";
    cin>>can_nang;
    float BMI=can_nang/(chieu_cao^2);
if(BMI<15){
    cout<<"Than hinh qua gay";
}
if(BMI>=15 and BMI<16){
    cout<<"Than hinh gay";
}
if(BMI>=16 and BMI<18.5){
    cout<<"Than hinh hơi gay";
}
if(BMI>=18.5 and BMI<25){
    cout<<"Than hinh binh thuong";
}
if(BMI>=25 and BMI<30){
    cout<<"Than hinh hoi beo";
}
if(BMI>=30 and BMI<35){
    cout<<"Than hinh beo";
}
if(BMI>=35){
    cout<<"Than hinh qua beo";
}
return 0;
}