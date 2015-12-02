#ifndef _BASIC_GLOBAL_H
#define _BASIC_GLOBAL_H

#ifdef BASIC_LIBRARY
#define BASIC_EXPORT _declspec(dllexport)
#else
#define  BASIC_EXPORT _declspec(dllimport)
#endif

#endif