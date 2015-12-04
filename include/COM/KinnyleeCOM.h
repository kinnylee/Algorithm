#ifndef _KINNYLEE_H_
#define _KINNYLEE_H_

#include "Interface/IKinnyleeCOM.h"

class KinnyleeCOM : public IKinnyleeCOM
{
public:
    KinnyleeCOM();
    ~KinnyleeCOM();

    void Coding();
};

#endif
