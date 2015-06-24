/*
 *######################################################################
 *                                RAppIDJDP
 *           Rapid Application Initialization and Documentation Tool
 *                         Freescale Semiconductor Inc.
 *
 *######################################################################
 *
 * Project Name           : JJH5606B
 *
 * Project File           : JJH5606B.rsp
 *
 * Revision Number        : 1.0
 *
 * Tool Version           : 1.2.1.5
 *
 * file                   : cansp_init.h
 *
 * Target Compiler        : Diab
 *
 * Target Part            : MPC5606B
 *
 * Part Errata Fixes      : none
 *
 * Project Last Save Date : 16-Jan-2015 13:26:25
 *
 * Created on Date        : 16-Jan-2015 13:27:40
 *
 * Brief Description      : CAN Sampler initialization function header file.
 *
 *
 *######################################################################
*/

#ifndef  _CANSP_INIT_H
#define  _CANSP_INIT_H
/********************  Dependent Include files here **********************/

#include "jdp.h"

/**********************  Function Prototype here *************************/

void cansp_init_fnc(void);
void cansp_trigger_fnc(void);


#endif  /*_CANSP_INIT_H*/

/*
 *######################################################################
 *                           End of File
 *######################################################################
*/
