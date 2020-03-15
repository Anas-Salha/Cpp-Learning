#include "i_Printable.h"

std::ostream &operator<<(std::ostream &os, const i_Printable &obj) {
    obj.print(os);
    return os;
}

