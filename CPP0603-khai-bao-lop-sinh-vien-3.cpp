//CPP0603 - KHAI BÁO LỚP SINH VIÊN - 3
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
        for (int i = 0; i < a.ten.length(); i++){
          if (a.ten[i] <= 'Z' && a.ten[i] >= 'A') a.ten[i] += 32;
        }
        stringstream s(a.ten);
        string temp;
        a.ten = "";
        while (s >> temp){
            temp[0] -= 32;
            for (int i = 0; i < temp.length(); i++) a.ten.push_back(temp[i]);
            a.ten.push_back(' ');
        }
        scanf("\n");
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
        out << "B20DCCN001 " << a.ten << a.lop << " " << a.dob << " ";
        out << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}