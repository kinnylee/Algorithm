#ifndef  _IKINNYLEE_H_H
#define _IKINNYLEE_H_H

#include <Unknwn.h>

class IKinnyleeCOM : public IUnknown
{
public:
    virtual void Coding() = 0;
};

#endif