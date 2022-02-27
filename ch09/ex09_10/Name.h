/*****************************************************************************
 * Name.h
 * 
 * Deitel - C++ How to Program v10
 * Exercise 9.7 (Name Class)
 * 
 * Feb 24, 2022
 * lvaughn
 ****************************************************************************/
 #ifndef NAME_H
 #define NAME_H

 #include <string>

class Name {
public:
    Name(const std::string&, const std::string&, const std::string&,
    const std::string&);

    std::string toString() const;
    std::string getFirstName() const;
    std::string getMiddleName() const;
    std::string getLastName() const;
    std::string getSalutation() const;

    void setFirstName(const std::string& first);
    void setMiddleName(const std::string& middle);
    void setLastName(const std::string& last);
    void setSalutation(const std::string& suffix);

private:
   std::string firstName;
   std::string middleName;
   std::string lastName;
   std::string salutation;
};


 #endif
