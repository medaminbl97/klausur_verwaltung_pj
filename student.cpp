#include "student.hpp"

student::student(const std::string& name, const std::string& maNummer, const std::string& gruppe )
:name(name),maNummer(maNummer),gruppe(gruppe),next(0),prev(0){}

student::student(const student& other){
    next = new student(*(other.getnext()));
    prev = new student(*(other.getprev()));

    setname(other.getname());
    setgruppe(other.getgruppe());
    setmaNummer(other.getmaNummer());

}

std::ostream& operator << (std::ostream& stream, const student& obj){
    stream << "Name : " << obj.getname() << "\nMatrikelnummer : " << obj.getmaNummer() << "\nGruppe : " << obj.getgruppe() << std::endl; 
    return stream;
}


