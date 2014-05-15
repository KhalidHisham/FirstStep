/*!
 @file    test.h

 @details
 @b DESCRIPTION
 This is a test header file 

 @b DEPENDENCIES
 @n None

 @n @Copyright (C) 2014 
*******************************************************************************/
#ifndef TEST_H
#define TEST_H

/*!
@name EEPROM Address Specification
@{
*******************************************************************************/
#define USER_INIT_ADDR      0x00
#define HIGH_VOLT_ADDR      0x01
#define HIGH_CURR_ADDR      0x02
#define HIGH_LIMT_ADDR      0x03

/*! @}*************************************************************************/

/*!
@name Default Values 
@{
*******************************************************************************/
#define USER_INIT_VAL      0x66
#define HIGH_VOLT_VAL      0x44
#define HIGH_CURR_VAL      0x22
#define HIGH_LIMT_VAL      0x92
/*! @}*************************************************************************/

#endif 
/*
 *  End of File
 ******************************************************************************/