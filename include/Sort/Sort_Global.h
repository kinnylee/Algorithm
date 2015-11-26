#ifndef SORT_GLOBAL_H
#define SORT_GLOBAL_H

#ifdef SORT_LIBRARY
#define SORT_EXPORT _declspec(dllexport)
#else
#define  SORT_EXPORT _declspec(dllimport)
#endif

#endif