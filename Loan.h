#ifndef LOAN_H
#define LOAN_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Loan
{
public:
    string maPhieu;
    string maSinhVien;
    string maTaiLieu;
    int ngayMuon;
    int ngayTra;
    bool daTra;

    Loan(string maPhieu, string maSV, string maTL, int ngay)
    {
        this->maPhieu = maPhieu;
        maSinhVien = maSV;
        maTaiLieu = maTL;
        ngayMuon = ngay;
        daTra = false;
        ngayTra = -1;
    }

    void show(int currentDay)
    {
        int soNgayDaMuon;
        if (daTra && ngayTra != -1)
        {
            soNgayDaMuon = ngayTra - ngayMuon;
        }
        else
        {
            soNgayDaMuon = currentDay - ngayMuon;
        }
        if (soNgayDaMuon < 0)
            soNgayDaMuon = 0;
        cout << left << setw(8) << maPhieu << "| " << setw(8) << maSinhVien << "| " << setw(12) << maTaiLieu << "| ";
        if (daTra && ngayTra != -1)
        {
            cout << setw(22) << (string("Da muon ") + to_string(soNgayDaMuon) + string(" ngay")) << "| " << setw(10) << "Da tra" << endl;
        }
        else
        {
            cout << setw(22) << (string("Da muon ") + to_string(soNgayDaMuon) + string(" ngay")) << "| " << setw(10) << "Chua tra" << endl;
        }
    }
};

#endif
