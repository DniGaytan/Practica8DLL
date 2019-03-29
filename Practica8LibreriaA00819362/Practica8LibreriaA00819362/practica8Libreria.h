// MathLibrary.h - Contains declarations of math functions
#pragma once

#ifdef PRACTICA8LIBRERIA_EXPORTS
#define PRACTICA8LIBRERIA_API __declspec(dllexport)
#else
#define PRACTICA8LIBRERIA_API __declspec(dllimport)
#endif



// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
extern "C" PRACTICA8LIBRERIA_API void startProcess();