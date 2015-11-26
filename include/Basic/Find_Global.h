#ifndef FIND_GLOBAL_H
#define FIND_GLOBAL_H

#ifdef FIND_LIBRARY
#define FIND_EXPORT _declspec(dllexport)
#else
#define  FIND_EXPORT _declspec(dllimport)
#endif

#endif