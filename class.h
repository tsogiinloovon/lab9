class rationalnumber
{
private:
       int hurtver;//hurtver
       int huviar;//huviar
public:
    int counter;//counter
    void getdata();
    rationalnumber();
    rationalnumber(int a, int b);
    rationalnumber operator+(const rationalnumber &a); //hoyr rational too +
    rationalnumber operator+(float &a); //hoyr rational too + float
    rationalnumber operator*(const rationalnumber &a);//hoyr rational too *
    rationalnumber operator/(const rationalnumber &a);//hoyr rational too /
    rationalnumber operator-(const rationalnumber &a);//hoyr rational too -
    rationalnumber operator=(const rationalnumber &a);//neg obectiig nogood n utga onooh
    //neg operand iin operator dahin todorhoiloh
    void operator++();
    void operator--();
    //hos operrandin operator dahin todorhoiloh
    void operator+=(int a);
    void operator-=(int a);
    void operator*=(int a);
    void operator/=(int a);
    //ooroo dahin todorhoilson
    void operator&();// & operatoriig emhetgeh operator bolgoj dahin todorhoilloo
};
