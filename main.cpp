// 4480 748 17:30:15 11-06-2023 17:35:12 11-06-2023
// 222148.00
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
double soTien;
int gia6GiayDau, giaMoiGiaySau, gioBD, phutBD, giayBD, ngayBD, thangBD, namBD, gioKT, phutKT, giayKT, ngayKT, thangKT, namKT;
long soGiayGoi;
char a, b, c, d, e, f, g, h;
long tinhSoGiay(int gioBD, int phutBD, int giayBD, int ngayBD, int thangBD, int namBD,
               int gioKT, int phutKT, int giayKT, int ngayKT, int thangKT, int namKT){
               tm tmStart = {giayBD, phutBD, gioBD, ngayBD, thangBD-1, namBD - 1990};
               tm tmEnd = {giayKT, phutKT, gioKT, ngayKT, thangKT-1, namKT - 1990};
               time_t timeStart = mktime(&tmStart);
               time_t timeEnd = mktime(&tmEnd);
               long soGiayGoi = difftime(timeEnd, timeStart);
               return soGiayGoi;
               }
int main(){
cin >> gia6GiayDau >> giaMoiGiaySau >> gioBD >> a >> phutBD >> b >> giayBD >> ngayBD >> c
    >> thangBD >> d >> namBD >> gioKT >> e >> phutKT >> f >> giayKT >> ngayKT >> g >> thangKT
    >> h >> namKT;
    soGiayGoi = tinhSoGiay(gioBD, phutBD, giayBD, ngayBD, thangBD, namBD, gioKT, phutKT, giayKT, ngayKT, thangKT, namKT);
    cout << soGiayGoi << endl;
    if (soGiayGoi <= 6){
        soTien = gia6GiayDau;
    }
    else soTien = gia6GiayDau + giaMoiGiaySau*(soGiayGoi-6);
    cout << setprecision(2) << fixed << soTien;

}
