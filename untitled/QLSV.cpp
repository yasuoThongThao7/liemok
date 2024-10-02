#include "QLSV.h"
#include <wchar.h>
#include <iostream>

using namespace std;

QLSV::QLSV() {
    this->p = nullptr;
    this->cnt = 0;
}

void QLSV::add(SinhVien sv) {
    if (this->p == nullptr) {
        p[0] = sv;
        cnt++;
        return;
    }
    SinhVien* newP = new SinhVien[cnt + 1];
    for(int i = 0; i < cnt; i++) {
        newP[i] = p[i];
    }
    newP[cnt] = sv;
    cnt++;
    delete[] p;
    p = newP;
}

void QLSV::remove(int mssv) {
    if (cnt == 0) return;
    SinhVien* newP = new SinhVien[cnt - 1];
    int newCnt = 0;
    for(int i = 0; i < cnt; i++) {
        if(p[i].getMSSV() != mssv) {
            newP[newCnt++] = p[i];
        }
    }
    cnt = newCnt;
    delete[] p;
    p = newP;
}

void QLSV::insert(SinhVien sv, int k) {
    if (k < 0 || k > cnt) return;
    SinhVien* newP = new SinhVien[cnt + 1];
    for(int i = 0; i < k; i++) {
        newP[i] = p[i];
    }
    newP[k] = sv;
    for(int i = k; i < cnt; i++) {
        newP[i + 1] = p[i];
    }
    cnt++;
    delete[] p;
    p = newP;
}

int QLSV::indexOf(SinhVien sv) {
    for(int i = 0; i < this->cnt; i++) {
        if(p[i].getMSSV() == sv.getMSSV()) {
            return i;
        }
    }
    return -1;
}

void QLSV::update(int k) {
    if (k < 0 || k >= cnt) return;
    cout << "MSSV: ";
    int mssv;
    double dtb;
    cin >> mssv;
    cout << "DTB: ";
    cin >> dtb;
    p[k].setMSSV(mssv);
    p[k].setDTB(dtb);
}

void QLSV::sort(int k) {
    if (k >= 0) {
        for(int i = 0; i < this->cnt - 1; i++) {
            for(int j = i + 1; j < this->cnt; j++) {
                if(p[i].getMSSV() > p[j].getMSSV()) {
                    swap(p[i], p[j]);
                }
            }
        }
    } else {
        for(int i = 0; i < this->cnt - 1; i++) {
            for(int j = i + 1; j < this->cnt; j++) {
                if(p[i].getMSSV() < p[j].getMSSV()) {
                    swap(p[i], p[j]);
                }
            }
        }
    }
}

void QLSV::sort(double k) {
    if (k >= 0) {
        for(int i = 0; i < this->cnt - 1; i++) {
            for(int j = i + 1; j < this->cnt; j++) {
                if(p[i].getDTB() > p[j].getDTB()) {
                    swap(p[i], p[j]);
                }
            }
        }
    } else {
        for(int i = 0; i < this->cnt - 1; i++) {
            for(int j = i + 1; j < this->cnt; j++) {
                if(p[i].getDTB() < p[j].getDTB()) {
                    swap(p[i], p[j]);
                }
            }
        }
    }
}

void QLSV::show() {
    for(int i = 0; i < cnt; i++) {
        cout << p[i].getMSSV() << " " << p[i].getDTB() << endl;
    }
}

QLSV::~QLSV() {
    delete[] p;
}
