//CPP0611 - DANH SÁCH ĐỐI TƯỢNG SINH VIÊN - 1
#include <bits/stdc++.h>
using namespace std;

class SinhVien{
private:
    string ma, ten, lop, dob;
    float gpa;
    int id;
    static int tt;
public:
    SinhVien(){
        ten = lop = ma = "";
        gpa = 0;
        id = tt;
        tt++;
    }
    void chuanhoa(){
        if (dob.length() == 9){
            if (dob[2] != '/')
                dob.insert(0, "0");
            else
                dob.insert(3, "0");
        }
        else if (dob.length() == 8){
            dob.insert(0, "0");
            dob.insert(3, "0");
        }
    }
    friend istream &operator>>(istream &in, SinhVien &a){
        scanf("\n");
        getline(in, a.ten);
        scanf("\n");
        in >> a.lop >> a.dob >> a.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien a){
        a.chuanhoa();
        out << "B20DCCN0";
        if (a.id < 10) cout << "0" << a.id << " ";
        else cout << a.id << " ";
        out << a.ten << " " << a.lop << " " << a.dob << " " << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};

int SinhVien::tt = 1;

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}