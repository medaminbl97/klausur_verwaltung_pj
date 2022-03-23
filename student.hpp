#ifndef __STUDENT__
#define __STUDENT__

#include<iostream>

class student {
    private:

    student* next;
    student* prev;

    private:

    std::string name;
    std::string maNummer;
    std::string gruppe;

    public:
    student(const std::string& name = "no_name", const std::string& maNummer = "0", const std::string& gruppe = "0" );
    student(const student& other);
    //Opreator Overlaodings
    friend std::ostream& operator << (std::ostream& stream, const student& obj);


    //Getter_Fucntions
    student* getnext()const{return next;}
    student* getprev()const{return prev;}
    std::string getname()const{return name;}
    std::string getmaNummer()const{return maNummer;}
    std::string getgruppe()const{return gruppe;}

    //Setter_Fucntions
    void setname(const std::string& name){this->name = name; };
    void setmaNummer(const std::string& maNummer){this->maNummer = maNummer; };
    void setgruppe(const std::string& gruppe ){this->gruppe = gruppe; };

    

};








#endif //__STUDENT__