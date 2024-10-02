
#ifndef QLSV_H
#define QLSV_H

#include "SinhVien.h"

class QLSV {
    private:
        SinhVien *p;
        int cnt;
    public:
    QLSV();
    ~QLSV();
    void add(SinhVien);
    void show();
    void insert(SinhVien,int);
    int indexOf(SinhVien);
    void remove(int);
    void update(int);
    void sort(int);
    void sort(double);
};



#endif //QLSV_H
