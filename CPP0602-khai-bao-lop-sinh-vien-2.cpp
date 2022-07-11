//CPP0602 - KHAI BÁO LỚP SINH VIÊN - 2
#include <bits/stdc++.h>
using namespace std;
#define a() a;

class SinhVien{
private:
    string ten, lop, dob;
    float gpa;
public:
    SinhVien(){
        ten = "";
        lop = "";
        dob = "";
        gpa = 0;
    }
    void chuanhoa(){
        if (dob.length() == 9){
            if (dob[2] != '/') dob.insert(0, "0");
            else dob.insert(3, "0");
        }
        else if (dob.length() == 8){
            dob.insert(0, "0");
            dob.insert(3, "0");
        }
    }
    friend istream &operator>>(istream &in, SinhVien &a){
        getline(in, a.ten);
        in >> a.lop >> a.dob >> a.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien a){
        if (a.dob.length() == 9){
            if (a.dob[2] != '/') a.dob.insert(0, "0");
            else a.dob.insert(3, "0");
        }
        else if (a.dob.length() == 8){
            a.dob.insert(0, "0");
            a.dob.insert(3, "0");
        }
        out << "B20DCCN001 " << a.ten << " " << a.lop << " " << a.dob << " ";
        out << fixed << setprecision(2) << a.gpa;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}