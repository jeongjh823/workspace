/*
 *######################################################################
 *                                RAppIDJDP
 *           Rapid Application Initialization and Documentation Tool
 *                         Freescale Semiconductor Inc.
 *
 *######################################################################
 *
 * Project Name           : JJH5606_2
 *
 * Project File           : JJH5606_2.rsp
 *
 * Revision Number        : 1.0
 *
 * Tool Version           : 1.2.1.5
 *
 * file                   : main.c
 *
 * Target Compiler        : Codewarrior
 *
 * Target Part            : MPC5606B
 *
 * Part Errata Fixes      : none
 *
 * Project Last Save Date : 16-Jan-2015 15:48:11
 *
 * Created on Date        : 16-Jan-2015 17:14:35
 *
 * Brief Description      : This file contains main() function call.
 *
 ******************************************************************************** 
 *
 * Detail Description     : This file contains main() routine which calls system
 *                         initialization routine and interrupt enable routine if defined.
 *
 ******************************************************************************** 
 *
 *######################################################################
*/

 
 
/********************  Dependent Include files here **********************/

#include "rappid_ref.h"
#include "rappid_utils.h"
#include "sys_init.h"

/**********************  Function Prototype here *************************/

void main(void);


/*********************  Initialization Function(s) ************************/

void main(void)
{

/* ----------------------------------------------------------- */
/*	             System Initialization Function                  */
/* ----------------------------------------------------------- */
   sys_init_fnc();
/********* Enable External Interrupt *********/
   EnableExternalInterrupts();
   while(1)
   {

   }

}

 
/*
 *######################################################################
 *                           End of File
 *######################################################################
*/

