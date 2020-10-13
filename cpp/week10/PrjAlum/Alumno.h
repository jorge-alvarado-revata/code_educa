class Alumno{

private:
    double dc;
    double sp1;
    double sp2;
    double sp3;
    double sp4;
    double py1;
    double py2;
    double teo;

public:
    Alumno();
    void setNotaDC(double dc);
    void setSP(double sp1, double sp2, double sp3, double sp4);
    void setPY(double py1, double py2);
    void setTeo(double teo);
    double getPromedio();

};
