//
// Created by Dell on 10/2/2024.
//

#include "SinhVien.h"

#include <iostream>
#include <ostream>

using namespace std;

SinhVien::SinhVien() {

}
SinhVien::SinhVien(int MSSV,double DTB) {
    this->MSSV = MSSV;
    this->DTB = DTB;
}

int SinhVien::getMSSV() {
    return MSSV;
}

double SinhVien::getDTB() {
    return DTB;
}

void SinhVien::show() {
    cout << this->MSSV << endl;
}
void SinhVien::setDTB(double DTB) {
    this->DTB = DTB;
}
void SinhVien::setMSSV(int MSSV) {
    this->MSSV = MSSV;
}

SinhVien::~SinhVien() {

}
