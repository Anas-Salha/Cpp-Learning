#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include <iostream>
#include <string>

class i_Printable {
    friend std::ostream &operator<<(std::ostream &os, const i_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~i_Printable() = default;
};

#endif // _I_PRINTABLE_H_
