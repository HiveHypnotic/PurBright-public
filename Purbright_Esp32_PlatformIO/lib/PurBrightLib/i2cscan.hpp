/*
 i2cscan.h -  library
 Copyright (c) 2021 Zacariah Austin Heim.
 */
#pragma once
#ifndef I2CSCAN_hpp
#define I2CSCAN_hpp
#include "defines.hpp"

class Scanner
{
public:
    Scanner(void);
    virtual ~Scanner(void);
    void SetupScan();
    void BeginScan();
    /* private: */
};
#endif