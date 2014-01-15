;/*************************************************************************************
; 
;	Project Name : OK6410 Test
;
;	Copyright 2011 by Forlinx, Inc.
;	All rights reserved.
;
;	Project Description :
;		This software is only for validating functions of the S3C6410.
;		Anybody can use this software without our permission.
;  
;--------------------------------------------------------------------------------------
; 
;	File Name : init.s
;  
;	File Description : This file implements the startup procedure.
;
;	Author	: FatFish
;	Dept. : Forlinx Development Team
;	Created Date : 2011/2/13
;	Version : 1.0 
; 
;	History
;	- Created for Forlinx6410 Led (FatFish 2011/2/13)
;  
;*************************************************************************************/
    IMPORT      Main
    
	AREA |C$$code|, CODE, READONLY
	global		start

start			    
    bl        Main
    
    END
