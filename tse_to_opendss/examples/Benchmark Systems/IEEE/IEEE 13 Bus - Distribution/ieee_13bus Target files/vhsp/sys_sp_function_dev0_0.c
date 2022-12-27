// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif


// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines











































































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables



//@cmp.var.start
// variables
double _bus_634_vab_rms_instantaneous__out;
double _bus_634_vbc_rms_instantaneous__out;
double _bus_634_vca_rms_instantaneous__out;
double _bus_645_vbc_rms_instantaneous__out;
double _bus_646_vbc_rms_instantaneous__out;
double _bus_675_vab_rms_instantaneous__out;
double _bus_675_vbc_rms_instantaneous__out;
double _bus_675_vca_rms_instantaneous__out;
double _bus_692_vab_rms_instantaneous__out;
double _bus_692_vbc_rms_instantaneous__out;
double _bus_692_vca_rms_instantaneous__out;
double _load_611_meter_vcn_rms_instantaneous__out;
double _load_645_meter_vbn_rms_instantaneous__out;
double _load_646_meter_vbn_rms_instantaneous__out;
double _load_646_meter_vcn_rms_instantaneous__out;
double _load_652_meter_van_rms_instantaneous__out;
double _load_692_meter_van_rms_instantaneous__out;
double _load_692_meter_vcn_rms_instantaneous__out;
double _rega_vreg_auto1_ilrms_a_instantaneous__out;
double _rega_vreg_auto1_vload_a_instantaneous__out;
double _regb_vreg_auto1_ilrms_a_instantaneous__out;
double _regb_vreg_auto1_vload_a_instantaneous__out;
double _regc_vreg_auto1_ilrms_a_instantaneous__out;
double _regc_vreg_auto1_vload_a_instantaneous__out;
double _bus_634_vab_rms_rms_calc_fast__var_eff_s;
double _bus_634_vab_rms_rms_calc_fast__period;
X_UnInt8 _bus_634_vab_rms_rms_calc_fast__var_zc;
double _bus_634_vab_rms_rms_calc_fast__var_filt_old;
double _bus_634_vab_rms_rms_calc_slow__var_rms;
double _bus_634_vbc_rms_rms_calc_fast__var_eff_s;
double _bus_634_vbc_rms_rms_calc_fast__period;
X_UnInt8 _bus_634_vbc_rms_rms_calc_fast__var_zc;
double _bus_634_vbc_rms_rms_calc_fast__var_filt_old;
double _bus_634_vbc_rms_rms_calc_slow__var_rms;
double _bus_634_vca_rms_rms_calc_fast__var_eff_s;
double _bus_634_vca_rms_rms_calc_fast__period;
X_UnInt8 _bus_634_vca_rms_rms_calc_fast__var_zc;
double _bus_634_vca_rms_rms_calc_fast__var_filt_old;
double _bus_634_vca_rms_rms_calc_slow__var_rms;
double _bus_645_vbc_rms_rms_calc_fast__var_eff_s;
double _bus_645_vbc_rms_rms_calc_fast__period;
X_UnInt8 _bus_645_vbc_rms_rms_calc_fast__var_zc;
double _bus_645_vbc_rms_rms_calc_fast__var_filt_old;
double _bus_645_vbc_rms_rms_calc_slow__var_rms;
double _bus_646_vbc_rms_rms_calc_fast__var_eff_s;
double _bus_646_vbc_rms_rms_calc_fast__period;
X_UnInt8 _bus_646_vbc_rms_rms_calc_fast__var_zc;
double _bus_646_vbc_rms_rms_calc_fast__var_filt_old;
double _bus_646_vbc_rms_rms_calc_slow__var_rms;
double _bus_675_vab_rms_rms_calc_fast__var_eff_s;
double _bus_675_vab_rms_rms_calc_fast__period;
X_UnInt8 _bus_675_vab_rms_rms_calc_fast__var_zc;
double _bus_675_vab_rms_rms_calc_fast__var_filt_old;
double _bus_675_vab_rms_rms_calc_slow__var_rms;
double _bus_675_vbc_rms_rms_calc_fast__var_eff_s;
double _bus_675_vbc_rms_rms_calc_fast__period;
X_UnInt8 _bus_675_vbc_rms_rms_calc_fast__var_zc;
double _bus_675_vbc_rms_rms_calc_fast__var_filt_old;
double _bus_675_vbc_rms_rms_calc_slow__var_rms;
double _bus_675_vca_rms_rms_calc_fast__var_eff_s;
double _bus_675_vca_rms_rms_calc_fast__period;
X_UnInt8 _bus_675_vca_rms_rms_calc_fast__var_zc;
double _bus_675_vca_rms_rms_calc_fast__var_filt_old;
double _bus_675_vca_rms_rms_calc_slow__var_rms;
double _bus_692_vab_rms_rms_calc_fast__var_eff_s;
double _bus_692_vab_rms_rms_calc_fast__period;
X_UnInt8 _bus_692_vab_rms_rms_calc_fast__var_zc;
double _bus_692_vab_rms_rms_calc_fast__var_filt_old;
double _bus_692_vab_rms_rms_calc_slow__var_rms;
double _bus_692_vbc_rms_rms_calc_fast__var_eff_s;
double _bus_692_vbc_rms_rms_calc_fast__period;
X_UnInt8 _bus_692_vbc_rms_rms_calc_fast__var_zc;
double _bus_692_vbc_rms_rms_calc_fast__var_filt_old;
double _bus_692_vbc_rms_rms_calc_slow__var_rms;
double _bus_692_vca_rms_rms_calc_fast__var_eff_s;
double _bus_692_vca_rms_rms_calc_fast__period;
X_UnInt8 _bus_692_vca_rms_rms_calc_fast__var_zc;
double _bus_692_vca_rms_rms_calc_fast__var_filt_old;
double _bus_692_vca_rms_rms_calc_slow__var_rms;
double _load_611_meter_vcn_rms_rms_calc_fast__var_eff_s;
double _load_611_meter_vcn_rms_rms_calc_fast__period;
X_UnInt8 _load_611_meter_vcn_rms_rms_calc_fast__var_zc;
double _load_611_meter_vcn_rms_rms_calc_fast__var_filt_old;
double _load_611_meter_vcn_rms_rms_calc_slow__var_rms;
double _load_645_meter_vbn_rms_rms_calc_fast__var_eff_s;
double _load_645_meter_vbn_rms_rms_calc_fast__period;
X_UnInt8 _load_645_meter_vbn_rms_rms_calc_fast__var_zc;
double _load_645_meter_vbn_rms_rms_calc_fast__var_filt_old;
double _load_645_meter_vbn_rms_rms_calc_slow__var_rms;
double _load_646_meter_vbn_rms_rms_calc_fast__var_eff_s;
double _load_646_meter_vbn_rms_rms_calc_fast__period;
X_UnInt8 _load_646_meter_vbn_rms_rms_calc_fast__var_zc;
double _load_646_meter_vbn_rms_rms_calc_fast__var_filt_old;
double _load_646_meter_vbn_rms_rms_calc_slow__var_rms;
double _load_646_meter_vcn_rms_rms_calc_fast__var_eff_s;
double _load_646_meter_vcn_rms_rms_calc_fast__period;
X_UnInt8 _load_646_meter_vcn_rms_rms_calc_fast__var_zc;
double _load_646_meter_vcn_rms_rms_calc_fast__var_filt_old;
double _load_646_meter_vcn_rms_rms_calc_slow__var_rms;
double _load_652_meter_van_rms_rms_calc_fast__var_eff_s;
double _load_652_meter_van_rms_rms_calc_fast__period;
X_UnInt8 _load_652_meter_van_rms_rms_calc_fast__var_zc;
double _load_652_meter_van_rms_rms_calc_fast__var_filt_old;
double _load_652_meter_van_rms_rms_calc_slow__var_rms;
double _load_692_meter_van_rms_rms_calc_fast__var_eff_s;
double _load_692_meter_van_rms_rms_calc_fast__period;
X_UnInt8 _load_692_meter_van_rms_rms_calc_fast__var_zc;
double _load_692_meter_van_rms_rms_calc_fast__var_filt_old;
double _load_692_meter_van_rms_rms_calc_slow__var_rms;
double _load_692_meter_vcn_rms_rms_calc_fast__var_eff_s;
double _load_692_meter_vcn_rms_rms_calc_fast__period;
X_UnInt8 _load_692_meter_vcn_rms_rms_calc_fast__var_zc;
double _load_692_meter_vcn_rms_rms_calc_fast__var_filt_old;
double _load_692_meter_vcn_rms_rms_calc_slow__var_rms;
double _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s;
double _rega_vreg_auto1_ilrms_a_rms_calc_fast__period;
X_UnInt8 _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_zc;
double _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old;
double _rega_vreg_auto1_ilrms_a_rms_calc_slow__var_rms;
double _rega_vreg_auto1_vload_a_rms_calc_fast__var_eff_s;
double _rega_vreg_auto1_vload_a_rms_calc_fast__period;
X_UnInt8 _rega_vreg_auto1_vload_a_rms_calc_fast__var_zc;
double _rega_vreg_auto1_vload_a_rms_calc_fast__var_filt_old;
double _rega_vreg_auto1_vload_a_rms_calc_slow__var_rms;
double _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s;
double _regb_vreg_auto1_ilrms_a_rms_calc_fast__period;
X_UnInt8 _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_zc;
double _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old;
double _regb_vreg_auto1_ilrms_a_rms_calc_slow__var_rms;
double _regb_vreg_auto1_vload_a_rms_calc_fast__var_eff_s;
double _regb_vreg_auto1_vload_a_rms_calc_fast__period;
X_UnInt8 _regb_vreg_auto1_vload_a_rms_calc_fast__var_zc;
double _regb_vreg_auto1_vload_a_rms_calc_fast__var_filt_old;
double _regb_vreg_auto1_vload_a_rms_calc_slow__var_rms;
double _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s;
double _regc_vreg_auto1_ilrms_a_rms_calc_fast__period;
X_UnInt8 _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_zc;
double _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old;
double _regc_vreg_auto1_ilrms_a_rms_calc_slow__var_rms;
double _regc_vreg_auto1_vload_a_rms_calc_fast__var_eff_s;
double _regc_vreg_auto1_vload_a_rms_calc_fast__period;
X_UnInt8 _regc_vreg_auto1_vload_a_rms_calc_fast__var_zc;
double _regc_vreg_auto1_vload_a_rms_calc_fast__var_filt_old;
double _regc_vreg_auto1_vload_a_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _bus_634_vab_rms_rt1_output__out =  0.0;
double _bus_634_vab_rms_rt2_output__out =  0.0;
double _bus_634_vbc_rms_rt1_output__out =  0.0;
double _bus_634_vbc_rms_rt2_output__out =  0.0;
double _bus_634_vca_rms_rt1_output__out =  0.0;
double _bus_634_vca_rms_rt2_output__out =  0.0;
double _bus_645_vbc_rms_rt1_output__out =  0.0;
double _bus_645_vbc_rms_rt2_output__out =  0.0;
double _bus_646_vbc_rms_rt1_output__out =  0.0;
double _bus_646_vbc_rms_rt2_output__out =  0.0;
double _bus_675_vab_rms_rt1_output__out =  0.0;
double _bus_675_vab_rms_rt2_output__out =  0.0;
double _bus_675_vbc_rms_rt1_output__out =  0.0;
double _bus_675_vbc_rms_rt2_output__out =  0.0;
double _bus_675_vca_rms_rt1_output__out =  0.0;
double _bus_675_vca_rms_rt2_output__out =  0.0;
double _bus_692_vab_rms_rt1_output__out =  0.0;
double _bus_692_vab_rms_rt2_output__out =  0.0;
double _bus_692_vbc_rms_rt1_output__out =  0.0;
double _bus_692_vbc_rms_rt2_output__out =  0.0;
double _bus_692_vca_rms_rt1_output__out =  0.0;
double _bus_692_vca_rms_rt2_output__out =  0.0;
double _load_611_meter_vcn_rms_rt1_output__out =  0.0;
double _load_611_meter_vcn_rms_rt2_output__out =  0.0;
double _load_645_meter_vbn_rms_rt1_output__out =  0.0;
double _load_645_meter_vbn_rms_rt2_output__out =  0.0;
double _load_646_meter_vbn_rms_rt1_output__out =  0.0;
double _load_646_meter_vbn_rms_rt2_output__out =  0.0;
double _load_646_meter_vcn_rms_rt1_output__out =  0.0;
double _load_646_meter_vcn_rms_rt2_output__out =  0.0;
double _load_652_meter_van_rms_rt1_output__out =  0.0;
double _load_652_meter_van_rms_rt2_output__out =  0.0;
double _load_692_meter_van_rms_rt1_output__out =  0.0;
double _load_692_meter_van_rms_rt2_output__out =  0.0;
double _load_692_meter_vcn_rms_rt1_output__out =  0.0;
double _load_692_meter_vcn_rms_rt2_output__out =  0.0;
double _rega_vreg_auto1_ilrms_a_rt1_output__out =  0.0;
double _rega_vreg_auto1_ilrms_a_rt2_output__out =  0.0;
double _rega_vreg_auto1_vload_a_rt1_output__out =  0.0;
double _rega_vreg_auto1_vload_a_rt2_output__out =  0.0;
double _regb_vreg_auto1_ilrms_a_rt1_output__out =  0.0;
double _regb_vreg_auto1_ilrms_a_rt2_output__out =  0.0;
double _regb_vreg_auto1_vload_a_rt1_output__out =  0.0;
double _regb_vreg_auto1_vload_a_rt2_output__out =  0.0;
double _regc_vreg_auto1_ilrms_a_rt1_output__out =  0.0;
double _regc_vreg_auto1_ilrms_a_rt2_output__out =  0.0;
double _regc_vreg_auto1_vload_a_rt1_output__out =  0.0;
double _regc_vreg_auto1_vload_a_rt2_output__out =  0.0;
double _bus_634_vab_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_634_vab_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_634_vab_rms_rms_calc_fast__var_filt;
double _bus_634_vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_634_vbc_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_634_vbc_rms_rms_calc_fast__var_filt;
double _bus_634_vca_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_634_vca_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_634_vca_rms_rms_calc_fast__var_filt;
double _bus_645_vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_645_vbc_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_645_vbc_rms_rms_calc_fast__var_filt;
double _bus_646_vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_646_vbc_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_646_vbc_rms_rms_calc_fast__var_filt;
double _bus_675_vab_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_675_vab_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_675_vab_rms_rms_calc_fast__var_filt;
double _bus_675_vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_675_vbc_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_675_vbc_rms_rms_calc_fast__var_filt;
double _bus_675_vca_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_675_vca_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_675_vca_rms_rms_calc_fast__var_filt;
double _bus_692_vab_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_692_vab_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_692_vab_rms_rms_calc_fast__var_filt;
double _bus_692_vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_692_vbc_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_692_vbc_rms_rms_calc_fast__var_filt;
double _bus_692_vca_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _bus_692_vca_rms_rms_calc_fast__pc_cnt_1_state;
double _bus_692_vca_rms_rms_calc_fast__var_filt;
double _load_611_meter_vcn_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _load_611_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state;
double _load_611_meter_vcn_rms_rms_calc_fast__var_filt;
double _load_645_meter_vbn_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _load_645_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state;
double _load_645_meter_vbn_rms_rms_calc_fast__var_filt;
double _load_646_meter_vbn_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _load_646_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state;
double _load_646_meter_vbn_rms_rms_calc_fast__var_filt;
double _load_646_meter_vcn_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _load_646_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state;
double _load_646_meter_vcn_rms_rms_calc_fast__var_filt;
double _load_652_meter_van_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _load_652_meter_van_rms_rms_calc_fast__pc_cnt_1_state;
double _load_652_meter_van_rms_rms_calc_fast__var_filt;
double _load_692_meter_van_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _load_692_meter_van_rms_rms_calc_fast__pc_cnt_1_state;
double _load_692_meter_van_rms_rms_calc_fast__var_filt;
double _load_692_meter_vcn_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _load_692_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state;
double _load_692_meter_vcn_rms_rms_calc_fast__var_filt;
double _rega_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _rega_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state;
double _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt;
double _rega_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _rega_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state;
double _rega_vreg_auto1_vload_a_rms_calc_fast__var_filt;
double _regb_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _regb_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state;
double _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt;
double _regb_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _regb_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state;
double _regb_vreg_auto1_vload_a_rms_calc_fast__var_filt;
double _regc_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _regc_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state;
double _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt;
double _regc_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _regc_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state;
double _regc_vreg_auto1_vload_a_rms_calc_fast__var_filt;
//@cmp.svar.end


// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _bus_634_vab_rms_rt1_output__out =  0.0;
    _bus_634_vab_rms_rt2_output__out =  0.0;
    _bus_634_vbc_rms_rt1_output__out =  0.0;
    _bus_634_vbc_rms_rt2_output__out =  0.0;
    _bus_634_vca_rms_rt1_output__out =  0.0;
    _bus_634_vca_rms_rt2_output__out =  0.0;
    _bus_645_vbc_rms_rt1_output__out =  0.0;
    _bus_645_vbc_rms_rt2_output__out =  0.0;
    _bus_646_vbc_rms_rt1_output__out =  0.0;
    _bus_646_vbc_rms_rt2_output__out =  0.0;
    _bus_675_vab_rms_rt1_output__out =  0.0;
    _bus_675_vab_rms_rt2_output__out =  0.0;
    _bus_675_vbc_rms_rt1_output__out =  0.0;
    _bus_675_vbc_rms_rt2_output__out =  0.0;
    _bus_675_vca_rms_rt1_output__out =  0.0;
    _bus_675_vca_rms_rt2_output__out =  0.0;
    _bus_692_vab_rms_rt1_output__out =  0.0;
    _bus_692_vab_rms_rt2_output__out =  0.0;
    _bus_692_vbc_rms_rt1_output__out =  0.0;
    _bus_692_vbc_rms_rt2_output__out =  0.0;
    _bus_692_vca_rms_rt1_output__out =  0.0;
    _bus_692_vca_rms_rt2_output__out =  0.0;
    _load_611_meter_vcn_rms_rt1_output__out =  0.0;
    _load_611_meter_vcn_rms_rt2_output__out =  0.0;
    _load_645_meter_vbn_rms_rt1_output__out =  0.0;
    _load_645_meter_vbn_rms_rt2_output__out =  0.0;
    _load_646_meter_vbn_rms_rt1_output__out =  0.0;
    _load_646_meter_vbn_rms_rt2_output__out =  0.0;
    _load_646_meter_vcn_rms_rt1_output__out =  0.0;
    _load_646_meter_vcn_rms_rt2_output__out =  0.0;
    _load_652_meter_van_rms_rt1_output__out =  0.0;
    _load_652_meter_van_rms_rt2_output__out =  0.0;
    _load_692_meter_van_rms_rt1_output__out =  0.0;
    _load_692_meter_van_rms_rt2_output__out =  0.0;
    _load_692_meter_vcn_rms_rt1_output__out =  0.0;
    _load_692_meter_vcn_rms_rt2_output__out =  0.0;
    _rega_vreg_auto1_ilrms_a_rt1_output__out =  0.0;
    _rega_vreg_auto1_ilrms_a_rt2_output__out =  0.0;
    _rega_vreg_auto1_vload_a_rt1_output__out =  0.0;
    _rega_vreg_auto1_vload_a_rt2_output__out =  0.0;
    _regb_vreg_auto1_ilrms_a_rt1_output__out =  0.0;
    _regb_vreg_auto1_ilrms_a_rt2_output__out =  0.0;
    _regb_vreg_auto1_vload_a_rt1_output__out =  0.0;
    _regb_vreg_auto1_vload_a_rt2_output__out =  0.0;
    _regc_vreg_auto1_ilrms_a_rt1_output__out =  0.0;
    _regc_vreg_auto1_ilrms_a_rt2_output__out =  0.0;
    _regc_vreg_auto1_vload_a_rt1_output__out =  0.0;
    _regc_vreg_auto1_vload_a_rt2_output__out =  0.0;
    _bus_634_vab_rms_rms_calc_fast__var_eff_s = 0;
    _bus_634_vab_rms_rms_calc_fast__period = 0.0f;
    _bus_634_vab_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_634_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_634_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_634_vbc_rms_rms_calc_fast__var_eff_s = 0;
    _bus_634_vbc_rms_rms_calc_fast__period = 0.0f;
    _bus_634_vbc_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_634_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_634_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_634_vca_rms_rms_calc_fast__var_eff_s = 0;
    _bus_634_vca_rms_rms_calc_fast__period = 0.0f;
    _bus_634_vca_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_634_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_634_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_645_vbc_rms_rms_calc_fast__var_eff_s = 0;
    _bus_645_vbc_rms_rms_calc_fast__period = 0.0f;
    _bus_645_vbc_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_645_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_645_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_646_vbc_rms_rms_calc_fast__var_eff_s = 0;
    _bus_646_vbc_rms_rms_calc_fast__period = 0.0f;
    _bus_646_vbc_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_646_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_646_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_675_vab_rms_rms_calc_fast__var_eff_s = 0;
    _bus_675_vab_rms_rms_calc_fast__period = 0.0f;
    _bus_675_vab_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_675_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_675_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_675_vbc_rms_rms_calc_fast__var_eff_s = 0;
    _bus_675_vbc_rms_rms_calc_fast__period = 0.0f;
    _bus_675_vbc_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_675_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_675_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_675_vca_rms_rms_calc_fast__var_eff_s = 0;
    _bus_675_vca_rms_rms_calc_fast__period = 0.0f;
    _bus_675_vca_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_675_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_675_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_692_vab_rms_rms_calc_fast__var_eff_s = 0;
    _bus_692_vab_rms_rms_calc_fast__period = 0.0f;
    _bus_692_vab_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_692_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_692_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_692_vbc_rms_rms_calc_fast__var_eff_s = 0;
    _bus_692_vbc_rms_rms_calc_fast__period = 0.0f;
    _bus_692_vbc_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_692_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_692_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _bus_692_vca_rms_rms_calc_fast__var_eff_s = 0;
    _bus_692_vca_rms_rms_calc_fast__period = 0.0f;
    _bus_692_vca_rms_rms_calc_fast__var_filt = 0.0f;
    _bus_692_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _bus_692_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _load_611_meter_vcn_rms_rms_calc_fast__var_eff_s = 0;
    _load_611_meter_vcn_rms_rms_calc_fast__period = 0.0f;
    _load_611_meter_vcn_rms_rms_calc_fast__var_filt = 0.0f;
    _load_611_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _load_611_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _load_645_meter_vbn_rms_rms_calc_fast__var_eff_s = 0;
    _load_645_meter_vbn_rms_rms_calc_fast__period = 0.0f;
    _load_645_meter_vbn_rms_rms_calc_fast__var_filt = 0.0f;
    _load_645_meter_vbn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _load_645_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _load_646_meter_vbn_rms_rms_calc_fast__var_eff_s = 0;
    _load_646_meter_vbn_rms_rms_calc_fast__period = 0.0f;
    _load_646_meter_vbn_rms_rms_calc_fast__var_filt = 0.0f;
    _load_646_meter_vbn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _load_646_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _load_646_meter_vcn_rms_rms_calc_fast__var_eff_s = 0;
    _load_646_meter_vcn_rms_rms_calc_fast__period = 0.0f;
    _load_646_meter_vcn_rms_rms_calc_fast__var_filt = 0.0f;
    _load_646_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _load_646_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _load_652_meter_van_rms_rms_calc_fast__var_eff_s = 0;
    _load_652_meter_van_rms_rms_calc_fast__period = 0.0f;
    _load_652_meter_van_rms_rms_calc_fast__var_filt = 0.0f;
    _load_652_meter_van_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _load_652_meter_van_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _load_692_meter_van_rms_rms_calc_fast__var_eff_s = 0;
    _load_692_meter_van_rms_rms_calc_fast__period = 0.0f;
    _load_692_meter_van_rms_rms_calc_fast__var_filt = 0.0f;
    _load_692_meter_van_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _load_692_meter_van_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _load_692_meter_vcn_rms_rms_calc_fast__var_eff_s = 0;
    _load_692_meter_vcn_rms_rms_calc_fast__period = 0.0f;
    _load_692_meter_vcn_rms_rms_calc_fast__var_filt = 0.0f;
    _load_692_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _load_692_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s = 0;
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__period = 0.0f;
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt = 0.0f;
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state = 0;
    _rega_vreg_auto1_vload_a_rms_calc_fast__var_eff_s = 0;
    _rega_vreg_auto1_vload_a_rms_calc_fast__period = 0.0f;
    _rega_vreg_auto1_vload_a_rms_calc_fast__var_filt = 0.0f;
    _rega_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    _rega_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state = 0;
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s = 0;
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__period = 0.0f;
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt = 0.0f;
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state = 0;
    _regb_vreg_auto1_vload_a_rms_calc_fast__var_eff_s = 0;
    _regb_vreg_auto1_vload_a_rms_calc_fast__period = 0.0f;
    _regb_vreg_auto1_vload_a_rms_calc_fast__var_filt = 0.0f;
    _regb_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    _regb_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state = 0;
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s = 0;
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__period = 0.0f;
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt = 0.0f;
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state = 0;
    _regc_vreg_auto1_vload_a_rms_calc_fast__var_eff_s = 0;
    _regc_vreg_auto1_vload_a_rms_calc_fast__period = 0.0f;
    _regc_vreg_auto1_vload_a_rms_calc_fast__var_filt = 0.0f;
    _regc_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    _regc_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    XIo_OutFloat(0xfffc0000, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    XIo_OutFloat(0xfffc0004, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    XIo_OutFloat(0xfffc0008, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_sys_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_sys_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Bus_634.vAB_RMS.instantaneous
    _bus_634_vab_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x56));
    // Generated from the component: Bus_634.vBC_RMS.instantaneous
    _bus_634_vbc_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x57));
    // Generated from the component: Bus_634.vCA_RMS.instantaneous
    _bus_634_vca_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x58));
    // Generated from the component: Bus_645.vBC_RMS.instantaneous
    _bus_645_vbc_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x59));
    // Generated from the component: Bus_646.vBC_RMS.instantaneous
    _bus_646_vbc_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x5a));
    // Generated from the component: Bus_675.vAB_RMS.instantaneous
    _bus_675_vab_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x5b));
    // Generated from the component: Bus_675.vBC_RMS.instantaneous
    _bus_675_vbc_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x5c));
    // Generated from the component: Bus_675.vCA_RMS.instantaneous
    _bus_675_vca_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x5d));
    // Generated from the component: Bus_692.vAB_RMS.instantaneous
    _bus_692_vab_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x5e));
    // Generated from the component: Bus_692.vBC_RMS.instantaneous
    _bus_692_vbc_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x5f));
    // Generated from the component: Bus_692.vCA_RMS.instantaneous
    _bus_692_vca_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x60));
    // Generated from the component: Load 611.Meter.VCn_RMS.instantaneous
    _load_611_meter_vcn_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x68));
    // Generated from the component: Load 645.Meter.VBn_RMS.instantaneous
    _load_645_meter_vbn_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x6d));
    // Generated from the component: Load 646.Meter.VBn_RMS.instantaneous
    _load_646_meter_vbn_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x70));
    // Generated from the component: Load 646.Meter.VCn_RMS.instantaneous
    _load_646_meter_vcn_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x72));
    // Generated from the component: Load 652.Meter.VAn_RMS.instantaneous
    _load_652_meter_van_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x74));
    // Generated from the component: Load 692.Meter.VAn_RMS.instantaneous
    _load_692_meter_van_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x7d));
    // Generated from the component: Load 692.Meter.VCn_RMS.instantaneous
    _load_692_meter_vcn_rms_instantaneous__out = (HIL_InFloat(0xc80000 + 0x7f));
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.instantaneous
    _rega_vreg_auto1_ilrms_a_instantaneous__out = (HIL_InFloat(0xc80000 + 0x89));
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.instantaneous
    _rega_vreg_auto1_vload_a_instantaneous__out = (HIL_InFloat(0xc80000 + 0x80));
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.instantaneous
    _regb_vreg_auto1_ilrms_a_instantaneous__out = (HIL_InFloat(0xc80000 + 0x8b));
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.instantaneous
    _regb_vreg_auto1_vload_a_instantaneous__out = (HIL_InFloat(0xc80000 + 0x82));
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.instantaneous
    _regc_vreg_auto1_ilrms_a_instantaneous__out = (HIL_InFloat(0xc80000 + 0x8d));
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.instantaneous
    _regc_vreg_auto1_vload_a_instantaneous__out = (HIL_InFloat(0xc80000 + 0x84));
    // Generated from the component: Bus_634.vAB_RMS.rms_calc_fast
    _bus_634_vab_rms_rms_calc_fast__v_sq_sum_state = _bus_634_vab_rms_rms_calc_fast__v_sq_sum_state + _bus_634_vab_rms_instantaneous__out * _bus_634_vab_rms_instantaneous__out;
    _bus_634_vab_rms_rms_calc_fast__var_filt_old = _bus_634_vab_rms_rms_calc_fast__var_filt;
    _bus_634_vab_rms_rms_calc_fast__var_filt = (_bus_634_vab_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_634_vab_rms_instantaneous__out * 0.0909);
    if((_bus_634_vab_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_634_vab_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_634_vab_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_634_vab_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_634_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_634_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_634_vab_rms_rms_calc_fast__var_eff_s = _bus_634_vab_rms_rms_calc_fast__v_sq_sum_state;
        _bus_634_vab_rms_rms_calc_fast__period = (double)_bus_634_vab_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_634_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_634.vBC_RMS.rms_calc_fast
    _bus_634_vbc_rms_rms_calc_fast__v_sq_sum_state = _bus_634_vbc_rms_rms_calc_fast__v_sq_sum_state + _bus_634_vbc_rms_instantaneous__out * _bus_634_vbc_rms_instantaneous__out;
    _bus_634_vbc_rms_rms_calc_fast__var_filt_old = _bus_634_vbc_rms_rms_calc_fast__var_filt;
    _bus_634_vbc_rms_rms_calc_fast__var_filt = (_bus_634_vbc_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_634_vbc_rms_instantaneous__out * 0.0909);
    if((_bus_634_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_634_vbc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_634_vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_634_vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_634_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_634_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_634_vbc_rms_rms_calc_fast__var_eff_s = _bus_634_vbc_rms_rms_calc_fast__v_sq_sum_state;
        _bus_634_vbc_rms_rms_calc_fast__period = (double)_bus_634_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_634_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_634.vCA_RMS.rms_calc_fast
    _bus_634_vca_rms_rms_calc_fast__v_sq_sum_state = _bus_634_vca_rms_rms_calc_fast__v_sq_sum_state + _bus_634_vca_rms_instantaneous__out * _bus_634_vca_rms_instantaneous__out;
    _bus_634_vca_rms_rms_calc_fast__var_filt_old = _bus_634_vca_rms_rms_calc_fast__var_filt;
    _bus_634_vca_rms_rms_calc_fast__var_filt = (_bus_634_vca_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_634_vca_rms_instantaneous__out * 0.0909);
    if((_bus_634_vca_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_634_vca_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_634_vca_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_634_vca_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_634_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_634_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_634_vca_rms_rms_calc_fast__var_eff_s = _bus_634_vca_rms_rms_calc_fast__v_sq_sum_state;
        _bus_634_vca_rms_rms_calc_fast__period = (double)_bus_634_vca_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_634_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_645.vBC_RMS.rms_calc_fast
    _bus_645_vbc_rms_rms_calc_fast__v_sq_sum_state = _bus_645_vbc_rms_rms_calc_fast__v_sq_sum_state + _bus_645_vbc_rms_instantaneous__out * _bus_645_vbc_rms_instantaneous__out;
    _bus_645_vbc_rms_rms_calc_fast__var_filt_old = _bus_645_vbc_rms_rms_calc_fast__var_filt;
    _bus_645_vbc_rms_rms_calc_fast__var_filt = (_bus_645_vbc_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_645_vbc_rms_instantaneous__out * 0.0909);
    if((_bus_645_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_645_vbc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_645_vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_645_vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_645_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_645_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_645_vbc_rms_rms_calc_fast__var_eff_s = _bus_645_vbc_rms_rms_calc_fast__v_sq_sum_state;
        _bus_645_vbc_rms_rms_calc_fast__period = (double)_bus_645_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_645_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_646.vBC_RMS.rms_calc_fast
    _bus_646_vbc_rms_rms_calc_fast__v_sq_sum_state = _bus_646_vbc_rms_rms_calc_fast__v_sq_sum_state + _bus_646_vbc_rms_instantaneous__out * _bus_646_vbc_rms_instantaneous__out;
    _bus_646_vbc_rms_rms_calc_fast__var_filt_old = _bus_646_vbc_rms_rms_calc_fast__var_filt;
    _bus_646_vbc_rms_rms_calc_fast__var_filt = (_bus_646_vbc_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_646_vbc_rms_instantaneous__out * 0.0909);
    if((_bus_646_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_646_vbc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_646_vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_646_vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_646_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_646_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_646_vbc_rms_rms_calc_fast__var_eff_s = _bus_646_vbc_rms_rms_calc_fast__v_sq_sum_state;
        _bus_646_vbc_rms_rms_calc_fast__period = (double)_bus_646_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_646_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_675.vAB_RMS.rms_calc_fast
    _bus_675_vab_rms_rms_calc_fast__v_sq_sum_state = _bus_675_vab_rms_rms_calc_fast__v_sq_sum_state + _bus_675_vab_rms_instantaneous__out * _bus_675_vab_rms_instantaneous__out;
    _bus_675_vab_rms_rms_calc_fast__var_filt_old = _bus_675_vab_rms_rms_calc_fast__var_filt;
    _bus_675_vab_rms_rms_calc_fast__var_filt = (_bus_675_vab_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_675_vab_rms_instantaneous__out * 0.0909);
    if((_bus_675_vab_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_675_vab_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_675_vab_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_675_vab_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_675_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_675_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_675_vab_rms_rms_calc_fast__var_eff_s = _bus_675_vab_rms_rms_calc_fast__v_sq_sum_state;
        _bus_675_vab_rms_rms_calc_fast__period = (double)_bus_675_vab_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_675_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_675.vBC_RMS.rms_calc_fast
    _bus_675_vbc_rms_rms_calc_fast__v_sq_sum_state = _bus_675_vbc_rms_rms_calc_fast__v_sq_sum_state + _bus_675_vbc_rms_instantaneous__out * _bus_675_vbc_rms_instantaneous__out;
    _bus_675_vbc_rms_rms_calc_fast__var_filt_old = _bus_675_vbc_rms_rms_calc_fast__var_filt;
    _bus_675_vbc_rms_rms_calc_fast__var_filt = (_bus_675_vbc_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_675_vbc_rms_instantaneous__out * 0.0909);
    if((_bus_675_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_675_vbc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_675_vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_675_vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_675_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_675_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_675_vbc_rms_rms_calc_fast__var_eff_s = _bus_675_vbc_rms_rms_calc_fast__v_sq_sum_state;
        _bus_675_vbc_rms_rms_calc_fast__period = (double)_bus_675_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_675_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_675.vCA_RMS.rms_calc_fast
    _bus_675_vca_rms_rms_calc_fast__v_sq_sum_state = _bus_675_vca_rms_rms_calc_fast__v_sq_sum_state + _bus_675_vca_rms_instantaneous__out * _bus_675_vca_rms_instantaneous__out;
    _bus_675_vca_rms_rms_calc_fast__var_filt_old = _bus_675_vca_rms_rms_calc_fast__var_filt;
    _bus_675_vca_rms_rms_calc_fast__var_filt = (_bus_675_vca_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_675_vca_rms_instantaneous__out * 0.0909);
    if((_bus_675_vca_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_675_vca_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_675_vca_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_675_vca_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_675_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_675_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_675_vca_rms_rms_calc_fast__var_eff_s = _bus_675_vca_rms_rms_calc_fast__v_sq_sum_state;
        _bus_675_vca_rms_rms_calc_fast__period = (double)_bus_675_vca_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_675_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_692.vAB_RMS.rms_calc_fast
    _bus_692_vab_rms_rms_calc_fast__v_sq_sum_state = _bus_692_vab_rms_rms_calc_fast__v_sq_sum_state + _bus_692_vab_rms_instantaneous__out * _bus_692_vab_rms_instantaneous__out;
    _bus_692_vab_rms_rms_calc_fast__var_filt_old = _bus_692_vab_rms_rms_calc_fast__var_filt;
    _bus_692_vab_rms_rms_calc_fast__var_filt = (_bus_692_vab_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_692_vab_rms_instantaneous__out * 0.0909);
    if((_bus_692_vab_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_692_vab_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_692_vab_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_692_vab_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_692_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_692_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_692_vab_rms_rms_calc_fast__var_eff_s = _bus_692_vab_rms_rms_calc_fast__v_sq_sum_state;
        _bus_692_vab_rms_rms_calc_fast__period = (double)_bus_692_vab_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_692_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_692.vBC_RMS.rms_calc_fast
    _bus_692_vbc_rms_rms_calc_fast__v_sq_sum_state = _bus_692_vbc_rms_rms_calc_fast__v_sq_sum_state + _bus_692_vbc_rms_instantaneous__out * _bus_692_vbc_rms_instantaneous__out;
    _bus_692_vbc_rms_rms_calc_fast__var_filt_old = _bus_692_vbc_rms_rms_calc_fast__var_filt;
    _bus_692_vbc_rms_rms_calc_fast__var_filt = (_bus_692_vbc_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_692_vbc_rms_instantaneous__out * 0.0909);
    if((_bus_692_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_692_vbc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_692_vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_692_vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_692_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_692_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_692_vbc_rms_rms_calc_fast__var_eff_s = _bus_692_vbc_rms_rms_calc_fast__v_sq_sum_state;
        _bus_692_vbc_rms_rms_calc_fast__period = (double)_bus_692_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_692_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_692.vCA_RMS.rms_calc_fast
    _bus_692_vca_rms_rms_calc_fast__v_sq_sum_state = _bus_692_vca_rms_rms_calc_fast__v_sq_sum_state + _bus_692_vca_rms_instantaneous__out * _bus_692_vca_rms_instantaneous__out;
    _bus_692_vca_rms_rms_calc_fast__var_filt_old = _bus_692_vca_rms_rms_calc_fast__var_filt;
    _bus_692_vca_rms_rms_calc_fast__var_filt = (_bus_692_vca_rms_rms_calc_fast__var_filt_old * 0.909 + _bus_692_vca_rms_instantaneous__out * 0.0909);
    if((_bus_692_vca_rms_rms_calc_fast__var_filt >= 0.0f) && (_bus_692_vca_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _bus_692_vca_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _bus_692_vca_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_bus_692_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_692_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_692_vca_rms_rms_calc_fast__var_eff_s = _bus_692_vca_rms_rms_calc_fast__v_sq_sum_state;
        _bus_692_vca_rms_rms_calc_fast__period = (double)_bus_692_vca_rms_rms_calc_fast__pc_cnt_1_state;
        _bus_692_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Load 611.Meter.VCn_RMS.rms_calc_fast
    _load_611_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = _load_611_meter_vcn_rms_rms_calc_fast__v_sq_sum_state + _load_611_meter_vcn_rms_instantaneous__out * _load_611_meter_vcn_rms_instantaneous__out;
    _load_611_meter_vcn_rms_rms_calc_fast__var_filt_old = _load_611_meter_vcn_rms_rms_calc_fast__var_filt;
    _load_611_meter_vcn_rms_rms_calc_fast__var_filt = (_load_611_meter_vcn_rms_rms_calc_fast__var_filt_old * 0.909 + _load_611_meter_vcn_rms_instantaneous__out * 0.0909);
    if((_load_611_meter_vcn_rms_rms_calc_fast__var_filt >= 0.0f) && (_load_611_meter_vcn_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _load_611_meter_vcn_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _load_611_meter_vcn_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_load_611_meter_vcn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_611_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_611_meter_vcn_rms_rms_calc_fast__var_eff_s = _load_611_meter_vcn_rms_rms_calc_fast__v_sq_sum_state;
        _load_611_meter_vcn_rms_rms_calc_fast__period = (double)_load_611_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state;
        _load_611_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Load 645.Meter.VBn_RMS.rms_calc_fast
    _load_645_meter_vbn_rms_rms_calc_fast__v_sq_sum_state = _load_645_meter_vbn_rms_rms_calc_fast__v_sq_sum_state + _load_645_meter_vbn_rms_instantaneous__out * _load_645_meter_vbn_rms_instantaneous__out;
    _load_645_meter_vbn_rms_rms_calc_fast__var_filt_old = _load_645_meter_vbn_rms_rms_calc_fast__var_filt;
    _load_645_meter_vbn_rms_rms_calc_fast__var_filt = (_load_645_meter_vbn_rms_rms_calc_fast__var_filt_old * 0.909 + _load_645_meter_vbn_rms_instantaneous__out * 0.0909);
    if((_load_645_meter_vbn_rms_rms_calc_fast__var_filt >= 0.0f) && (_load_645_meter_vbn_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _load_645_meter_vbn_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _load_645_meter_vbn_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_load_645_meter_vbn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_645_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_645_meter_vbn_rms_rms_calc_fast__var_eff_s = _load_645_meter_vbn_rms_rms_calc_fast__v_sq_sum_state;
        _load_645_meter_vbn_rms_rms_calc_fast__period = (double)_load_645_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state;
        _load_645_meter_vbn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Load 646.Meter.VBn_RMS.rms_calc_fast
    _load_646_meter_vbn_rms_rms_calc_fast__v_sq_sum_state = _load_646_meter_vbn_rms_rms_calc_fast__v_sq_sum_state + _load_646_meter_vbn_rms_instantaneous__out * _load_646_meter_vbn_rms_instantaneous__out;
    _load_646_meter_vbn_rms_rms_calc_fast__var_filt_old = _load_646_meter_vbn_rms_rms_calc_fast__var_filt;
    _load_646_meter_vbn_rms_rms_calc_fast__var_filt = (_load_646_meter_vbn_rms_rms_calc_fast__var_filt_old * 0.909 + _load_646_meter_vbn_rms_instantaneous__out * 0.0909);
    if((_load_646_meter_vbn_rms_rms_calc_fast__var_filt >= 0.0f) && (_load_646_meter_vbn_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _load_646_meter_vbn_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _load_646_meter_vbn_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_load_646_meter_vbn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_646_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_646_meter_vbn_rms_rms_calc_fast__var_eff_s = _load_646_meter_vbn_rms_rms_calc_fast__v_sq_sum_state;
        _load_646_meter_vbn_rms_rms_calc_fast__period = (double)_load_646_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state;
        _load_646_meter_vbn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Load 646.Meter.VCn_RMS.rms_calc_fast
    _load_646_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = _load_646_meter_vcn_rms_rms_calc_fast__v_sq_sum_state + _load_646_meter_vcn_rms_instantaneous__out * _load_646_meter_vcn_rms_instantaneous__out;
    _load_646_meter_vcn_rms_rms_calc_fast__var_filt_old = _load_646_meter_vcn_rms_rms_calc_fast__var_filt;
    _load_646_meter_vcn_rms_rms_calc_fast__var_filt = (_load_646_meter_vcn_rms_rms_calc_fast__var_filt_old * 0.909 + _load_646_meter_vcn_rms_instantaneous__out * 0.0909);
    if((_load_646_meter_vcn_rms_rms_calc_fast__var_filt >= 0.0f) && (_load_646_meter_vcn_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _load_646_meter_vcn_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _load_646_meter_vcn_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_load_646_meter_vcn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_646_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_646_meter_vcn_rms_rms_calc_fast__var_eff_s = _load_646_meter_vcn_rms_rms_calc_fast__v_sq_sum_state;
        _load_646_meter_vcn_rms_rms_calc_fast__period = (double)_load_646_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state;
        _load_646_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Load 652.Meter.VAn_RMS.rms_calc_fast
    _load_652_meter_van_rms_rms_calc_fast__v_sq_sum_state = _load_652_meter_van_rms_rms_calc_fast__v_sq_sum_state + _load_652_meter_van_rms_instantaneous__out * _load_652_meter_van_rms_instantaneous__out;
    _load_652_meter_van_rms_rms_calc_fast__var_filt_old = _load_652_meter_van_rms_rms_calc_fast__var_filt;
    _load_652_meter_van_rms_rms_calc_fast__var_filt = (_load_652_meter_van_rms_rms_calc_fast__var_filt_old * 0.909 + _load_652_meter_van_rms_instantaneous__out * 0.0909);
    if((_load_652_meter_van_rms_rms_calc_fast__var_filt >= 0.0f) && (_load_652_meter_van_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _load_652_meter_van_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _load_652_meter_van_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_load_652_meter_van_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_652_meter_van_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_652_meter_van_rms_rms_calc_fast__var_eff_s = _load_652_meter_van_rms_rms_calc_fast__v_sq_sum_state;
        _load_652_meter_van_rms_rms_calc_fast__period = (double)_load_652_meter_van_rms_rms_calc_fast__pc_cnt_1_state;
        _load_652_meter_van_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Load 692.Meter.VAn_RMS.rms_calc_fast
    _load_692_meter_van_rms_rms_calc_fast__v_sq_sum_state = _load_692_meter_van_rms_rms_calc_fast__v_sq_sum_state + _load_692_meter_van_rms_instantaneous__out * _load_692_meter_van_rms_instantaneous__out;
    _load_692_meter_van_rms_rms_calc_fast__var_filt_old = _load_692_meter_van_rms_rms_calc_fast__var_filt;
    _load_692_meter_van_rms_rms_calc_fast__var_filt = (_load_692_meter_van_rms_rms_calc_fast__var_filt_old * 0.909 + _load_692_meter_van_rms_instantaneous__out * 0.0909);
    if((_load_692_meter_van_rms_rms_calc_fast__var_filt >= 0.0f) && (_load_692_meter_van_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _load_692_meter_van_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _load_692_meter_van_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_load_692_meter_van_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_692_meter_van_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_692_meter_van_rms_rms_calc_fast__var_eff_s = _load_692_meter_van_rms_rms_calc_fast__v_sq_sum_state;
        _load_692_meter_van_rms_rms_calc_fast__period = (double)_load_692_meter_van_rms_rms_calc_fast__pc_cnt_1_state;
        _load_692_meter_van_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Load 692.Meter.VCn_RMS.rms_calc_fast
    _load_692_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = _load_692_meter_vcn_rms_rms_calc_fast__v_sq_sum_state + _load_692_meter_vcn_rms_instantaneous__out * _load_692_meter_vcn_rms_instantaneous__out;
    _load_692_meter_vcn_rms_rms_calc_fast__var_filt_old = _load_692_meter_vcn_rms_rms_calc_fast__var_filt;
    _load_692_meter_vcn_rms_rms_calc_fast__var_filt = (_load_692_meter_vcn_rms_rms_calc_fast__var_filt_old * 0.909 + _load_692_meter_vcn_rms_instantaneous__out * 0.0909);
    if((_load_692_meter_vcn_rms_rms_calc_fast__var_filt >= 0.0f) && (_load_692_meter_vcn_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _load_692_meter_vcn_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _load_692_meter_vcn_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_load_692_meter_vcn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_692_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_692_meter_vcn_rms_rms_calc_fast__var_eff_s = _load_692_meter_vcn_rms_rms_calc_fast__v_sq_sum_state;
        _load_692_meter_vcn_rms_rms_calc_fast__period = (double)_load_692_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state;
        _load_692_meter_vcn_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.rms_calc_fast
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = _rega_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state + _rega_vreg_auto1_ilrms_a_instantaneous__out * _rega_vreg_auto1_ilrms_a_instantaneous__out;
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old = _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt;
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt = (_rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old * 0.909 + _rega_vreg_auto1_ilrms_a_instantaneous__out * 0.0909);
    if((_rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt >= 0.0f) && (_rega_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old < 0.0f)) {
        _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_zc = 1;
    }
    else {
        _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_rega_vreg_auto1_ilrms_a_rms_calc_fast__var_zc == 1) || (5000 == _rega_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state)) {
        _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s = _rega_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state;
        _rega_vreg_auto1_ilrms_a_rms_calc_fast__period = (double)_rega_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state;
        _rega_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.rms_calc_fast
    _rega_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = _rega_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state + _rega_vreg_auto1_vload_a_instantaneous__out * _rega_vreg_auto1_vload_a_instantaneous__out;
    _rega_vreg_auto1_vload_a_rms_calc_fast__var_filt_old = _rega_vreg_auto1_vload_a_rms_calc_fast__var_filt;
    _rega_vreg_auto1_vload_a_rms_calc_fast__var_filt = (_rega_vreg_auto1_vload_a_rms_calc_fast__var_filt_old * 0.909 + _rega_vreg_auto1_vload_a_instantaneous__out * 0.0909);
    if((_rega_vreg_auto1_vload_a_rms_calc_fast__var_filt >= 0.0f) && (_rega_vreg_auto1_vload_a_rms_calc_fast__var_filt_old < 0.0f)) {
        _rega_vreg_auto1_vload_a_rms_calc_fast__var_zc = 1;
    }
    else {
        _rega_vreg_auto1_vload_a_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_rega_vreg_auto1_vload_a_rms_calc_fast__var_zc == 1) || (5000 == _rega_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state)) {
        _rega_vreg_auto1_vload_a_rms_calc_fast__var_eff_s = _rega_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state;
        _rega_vreg_auto1_vload_a_rms_calc_fast__period = (double)_rega_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state;
        _rega_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.rms_calc_fast
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = _regb_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state + _regb_vreg_auto1_ilrms_a_instantaneous__out * _regb_vreg_auto1_ilrms_a_instantaneous__out;
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old = _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt;
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt = (_regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old * 0.909 + _regb_vreg_auto1_ilrms_a_instantaneous__out * 0.0909);
    if((_regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt >= 0.0f) && (_regb_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old < 0.0f)) {
        _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_zc = 1;
    }
    else {
        _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_regb_vreg_auto1_ilrms_a_rms_calc_fast__var_zc == 1) || (5000 == _regb_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state)) {
        _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s = _regb_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state;
        _regb_vreg_auto1_ilrms_a_rms_calc_fast__period = (double)_regb_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state;
        _regb_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.rms_calc_fast
    _regb_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = _regb_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state + _regb_vreg_auto1_vload_a_instantaneous__out * _regb_vreg_auto1_vload_a_instantaneous__out;
    _regb_vreg_auto1_vload_a_rms_calc_fast__var_filt_old = _regb_vreg_auto1_vload_a_rms_calc_fast__var_filt;
    _regb_vreg_auto1_vload_a_rms_calc_fast__var_filt = (_regb_vreg_auto1_vload_a_rms_calc_fast__var_filt_old * 0.909 + _regb_vreg_auto1_vload_a_instantaneous__out * 0.0909);
    if((_regb_vreg_auto1_vload_a_rms_calc_fast__var_filt >= 0.0f) && (_regb_vreg_auto1_vload_a_rms_calc_fast__var_filt_old < 0.0f)) {
        _regb_vreg_auto1_vload_a_rms_calc_fast__var_zc = 1;
    }
    else {
        _regb_vreg_auto1_vload_a_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_regb_vreg_auto1_vload_a_rms_calc_fast__var_zc == 1) || (5000 == _regb_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state)) {
        _regb_vreg_auto1_vload_a_rms_calc_fast__var_eff_s = _regb_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state;
        _regb_vreg_auto1_vload_a_rms_calc_fast__period = (double)_regb_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state;
        _regb_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.rms_calc_fast
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = _regc_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state + _regc_vreg_auto1_ilrms_a_instantaneous__out * _regc_vreg_auto1_ilrms_a_instantaneous__out;
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old = _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt;
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt = (_regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old * 0.909 + _regc_vreg_auto1_ilrms_a_instantaneous__out * 0.0909);
    if((_regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt >= 0.0f) && (_regc_vreg_auto1_ilrms_a_rms_calc_fast__var_filt_old < 0.0f)) {
        _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_zc = 1;
    }
    else {
        _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_regc_vreg_auto1_ilrms_a_rms_calc_fast__var_zc == 1) || (5000 == _regc_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state)) {
        _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s = _regc_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state;
        _regc_vreg_auto1_ilrms_a_rms_calc_fast__period = (double)_regc_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state;
        _regc_vreg_auto1_ilrms_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.rms_calc_fast
    _regc_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = _regc_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state + _regc_vreg_auto1_vload_a_instantaneous__out * _regc_vreg_auto1_vload_a_instantaneous__out;
    _regc_vreg_auto1_vload_a_rms_calc_fast__var_filt_old = _regc_vreg_auto1_vload_a_rms_calc_fast__var_filt;
    _regc_vreg_auto1_vload_a_rms_calc_fast__var_filt = (_regc_vreg_auto1_vload_a_rms_calc_fast__var_filt_old * 0.909 + _regc_vreg_auto1_vload_a_instantaneous__out * 0.0909);
    if((_regc_vreg_auto1_vload_a_rms_calc_fast__var_filt >= 0.0f) && (_regc_vreg_auto1_vload_a_rms_calc_fast__var_filt_old < 0.0f)) {
        _regc_vreg_auto1_vload_a_rms_calc_fast__var_zc = 1;
    }
    else {
        _regc_vreg_auto1_vload_a_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_regc_vreg_auto1_vload_a_rms_calc_fast__var_zc == 1) || (5000 == _regc_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state)) {
        _regc_vreg_auto1_vload_a_rms_calc_fast__var_eff_s = _regc_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state;
        _regc_vreg_auto1_vload_a_rms_calc_fast__period = (double)_regc_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state;
        _regc_vreg_auto1_vload_a_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Bus_634.vAB_RMS.rt1.Input
    _bus_634_vab_rms_rt1_output__out = _bus_634_vab_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_634.vAB_RMS.rt2.Input
    _bus_634_vab_rms_rt2_output__out = _bus_634_vab_rms_rms_calc_fast__period;
    // Generated from the component: Bus_634.vAB_RMS.t1
    // Generated from the component: Bus_634.vBC_RMS.rt1.Input
    _bus_634_vbc_rms_rt1_output__out = _bus_634_vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_634.vBC_RMS.rt2.Input
    _bus_634_vbc_rms_rt2_output__out = _bus_634_vbc_rms_rms_calc_fast__period;
    // Generated from the component: Bus_634.vBC_RMS.t1
    // Generated from the component: Bus_634.vCA_RMS.rt1.Input
    _bus_634_vca_rms_rt1_output__out = _bus_634_vca_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_634.vCA_RMS.rt2.Input
    _bus_634_vca_rms_rt2_output__out = _bus_634_vca_rms_rms_calc_fast__period;
    // Generated from the component: Bus_634.vCA_RMS.t1
    // Generated from the component: Bus_645.vBC_RMS.rt1.Input
    _bus_645_vbc_rms_rt1_output__out = _bus_645_vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_645.vBC_RMS.rt2.Input
    _bus_645_vbc_rms_rt2_output__out = _bus_645_vbc_rms_rms_calc_fast__period;
    // Generated from the component: Bus_645.vBC_RMS.t1
    // Generated from the component: Bus_646.vBC_RMS.rt1.Input
    _bus_646_vbc_rms_rt1_output__out = _bus_646_vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_646.vBC_RMS.rt2.Input
    _bus_646_vbc_rms_rt2_output__out = _bus_646_vbc_rms_rms_calc_fast__period;
    // Generated from the component: Bus_646.vBC_RMS.t1
    // Generated from the component: Bus_675.vAB_RMS.rt1.Input
    _bus_675_vab_rms_rt1_output__out = _bus_675_vab_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_675.vAB_RMS.rt2.Input
    _bus_675_vab_rms_rt2_output__out = _bus_675_vab_rms_rms_calc_fast__period;
    // Generated from the component: Bus_675.vAB_RMS.t1
    // Generated from the component: Bus_675.vBC_RMS.rt1.Input
    _bus_675_vbc_rms_rt1_output__out = _bus_675_vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_675.vBC_RMS.rt2.Input
    _bus_675_vbc_rms_rt2_output__out = _bus_675_vbc_rms_rms_calc_fast__period;
    // Generated from the component: Bus_675.vBC_RMS.t1
    // Generated from the component: Bus_675.vCA_RMS.rt1.Input
    _bus_675_vca_rms_rt1_output__out = _bus_675_vca_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_675.vCA_RMS.rt2.Input
    _bus_675_vca_rms_rt2_output__out = _bus_675_vca_rms_rms_calc_fast__period;
    // Generated from the component: Bus_675.vCA_RMS.t1
    // Generated from the component: Bus_692.vAB_RMS.rt1.Input
    _bus_692_vab_rms_rt1_output__out = _bus_692_vab_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_692.vAB_RMS.rt2.Input
    _bus_692_vab_rms_rt2_output__out = _bus_692_vab_rms_rms_calc_fast__period;
    // Generated from the component: Bus_692.vAB_RMS.t1
    // Generated from the component: Bus_692.vBC_RMS.rt1.Input
    _bus_692_vbc_rms_rt1_output__out = _bus_692_vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_692.vBC_RMS.rt2.Input
    _bus_692_vbc_rms_rt2_output__out = _bus_692_vbc_rms_rms_calc_fast__period;
    // Generated from the component: Bus_692.vBC_RMS.t1
    // Generated from the component: Bus_692.vCA_RMS.rt1.Input
    _bus_692_vca_rms_rt1_output__out = _bus_692_vca_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Bus_692.vCA_RMS.rt2.Input
    _bus_692_vca_rms_rt2_output__out = _bus_692_vca_rms_rms_calc_fast__period;
    // Generated from the component: Bus_692.vCA_RMS.t1
    // Generated from the component: Load 611.Meter.VCn_RMS.rt1.Input
    _load_611_meter_vcn_rms_rt1_output__out = _load_611_meter_vcn_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Load 611.Meter.VCn_RMS.rt2.Input
    _load_611_meter_vcn_rms_rt2_output__out = _load_611_meter_vcn_rms_rms_calc_fast__period;
    // Generated from the component: Load 611.Meter.VCn_RMS.t1
    // Generated from the component: Load 645.Meter.VBn_RMS.rt1.Input
    _load_645_meter_vbn_rms_rt1_output__out = _load_645_meter_vbn_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Load 645.Meter.VBn_RMS.rt2.Input
    _load_645_meter_vbn_rms_rt2_output__out = _load_645_meter_vbn_rms_rms_calc_fast__period;
    // Generated from the component: Load 645.Meter.VBn_RMS.t1
    // Generated from the component: Load 646.Meter.VBn_RMS.rt1.Input
    _load_646_meter_vbn_rms_rt1_output__out = _load_646_meter_vbn_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Load 646.Meter.VBn_RMS.rt2.Input
    _load_646_meter_vbn_rms_rt2_output__out = _load_646_meter_vbn_rms_rms_calc_fast__period;
    // Generated from the component: Load 646.Meter.VBn_RMS.t1
    // Generated from the component: Load 646.Meter.VCn_RMS.rt1.Input
    _load_646_meter_vcn_rms_rt1_output__out = _load_646_meter_vcn_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Load 646.Meter.VCn_RMS.rt2.Input
    _load_646_meter_vcn_rms_rt2_output__out = _load_646_meter_vcn_rms_rms_calc_fast__period;
    // Generated from the component: Load 646.Meter.VCn_RMS.t1
    // Generated from the component: Load 652.Meter.VAn_RMS.rt1.Input
    _load_652_meter_van_rms_rt1_output__out = _load_652_meter_van_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Load 652.Meter.VAn_RMS.rt2.Input
    _load_652_meter_van_rms_rt2_output__out = _load_652_meter_van_rms_rms_calc_fast__period;
    // Generated from the component: Load 652.Meter.VAn_RMS.t1
    // Generated from the component: Load 692.Meter.VAn_RMS.rt1.Input
    _load_692_meter_van_rms_rt1_output__out = _load_692_meter_van_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Load 692.Meter.VAn_RMS.rt2.Input
    _load_692_meter_van_rms_rt2_output__out = _load_692_meter_van_rms_rms_calc_fast__period;
    // Generated from the component: Load 692.Meter.VAn_RMS.t1
    // Generated from the component: Load 692.Meter.VCn_RMS.rt1.Input
    _load_692_meter_vcn_rms_rt1_output__out = _load_692_meter_vcn_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Load 692.Meter.VCn_RMS.rt2.Input
    _load_692_meter_vcn_rms_rt2_output__out = _load_692_meter_vcn_rms_rms_calc_fast__period;
    // Generated from the component: Load 692.Meter.VCn_RMS.t1
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.rt1.Input
    _rega_vreg_auto1_ilrms_a_rt1_output__out = _rega_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s;
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.rt2.Input
    _rega_vreg_auto1_ilrms_a_rt2_output__out = _rega_vreg_auto1_ilrms_a_rms_calc_fast__period;
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.t1
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.rt1.Input
    _rega_vreg_auto1_vload_a_rt1_output__out = _rega_vreg_auto1_vload_a_rms_calc_fast__var_eff_s;
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.rt2.Input
    _rega_vreg_auto1_vload_a_rt2_output__out = _rega_vreg_auto1_vload_a_rms_calc_fast__period;
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.t1
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.rt1.Input
    _regb_vreg_auto1_ilrms_a_rt1_output__out = _regb_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s;
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.rt2.Input
    _regb_vreg_auto1_ilrms_a_rt2_output__out = _regb_vreg_auto1_ilrms_a_rms_calc_fast__period;
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.t1
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.rt1.Input
    _regb_vreg_auto1_vload_a_rt1_output__out = _regb_vreg_auto1_vload_a_rms_calc_fast__var_eff_s;
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.rt2.Input
    _regb_vreg_auto1_vload_a_rt2_output__out = _regb_vreg_auto1_vload_a_rms_calc_fast__period;
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.t1
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.rt1.Input
    _regc_vreg_auto1_ilrms_a_rt1_output__out = _regc_vreg_auto1_ilrms_a_rms_calc_fast__var_eff_s;
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.rt2.Input
    _regc_vreg_auto1_ilrms_a_rt2_output__out = _regc_vreg_auto1_ilrms_a_rms_calc_fast__period;
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.t1
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.rt1.Input
    _regc_vreg_auto1_vload_a_rt1_output__out = _regc_vreg_auto1_vload_a_rms_calc_fast__var_eff_s;
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.rt2.Input
    _regc_vreg_auto1_vload_a_rt2_output__out = _regc_vreg_auto1_vload_a_rms_calc_fast__period;
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.t1
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Bus_634.vAB_RMS.rms_calc_fast
    if ((_bus_634_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_634_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_634_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_634_vab_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_634.vBC_RMS.rms_calc_fast
    if ((_bus_634_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_634_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_634_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_634_vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_634.vCA_RMS.rms_calc_fast
    if ((_bus_634_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_634_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_634_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_634_vca_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_645.vBC_RMS.rms_calc_fast
    if ((_bus_645_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_645_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_645_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_645_vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_646.vBC_RMS.rms_calc_fast
    if ((_bus_646_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_646_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_646_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_646_vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_675.vAB_RMS.rms_calc_fast
    if ((_bus_675_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_675_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_675_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_675_vab_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_675.vBC_RMS.rms_calc_fast
    if ((_bus_675_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_675_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_675_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_675_vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_675.vCA_RMS.rms_calc_fast
    if ((_bus_675_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_675_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_675_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_675_vca_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_692.vAB_RMS.rms_calc_fast
    if ((_bus_692_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_692_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_692_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_692_vab_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_692.vBC_RMS.rms_calc_fast
    if ((_bus_692_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_692_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_692_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_692_vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Bus_692.vCA_RMS.rms_calc_fast
    if ((_bus_692_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _bus_692_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _bus_692_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _bus_692_vca_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Load 611.Meter.VCn_RMS.rms_calc_fast
    if ((_load_611_meter_vcn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_611_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_611_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _load_611_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Load 645.Meter.VBn_RMS.rms_calc_fast
    if ((_load_645_meter_vbn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_645_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_645_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _load_645_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Load 646.Meter.VBn_RMS.rms_calc_fast
    if ((_load_646_meter_vbn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_646_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_646_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _load_646_meter_vbn_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Load 646.Meter.VCn_RMS.rms_calc_fast
    if ((_load_646_meter_vcn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_646_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_646_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _load_646_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Load 652.Meter.VAn_RMS.rms_calc_fast
    if ((_load_652_meter_van_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_652_meter_van_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_652_meter_van_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _load_652_meter_van_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Load 692.Meter.VAn_RMS.rms_calc_fast
    if ((_load_692_meter_van_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_692_meter_van_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_692_meter_van_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _load_692_meter_van_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Load 692.Meter.VCn_RMS.rms_calc_fast
    if ((_load_692_meter_vcn_rms_rms_calc_fast__var_zc == 1) || (5000 == _load_692_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state)) {
        _load_692_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _load_692_meter_vcn_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.rms_calc_fast
    if ((_rega_vreg_auto1_ilrms_a_rms_calc_fast__var_zc == 1) || (5000 == _rega_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state)) {
        _rega_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _rega_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.rms_calc_fast
    if ((_rega_vreg_auto1_vload_a_rms_calc_fast__var_zc == 1) || (5000 == _rega_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state)) {
        _rega_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _rega_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.rms_calc_fast
    if ((_regb_vreg_auto1_ilrms_a_rms_calc_fast__var_zc == 1) || (5000 == _regb_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state)) {
        _regb_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _regb_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.rms_calc_fast
    if ((_regb_vreg_auto1_vload_a_rms_calc_fast__var_zc == 1) || (5000 == _regb_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state)) {
        _regb_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _regb_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.rms_calc_fast
    if ((_regc_vreg_auto1_ilrms_a_rms_calc_fast__var_zc == 1) || (5000 == _regc_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state)) {
        _regc_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _regc_vreg_auto1_ilrms_a_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.rms_calc_fast
    if ((_regc_vreg_auto1_vload_a_rms_calc_fast__var_zc == 1) || (5000 == _regc_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state)) {
        _regc_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _regc_vreg_auto1_vload_a_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Bus_634.vAB_RMS.rms_calc_slow
    if(_bus_634_vab_rms_rt2_output__out > 0.0f) {
        _bus_634_vab_rms_rms_calc_slow__var_rms = sqrt(_bus_634_vab_rms_rt1_output__out / _bus_634_vab_rms_rt2_output__out);
    }
    else {
        _bus_634_vab_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_634.vBC_RMS.rms_calc_slow
    if(_bus_634_vbc_rms_rt2_output__out > 0.0f) {
        _bus_634_vbc_rms_rms_calc_slow__var_rms = sqrt(_bus_634_vbc_rms_rt1_output__out / _bus_634_vbc_rms_rt2_output__out);
    }
    else {
        _bus_634_vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_634.vCA_RMS.rms_calc_slow
    if(_bus_634_vca_rms_rt2_output__out > 0.0f) {
        _bus_634_vca_rms_rms_calc_slow__var_rms = sqrt(_bus_634_vca_rms_rt1_output__out / _bus_634_vca_rms_rt2_output__out);
    }
    else {
        _bus_634_vca_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_645.vBC_RMS.rms_calc_slow
    if(_bus_645_vbc_rms_rt2_output__out > 0.0f) {
        _bus_645_vbc_rms_rms_calc_slow__var_rms = sqrt(_bus_645_vbc_rms_rt1_output__out / _bus_645_vbc_rms_rt2_output__out);
    }
    else {
        _bus_645_vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_646.vBC_RMS.rms_calc_slow
    if(_bus_646_vbc_rms_rt2_output__out > 0.0f) {
        _bus_646_vbc_rms_rms_calc_slow__var_rms = sqrt(_bus_646_vbc_rms_rt1_output__out / _bus_646_vbc_rms_rt2_output__out);
    }
    else {
        _bus_646_vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_675.vAB_RMS.rms_calc_slow
    if(_bus_675_vab_rms_rt2_output__out > 0.0f) {
        _bus_675_vab_rms_rms_calc_slow__var_rms = sqrt(_bus_675_vab_rms_rt1_output__out / _bus_675_vab_rms_rt2_output__out);
    }
    else {
        _bus_675_vab_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_675.vBC_RMS.rms_calc_slow
    if(_bus_675_vbc_rms_rt2_output__out > 0.0f) {
        _bus_675_vbc_rms_rms_calc_slow__var_rms = sqrt(_bus_675_vbc_rms_rt1_output__out / _bus_675_vbc_rms_rt2_output__out);
    }
    else {
        _bus_675_vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_675.vCA_RMS.rms_calc_slow
    if(_bus_675_vca_rms_rt2_output__out > 0.0f) {
        _bus_675_vca_rms_rms_calc_slow__var_rms = sqrt(_bus_675_vca_rms_rt1_output__out / _bus_675_vca_rms_rt2_output__out);
    }
    else {
        _bus_675_vca_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_692.vAB_RMS.rms_calc_slow
    if(_bus_692_vab_rms_rt2_output__out > 0.0f) {
        _bus_692_vab_rms_rms_calc_slow__var_rms = sqrt(_bus_692_vab_rms_rt1_output__out / _bus_692_vab_rms_rt2_output__out);
    }
    else {
        _bus_692_vab_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_692.vBC_RMS.rms_calc_slow
    if(_bus_692_vbc_rms_rt2_output__out > 0.0f) {
        _bus_692_vbc_rms_rms_calc_slow__var_rms = sqrt(_bus_692_vbc_rms_rt1_output__out / _bus_692_vbc_rms_rt2_output__out);
    }
    else {
        _bus_692_vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_692.vCA_RMS.rms_calc_slow
    if(_bus_692_vca_rms_rt2_output__out > 0.0f) {
        _bus_692_vca_rms_rms_calc_slow__var_rms = sqrt(_bus_692_vca_rms_rt1_output__out / _bus_692_vca_rms_rt2_output__out);
    }
    else {
        _bus_692_vca_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Load 611.Meter.VCn_RMS.rms_calc_slow
    if(_load_611_meter_vcn_rms_rt2_output__out > 0.0f) {
        _load_611_meter_vcn_rms_rms_calc_slow__var_rms = sqrt(_load_611_meter_vcn_rms_rt1_output__out / _load_611_meter_vcn_rms_rt2_output__out);
    }
    else {
        _load_611_meter_vcn_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Load 645.Meter.VBn_RMS.rms_calc_slow
    if(_load_645_meter_vbn_rms_rt2_output__out > 0.0f) {
        _load_645_meter_vbn_rms_rms_calc_slow__var_rms = sqrt(_load_645_meter_vbn_rms_rt1_output__out / _load_645_meter_vbn_rms_rt2_output__out);
    }
    else {
        _load_645_meter_vbn_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Load 646.Meter.VBn_RMS.rms_calc_slow
    if(_load_646_meter_vbn_rms_rt2_output__out > 0.0f) {
        _load_646_meter_vbn_rms_rms_calc_slow__var_rms = sqrt(_load_646_meter_vbn_rms_rt1_output__out / _load_646_meter_vbn_rms_rt2_output__out);
    }
    else {
        _load_646_meter_vbn_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Load 646.Meter.VCn_RMS.rms_calc_slow
    if(_load_646_meter_vcn_rms_rt2_output__out > 0.0f) {
        _load_646_meter_vcn_rms_rms_calc_slow__var_rms = sqrt(_load_646_meter_vcn_rms_rt1_output__out / _load_646_meter_vcn_rms_rt2_output__out);
    }
    else {
        _load_646_meter_vcn_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Load 652.Meter.VAn_RMS.rms_calc_slow
    if(_load_652_meter_van_rms_rt2_output__out > 0.0f) {
        _load_652_meter_van_rms_rms_calc_slow__var_rms = sqrt(_load_652_meter_van_rms_rt1_output__out / _load_652_meter_van_rms_rt2_output__out);
    }
    else {
        _load_652_meter_van_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Load 692.Meter.VAn_RMS.rms_calc_slow
    if(_load_692_meter_van_rms_rt2_output__out > 0.0f) {
        _load_692_meter_van_rms_rms_calc_slow__var_rms = sqrt(_load_692_meter_van_rms_rt1_output__out / _load_692_meter_van_rms_rt2_output__out);
    }
    else {
        _load_692_meter_van_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Load 692.Meter.VCn_RMS.rms_calc_slow
    if(_load_692_meter_vcn_rms_rt2_output__out > 0.0f) {
        _load_692_meter_vcn_rms_rms_calc_slow__var_rms = sqrt(_load_692_meter_vcn_rms_rt1_output__out / _load_692_meter_vcn_rms_rt2_output__out);
    }
    else {
        _load_692_meter_vcn_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.rms_calc_slow
    if(_rega_vreg_auto1_ilrms_a_rt2_output__out > 0.0f) {
        _rega_vreg_auto1_ilrms_a_rms_calc_slow__var_rms = sqrt(_rega_vreg_auto1_ilrms_a_rt1_output__out / _rega_vreg_auto1_ilrms_a_rt2_output__out);
    }
    else {
        _rega_vreg_auto1_ilrms_a_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.rms_calc_slow
    if(_rega_vreg_auto1_vload_a_rt2_output__out > 0.0f) {
        _rega_vreg_auto1_vload_a_rms_calc_slow__var_rms = sqrt(_rega_vreg_auto1_vload_a_rt1_output__out / _rega_vreg_auto1_vload_a_rt2_output__out);
    }
    else {
        _rega_vreg_auto1_vload_a_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.rms_calc_slow
    if(_regb_vreg_auto1_ilrms_a_rt2_output__out > 0.0f) {
        _regb_vreg_auto1_ilrms_a_rms_calc_slow__var_rms = sqrt(_regb_vreg_auto1_ilrms_a_rt1_output__out / _regb_vreg_auto1_ilrms_a_rt2_output__out);
    }
    else {
        _regb_vreg_auto1_ilrms_a_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.rms_calc_slow
    if(_regb_vreg_auto1_vload_a_rt2_output__out > 0.0f) {
        _regb_vreg_auto1_vload_a_rms_calc_slow__var_rms = sqrt(_regb_vreg_auto1_vload_a_rt1_output__out / _regb_vreg_auto1_vload_a_rt2_output__out);
    }
    else {
        _regb_vreg_auto1_vload_a_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.rms_calc_slow
    if(_regc_vreg_auto1_ilrms_a_rt2_output__out > 0.0f) {
        _regc_vreg_auto1_ilrms_a_rms_calc_slow__var_rms = sqrt(_regc_vreg_auto1_ilrms_a_rt1_output__out / _regc_vreg_auto1_ilrms_a_rt2_output__out);
    }
    else {
        _regc_vreg_auto1_ilrms_a_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.rms_calc_slow
    if(_regc_vreg_auto1_vload_a_rt2_output__out > 0.0f) {
        _regc_vreg_auto1_vload_a_rms_calc_slow__var_rms = sqrt(_regc_vreg_auto1_vload_a_rt1_output__out / _regc_vreg_auto1_vload_a_rt2_output__out);
    }
    else {
        _regc_vreg_auto1_vload_a_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Bus_634.vAB_RMS.rms
    HIL_OutAO(0x4000, (float)_bus_634_vab_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_634.vBC_RMS.rms
    HIL_OutAO(0x4001, (float)_bus_634_vbc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_634.vCA_RMS.rms
    HIL_OutAO(0x4002, (float)_bus_634_vca_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_645.vBC_RMS.rms
    HIL_OutAO(0x4003, (float)_bus_645_vbc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_646.vBC_RMS.rms
    HIL_OutAO(0x4004, (float)_bus_646_vbc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_675.vAB_RMS.rms
    HIL_OutAO(0x4005, (float)_bus_675_vab_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_675.vBC_RMS.rms
    HIL_OutAO(0x4006, (float)_bus_675_vbc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_675.vCA_RMS.rms
    HIL_OutAO(0x4007, (float)_bus_675_vca_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_692.vAB_RMS.rms
    HIL_OutAO(0x4008, (float)_bus_692_vab_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_692.vBC_RMS.rms
    HIL_OutAO(0x4009, (float)_bus_692_vbc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Bus_692.vCA_RMS.rms
    HIL_OutAO(0x400a, (float)_bus_692_vca_rms_rms_calc_slow__var_rms);
    // Generated from the component: Load 611.Meter.VCn_RMS.rms
    HIL_OutAO(0x400b, (float)_load_611_meter_vcn_rms_rms_calc_slow__var_rms);
    // Generated from the component: Load 645.Meter.VBn_RMS.rms
    HIL_OutAO(0x400c, (float)_load_645_meter_vbn_rms_rms_calc_slow__var_rms);
    // Generated from the component: Load 646.Meter.VBn_RMS.rms
    HIL_OutAO(0x400d, (float)_load_646_meter_vbn_rms_rms_calc_slow__var_rms);
    // Generated from the component: Load 646.Meter.VCn_RMS.rms
    HIL_OutAO(0x400e, (float)_load_646_meter_vcn_rms_rms_calc_slow__var_rms);
    // Generated from the component: Load 652.Meter.VAn_RMS.rms
    HIL_OutAO(0x400f, (float)_load_652_meter_van_rms_rms_calc_slow__var_rms);
    // Generated from the component: Load 692.Meter.VAn_RMS.rms
    HIL_OutAO(0x4010, (float)_load_692_meter_van_rms_rms_calc_slow__var_rms);
    // Generated from the component: Load 692.Meter.VCn_RMS.rms
    HIL_OutAO(0x4011, (float)_load_692_meter_vcn_rms_rms_calc_slow__var_rms);
    // Generated from the component: Rega.Vreg.Auto1.ILrms_A.rms
    HIL_OutAO(0x4012, (float)_rega_vreg_auto1_ilrms_a_rms_calc_slow__var_rms);
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.cpu_trans.Input
    XIo_OutFloat(0xfffc0000, _rega_vreg_auto1_vload_a_rms_calc_slow__var_rms);
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.rms
    HIL_OutAO(0x4013, (float)_rega_vreg_auto1_vload_a_rms_calc_slow__var_rms);
    // Generated from the component: Regb.Vreg.Auto1.ILrms_A.rms
    HIL_OutAO(0x4014, (float)_regb_vreg_auto1_ilrms_a_rms_calc_slow__var_rms);
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.cpu_trans.Input
    XIo_OutFloat(0xfffc0004, _regb_vreg_auto1_vload_a_rms_calc_slow__var_rms);
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.rms
    HIL_OutAO(0x4015, (float)_regb_vreg_auto1_vload_a_rms_calc_slow__var_rms);
    // Generated from the component: Regc.Vreg.Auto1.ILrms_A.rms
    HIL_OutAO(0x4016, (float)_regc_vreg_auto1_ilrms_a_rms_calc_slow__var_rms);
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.cpu_trans.Input
    XIo_OutFloat(0xfffc0008, _regc_vreg_auto1_vload_a_rms_calc_slow__var_rms);
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.rms
    HIL_OutAO(0x4017, (float)_regc_vreg_auto1_vload_a_rms_calc_slow__var_rms);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------