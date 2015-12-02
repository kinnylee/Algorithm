#ifndef DATASTRUCT_GLOBAL_H
#define DATASTRUCT_GLOBAL_H

#ifdef DATASTRUCT_LIBRARY
#define DATASTRUCT_EXPORT _declspec(dllexport)
#else
#define  DATASTRUCT_EXPORT _declspec(dllimport)
#endif

#endif