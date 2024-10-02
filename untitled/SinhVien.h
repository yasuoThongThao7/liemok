

#ifndef SINHVIEN_H
#define SINHVIEN_H



class SinhVien {
    private:
        int MSSV;
        double DTB;
    public:
        SinhVien();
        SinhVien(int,double);
        ~SinhVien();
        int getMSSV();
        double getDTB();
        void setMSSV(int);
        void setDTB(double);
        void show();
};



#endif //SINHVIEN_H
