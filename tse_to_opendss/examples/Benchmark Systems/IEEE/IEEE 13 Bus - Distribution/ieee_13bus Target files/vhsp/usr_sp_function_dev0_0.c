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
double _dist_load_632_meter_pll_pid_integrator1__out;
double _dist_load_632_meter_pll_pid_integrator2__out;
double _dist_load_632_meter_pll_unit_delay1__out;
double _dist_load_632_meter_pll_to_hz__out;
double _dist_load_632_meter_van_va1__out;
double _dist_load_632_meter_vbn_va1__out;
double _dist_load_632_meter_vcn_va1__out;
double _dist_load_632_meter_zero__out = 0.0;
double _dist_load_671_meter_pll_pid_integrator1__out;
double _dist_load_671_meter_pll_pid_integrator2__out;
double _dist_load_671_meter_pll_unit_delay1__out;
double _dist_load_671_meter_pll_to_hz__out;
double _dist_load_671_meter_van_va1__out;
double _dist_load_671_meter_vbn_va1__out;
double _dist_load_671_meter_vcn_va1__out;
double _dist_load_671_meter_zero__out = 0.0;
double _load_634_meter_pll_pid_integrator1__out;
double _load_634_meter_pll_pid_integrator2__out;
double _load_634_meter_pll_unit_delay1__out;
double _load_634_meter_pll_to_hz__out;
double _load_634_meter_van_va1__out;
double _load_634_meter_vbn_va1__out;
double _load_634_meter_vcn_va1__out;
double _load_634_meter_zero__out = 0.0;
double _load_671_meter_pll_pid_integrator1__out;
double _load_671_meter_pll_pid_integrator2__out;
double _load_671_meter_pll_unit_delay1__out;
double _load_671_meter_pll_to_hz__out;
double _load_671_meter_van_va1__out;
double _load_671_meter_vbn_va1__out;
double _load_671_meter_vcn_va1__out;
double _load_671_meter_zero__out = 0.0;
double _load_675_meter_pll_pid_integrator1__out;
double _load_675_meter_pll_pid_integrator2__out;
double _load_675_meter_pll_unit_delay1__out;
double _load_675_meter_pll_to_hz__out;
double _load_675_meter_van_va1__out;
double _load_675_meter_vbn_va1__out;
double _load_675_meter_vcn_va1__out;
double _load_675_meter_zero__out = 0.0;
double _rega_vreg_auto1_edge_detection3_unit_delay1__out;
double _rega_vreg_auto1_elapsed_time_clock1__out;
double _rega_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out;
double _rega_vreg_auto1_elapsed_time_unit_delay1__out;
double _rega_vreg_auto1_isec_a__out;
double _rega_vreg_auto1_tap_position__out;
double _rega_vreg_auto1_vload_a_cpu_trans_output__out;
double _rega_vreg_auto1_vprim_a__out;
double _rega_vreg_auto1_regulator_voltage__out = 127.5;
double _rega_vreg_auto1_regulator_voltage1__out = 2.0;
double _rega_vreg_auto1_regulator_voltage2__out = 15.0;
double _rega_vreg_auto1_regulator_voltage3__out = 1.0;
double _rega_vreg_auto1_regulator_voltage4__out = 0.0;
double _rega_vreg_auto1_var_per_tap__out = 0.006250000000000002;
double _regb_vreg_auto1_edge_detection3_unit_delay1__out;
double _regb_vreg_auto1_elapsed_time_clock1__out;
double _regb_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out;
double _regb_vreg_auto1_elapsed_time_unit_delay1__out;
double _regb_vreg_auto1_isec_a__out;
double _regb_vreg_auto1_tap_position__out;
double _regb_vreg_auto1_vload_a_cpu_trans_output__out;
double _regb_vreg_auto1_vprim_a__out;
double _regb_vreg_auto1_regulator_voltage__out = 127.5;
double _regb_vreg_auto1_regulator_voltage1__out = 2.0;
double _regb_vreg_auto1_regulator_voltage2__out = 15.0;
double _regb_vreg_auto1_regulator_voltage3__out = 1.0;
double _regb_vreg_auto1_regulator_voltage4__out = 0.0;
double _regb_vreg_auto1_var_per_tap__out = 0.006250000000000002;
double _regc_vreg_auto1_edge_detection3_unit_delay1__out;
double _regc_vreg_auto1_elapsed_time_clock1__out;
double _regc_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out;
double _regc_vreg_auto1_elapsed_time_unit_delay1__out;
double _regc_vreg_auto1_isec_a__out;
double _regc_vreg_auto1_tap_position__out;
double _regc_vreg_auto1_vload_a_cpu_trans_output__out;
double _regc_vreg_auto1_vprim_a__out;
double _regc_vreg_auto1_regulator_voltage__out = 127.5;
double _regc_vreg_auto1_regulator_voltage1__out = 2.0;
double _regc_vreg_auto1_regulator_voltage2__out = 15.0;
double _regc_vreg_auto1_regulator_voltage3__out = 1.0;
double _regc_vreg_auto1_regulator_voltage4__out = 0.0;
double _regc_vreg_auto1_var_per_tap__out = 0.006250000000000002;
double _source_meter_ia_ia1__out;
double _source_meter_ib_ia1__out;
double _source_meter_ic_ia1__out;
double _source_meter_pll_pid_integrator1__out;
double _source_meter_pll_pid_integrator2__out;
double _source_meter_pll_unit_delay1__out;
double _source_meter_pll_to_hz__out;
double _source_meter_van_va1__out;
double _source_meter_vbn_va1__out;
double _source_meter_vcn_va1__out;
double _source_meter_zero__out = 0.0;
double _dist_load_632_meter_pll_sin__out;

double _dist_load_632_meter_meassm_mode_and_dfract__Freq;


double _dist_load_632_meter_meassm_mode_and_dfract__dFract;
X_Int32 _dist_load_632_meter_meassm_mode_and_dfract__mode;
X_Int32 _dist_load_632_meter_meassm_mode_and_dfract__submode;
double _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _dist_load_632_meter_extra_output_bus__out[12];
double _dist_load_671_meter_pll_sin__out;

double _dist_load_671_meter_meassm_mode_and_dfract__Freq;


double _dist_load_671_meter_meassm_mode_and_dfract__dFract;
X_Int32 _dist_load_671_meter_meassm_mode_and_dfract__mode;
X_Int32 _dist_load_671_meter_meassm_mode_and_dfract__submode;
double _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _dist_load_671_meter_extra_output_bus__out[12];
double _load_634_meter_pll_sin__out;

double _load_634_meter_meassm_mode_and_dfract__Freq;


double _load_634_meter_meassm_mode_and_dfract__dFract;
X_Int32 _load_634_meter_meassm_mode_and_dfract__mode;
X_Int32 _load_634_meter_meassm_mode_and_dfract__submode;
double _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _load_634_meter_extra_output_bus__out[12];
double _load_671_meter_pll_sin__out;

double _load_671_meter_meassm_mode_and_dfract__Freq;


double _load_671_meter_meassm_mode_and_dfract__dFract;
X_Int32 _load_671_meter_meassm_mode_and_dfract__mode;
X_Int32 _load_671_meter_meassm_mode_and_dfract__submode;
double _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _load_671_meter_extra_output_bus__out[12];
double _load_675_meter_pll_sin__out;

double _load_675_meter_meassm_mode_and_dfract__Freq;


double _load_675_meter_meassm_mode_and_dfract__dFract;
X_Int32 _load_675_meter_meassm_mode_and_dfract__mode;
X_Int32 _load_675_meter_meassm_mode_and_dfract__submode;
double _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _load_675_meter_extra_output_bus__out[12];
double _rega_vreg_auto1_edge_detection3_relational_operator1__out;
double _rega_vreg_auto1_gain4__out;
double _rega_vreg_auto1_gain1__out;
double _rega_vreg_auto1_vsum2__out;
double _rega_vreg_auto1_product1__out;
double _regb_vreg_auto1_edge_detection3_relational_operator1__out;
double _regb_vreg_auto1_gain4__out;
double _regb_vreg_auto1_gain1__out;
double _regb_vreg_auto1_vsum2__out;
double _regb_vreg_auto1_product1__out;
double _regc_vreg_auto1_edge_detection3_relational_operator1__out;
double _regc_vreg_auto1_gain4__out;
double _regc_vreg_auto1_gain1__out;
double _regc_vreg_auto1_vsum2__out;
double _regc_vreg_auto1_product1__out;
double _source_meter_pll_sin__out;

double _source_meter_meassm_mode_and_dfract__Freq;


double _source_meter_meassm_mode_and_dfract__dFract;
X_Int32 _source_meter_meassm_mode_and_dfract__mode;
X_Int32 _source_meter_meassm_mode_and_dfract__submode;
double _source_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _source_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _source_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma;

double _dist_load_632_meter_vln_rms_calc_rms__IN1;
double _dist_load_632_meter_vln_rms_calc_rms__IN2;
double _dist_load_632_meter_vln_rms_calc_rms__IN3;
double _dist_load_632_meter_vln_rms_calc_rms__dFract;
X_Int32 _dist_load_632_meter_vln_rms_calc_rms__mode;


double _dist_load_632_meter_vln_rms_calc_rms__RMS1;
double _dist_load_632_meter_vln_rms_calc_rms__RMS2;
double _dist_load_632_meter_vln_rms_calc_rms__RMS3;
double _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
double _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
double _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k2;

double _dist_load_671_meter_vln_rms_calc_rms__IN1;
double _dist_load_671_meter_vln_rms_calc_rms__IN2;
double _dist_load_671_meter_vln_rms_calc_rms__IN3;
double _dist_load_671_meter_vln_rms_calc_rms__dFract;
X_Int32 _dist_load_671_meter_vln_rms_calc_rms__mode;


double _dist_load_671_meter_vln_rms_calc_rms__RMS1;
double _dist_load_671_meter_vln_rms_calc_rms__RMS2;
double _dist_load_671_meter_vln_rms_calc_rms__RMS3;
double _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
double _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
double _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2;

double _load_634_meter_vln_rms_calc_rms__IN1;
double _load_634_meter_vln_rms_calc_rms__IN2;
double _load_634_meter_vln_rms_calc_rms__IN3;
double _load_634_meter_vln_rms_calc_rms__dFract;
X_Int32 _load_634_meter_vln_rms_calc_rms__mode;


double _load_634_meter_vln_rms_calc_rms__RMS1;
double _load_634_meter_vln_rms_calc_rms__RMS2;
double _load_634_meter_vln_rms_calc_rms__RMS3;
double _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
double _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
double _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k2;

double _load_671_meter_vln_rms_calc_rms__IN1;
double _load_671_meter_vln_rms_calc_rms__IN2;
double _load_671_meter_vln_rms_calc_rms__IN3;
double _load_671_meter_vln_rms_calc_rms__dFract;
X_Int32 _load_671_meter_vln_rms_calc_rms__mode;


double _load_671_meter_vln_rms_calc_rms__RMS1;
double _load_671_meter_vln_rms_calc_rms__RMS2;
double _load_671_meter_vln_rms_calc_rms__RMS3;
double _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
double _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
double _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2;

double _load_675_meter_vln_rms_calc_rms__IN1;
double _load_675_meter_vln_rms_calc_rms__IN2;
double _load_675_meter_vln_rms_calc_rms__IN3;
double _load_675_meter_vln_rms_calc_rms__dFract;
X_Int32 _load_675_meter_vln_rms_calc_rms__mode;


double _load_675_meter_vln_rms_calc_rms__RMS1;
double _load_675_meter_vln_rms_calc_rms__RMS2;
double _load_675_meter_vln_rms_calc_rms__RMS3;
double _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
double _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
double _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _rega_vreg_auto1_logical_operator3__out;
double _rega_vreg_auto1_vsum__out;
double _rega_vreg_auto1_product10__out;
double _rega_vreg_auto1_product11__out;
double _rega_vreg_auto1_vsum1__out;
double _regb_vreg_auto1_logical_operator3__out;
double _regb_vreg_auto1_vsum__out;
double _regb_vreg_auto1_product10__out;
double _regb_vreg_auto1_product11__out;
double _regb_vreg_auto1_vsum1__out;
double _regc_vreg_auto1_logical_operator3__out;
double _regc_vreg_auto1_vsum__out;
double _regc_vreg_auto1_product10__out;
double _regc_vreg_auto1_product11__out;
double _regc_vreg_auto1_vsum1__out;

double _source_meter_i_rms_calc_rms__IN1;
double _source_meter_i_rms_calc_rms__IN2;
double _source_meter_i_rms_calc_rms__IN3;
double _source_meter_i_rms_calc_rms__dFract;
X_Int32 _source_meter_i_rms_calc_rms__mode;


double _source_meter_i_rms_calc_rms__RMS1;
double _source_meter_i_rms_calc_rms__RMS2;
double _source_meter_i_rms_calc_rms__RMS3;

double _source_meter_vln_rms_calc_rms__IN1;
double _source_meter_vln_rms_calc_rms__IN2;
double _source_meter_vln_rms_calc_rms__IN3;
double _source_meter_vln_rms_calc_rms__dFract;
X_Int32 _source_meter_vln_rms_calc_rms__mode;


double _source_meter_vln_rms_calc_rms__RMS1;
double _source_meter_vln_rms_calc_rms__RMS2;
double _source_meter_vln_rms_calc_rms__RMS3;
double _source_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
double _source_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
double _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _dist_load_632_meter_output_bus__out[30];
double _dist_load_632_meter_pll_abc_to_dq_lpf_d__out;
double _dist_load_632_meter_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _dist_load_632_meter_pll_abc_to_dq_lpf_q__out;
double _dist_load_632_meter_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _dist_load_671_meter_output_bus__out[30];
double _dist_load_671_meter_pll_abc_to_dq_lpf_d__out;
double _dist_load_671_meter_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _dist_load_671_meter_pll_abc_to_dq_lpf_q__out;
double _dist_load_671_meter_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _load_634_meter_output_bus__out[30];
double _load_634_meter_pll_abc_to_dq_lpf_d__out;
double _load_634_meter_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _load_634_meter_pll_abc_to_dq_lpf_q__out;
double _load_634_meter_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _load_671_meter_output_bus__out[30];
double _load_671_meter_pll_abc_to_dq_lpf_d__out;
double _load_671_meter_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _load_671_meter_pll_abc_to_dq_lpf_q__out;
double _load_671_meter_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _load_675_meter_output_bus__out[30];
double _load_675_meter_pll_abc_to_dq_lpf_d__out;
double _load_675_meter_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _load_675_meter_pll_abc_to_dq_lpf_q__out;
double _load_675_meter_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _rega_vreg_auto1_abs1__out;
double _rega_vreg_auto1_sign1__out;
double _regb_vreg_auto1_abs1__out;
double _regb_vreg_auto1_sign1__out;
double _regc_vreg_auto1_abs1__out;
double _regc_vreg_auto1_sign1__out;

double _source_meter_power_meter_power__Ia;
double _source_meter_power_meter_power__Ib;
double _source_meter_power_meter_power__Ic;
double _source_meter_power_meter_power__IrmsA;
double _source_meter_power_meter_power__IrmsB;
double _source_meter_power_meter_power__IrmsC;
double _source_meter_power_meter_power__Va;
double _source_meter_power_meter_power__Vb;
double _source_meter_power_meter_power__Vc;
double _source_meter_power_meter_power__VrmsA;
double _source_meter_power_meter_power__VrmsB;
double _source_meter_power_meter_power__VrmsC;
double _source_meter_power_meter_power__dFract;
X_Int32 _source_meter_power_meter_power__mode;
X_Int32 _source_meter_power_meter_power__submode;


double _source_meter_power_meter_power__P;
double _source_meter_power_meter_power__PF;
double _source_meter_power_meter_power__PFa;
double _source_meter_power_meter_power__PFb;
double _source_meter_power_meter_power__PFc;
double _source_meter_power_meter_power__Pa;
double _source_meter_power_meter_power__Pb;
double _source_meter_power_meter_power__Pc;
double _source_meter_power_meter_power__Q;
double _source_meter_power_meter_power__Qa;
double _source_meter_power_meter_power__Qb;
double _source_meter_power_meter_power__Qc;
double _source_meter_power_meter_power__S;
double _source_meter_power_meter_power__Sa;
double _source_meter_power_meter_power__Sb;
double _source_meter_power_meter_power__Sc;
double _source_meter_pll_abc_to_dq_lpf_d__out;
double _source_meter_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _source_meter_pll_abc_to_dq_lpf_q__out;
double _source_meter_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _dist_load_632_meter_pll_normalize__in1;
double _dist_load_632_meter_pll_normalize__in2;


double _dist_load_632_meter_pll_normalize__in2_pu;
double _dist_load_632_meter_pll_normalize__pk;

double _dist_load_671_meter_pll_normalize__in1;
double _dist_load_671_meter_pll_normalize__in2;


double _dist_load_671_meter_pll_normalize__in2_pu;
double _dist_load_671_meter_pll_normalize__pk;

double _load_634_meter_pll_normalize__in1;
double _load_634_meter_pll_normalize__in2;


double _load_634_meter_pll_normalize__in2_pu;
double _load_634_meter_pll_normalize__pk;

double _load_671_meter_pll_normalize__in1;
double _load_671_meter_pll_normalize__in2;


double _load_671_meter_pll_normalize__in2_pu;
double _load_671_meter_pll_normalize__pk;

double _load_675_meter_pll_normalize__in1;
double _load_675_meter_pll_normalize__in2;


double _load_675_meter_pll_normalize__in2_pu;
double _load_675_meter_pll_normalize__pk;
double _rega_vreg_auto1_relational_operator1__out;
double _rega_vreg_auto1_abcomp__out;
double _regb_vreg_auto1_relational_operator1__out;
double _regb_vreg_auto1_abcomp__out;
double _regc_vreg_auto1_relational_operator1__out;
double _regc_vreg_auto1_abcomp__out;
double _source_meter_extra_output_bus__out[12];
double _source_meter_output_bus__out[30];

double _source_meter_pll_normalize__in1;
double _source_meter_pll_normalize__in2;


double _source_meter_pll_normalize__in2_pu;
double _source_meter_pll_normalize__pk;
double _dist_load_632_meter_pll_pid_kd__out;
double _dist_load_632_meter_pll_pid_ki__out;
double _dist_load_632_meter_pll_pid_kp__out;
double _dist_load_671_meter_pll_pid_kd__out;
double _dist_load_671_meter_pll_pid_ki__out;
double _dist_load_671_meter_pll_pid_kp__out;
double _load_634_meter_pll_pid_kd__out;
double _load_634_meter_pll_pid_ki__out;
double _load_634_meter_pll_pid_kp__out;
double _load_671_meter_pll_pid_kd__out;
double _load_671_meter_pll_pid_ki__out;
double _load_671_meter_pll_pid_kp__out;
double _load_675_meter_pll_pid_kd__out;
double _load_675_meter_pll_pid_ki__out;
double _load_675_meter_pll_pid_kp__out;
double _rega_vreg_auto1_logical_operator2__out;
double _regb_vreg_auto1_logical_operator2__out;
double _regc_vreg_auto1_logical_operator2__out;
double _source_meter_pll_pid_kd__out;
double _source_meter_pll_pid_ki__out;
double _source_meter_pll_pid_kp__out;
double _dist_load_632_meter_pll_pid_sum8__out;
double _dist_load_671_meter_pll_pid_sum8__out;
double _load_634_meter_pll_pid_sum8__out;
double _load_671_meter_pll_pid_sum8__out;
double _load_675_meter_pll_pid_sum8__out;
double _rega_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out;
double _regb_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out;
double _regc_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out;
double _source_meter_pll_pid_sum8__out;
double _dist_load_632_meter_pll_pid_gain1__out;
double _dist_load_671_meter_pll_pid_gain1__out;
double _load_634_meter_pll_pid_gain1__out;
double _load_671_meter_pll_pid_gain1__out;
double _load_675_meter_pll_pid_gain1__out;
double _rega_vreg_auto1_elapsed_time_signal_switch1__out;
double _regb_vreg_auto1_elapsed_time_signal_switch1__out;
double _regc_vreg_auto1_elapsed_time_signal_switch1__out;
double _source_meter_pll_pid_gain1__out;
double _dist_load_632_meter_pll_pid_sum5__out;
double _dist_load_671_meter_pll_pid_sum5__out;
double _load_634_meter_pll_pid_sum5__out;
double _load_671_meter_pll_pid_sum5__out;
double _load_675_meter_pll_pid_sum5__out;
double _rega_vreg_auto1_elapsed_time_sum2__out;
double _regb_vreg_auto1_elapsed_time_sum2__out;
double _regc_vreg_auto1_elapsed_time_sum2__out;
double _source_meter_pll_pid_sum5__out;
double _dist_load_632_meter_pll_pid_limit1__out;
double _dist_load_671_meter_pll_pid_limit1__out;
double _load_634_meter_pll_pid_limit1__out;
double _load_671_meter_pll_pid_limit1__out;
double _load_675_meter_pll_pid_limit1__out;
double _rega_vreg_auto1_relational_operator2__out;
double _regb_vreg_auto1_relational_operator2__out;
double _regc_vreg_auto1_relational_operator2__out;
double _source_meter_pll_pid_limit1__out;
double _dist_load_632_meter_pll_pid_sum6__out;
double _dist_load_632_meter_pll_rate_limiter1__out;

double _dist_load_632_meter_pll_integrator__in;


double _dist_load_632_meter_pll_integrator__out;
double _dist_load_671_meter_pll_pid_sum6__out;
double _dist_load_671_meter_pll_rate_limiter1__out;

double _dist_load_671_meter_pll_integrator__in;


double _dist_load_671_meter_pll_integrator__out;
double _load_634_meter_pll_pid_sum6__out;
double _load_634_meter_pll_rate_limiter1__out;

double _load_634_meter_pll_integrator__in;


double _load_634_meter_pll_integrator__out;
double _load_671_meter_pll_pid_sum6__out;
double _load_671_meter_pll_rate_limiter1__out;

double _load_671_meter_pll_integrator__in;


double _load_671_meter_pll_integrator__out;
double _load_675_meter_pll_pid_sum6__out;
double _load_675_meter_pll_rate_limiter1__out;

double _load_675_meter_pll_integrator__in;


double _load_675_meter_pll_integrator__out;
double _rega_vreg_auto1_logical_operator1__out;
double _regb_vreg_auto1_logical_operator1__out;
double _regc_vreg_auto1_logical_operator1__out;
double _source_meter_pll_pid_sum6__out;
double _source_meter_pll_rate_limiter1__out;

double _source_meter_pll_integrator__in;


double _source_meter_pll_integrator__out;
double _dist_load_632_meter_pll_pid_kb__out;
double _dist_load_632_meter_pll_lpf_lpf__out;
double _dist_load_632_meter_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _dist_load_632_meter_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _dist_load_632_meter_pll_lpf_lpf__a_sum;
double _dist_load_632_meter_pll_lpf_lpf__b_sum;
double _dist_load_632_meter_pll_lpf_lpf__delay_line_in;
double _dist_load_671_meter_pll_pid_kb__out;
double _dist_load_671_meter_pll_lpf_lpf__out;
double _dist_load_671_meter_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _dist_load_671_meter_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _dist_load_671_meter_pll_lpf_lpf__a_sum;
double _dist_load_671_meter_pll_lpf_lpf__b_sum;
double _dist_load_671_meter_pll_lpf_lpf__delay_line_in;
double _load_634_meter_pll_pid_kb__out;
double _load_634_meter_pll_lpf_lpf__out;
double _load_634_meter_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _load_634_meter_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _load_634_meter_pll_lpf_lpf__a_sum;
double _load_634_meter_pll_lpf_lpf__b_sum;
double _load_634_meter_pll_lpf_lpf__delay_line_in;
double _load_671_meter_pll_pid_kb__out;
double _load_671_meter_pll_lpf_lpf__out;
double _load_671_meter_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _load_671_meter_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _load_671_meter_pll_lpf_lpf__a_sum;
double _load_671_meter_pll_lpf_lpf__b_sum;
double _load_671_meter_pll_lpf_lpf__delay_line_in;
double _load_675_meter_pll_pid_kb__out;
double _load_675_meter_pll_lpf_lpf__out;
double _load_675_meter_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _load_675_meter_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _load_675_meter_pll_lpf_lpf__a_sum;
double _load_675_meter_pll_lpf_lpf__b_sum;
double _load_675_meter_pll_lpf_lpf__delay_line_in;
double _rega_vreg_auto1_product2__out;
double _regb_vreg_auto1_product2__out;
double _regc_vreg_auto1_product2__out;
double _source_meter_pll_pid_kb__out;
double _source_meter_pll_lpf_lpf__out;
double _source_meter_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _source_meter_pll_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _source_meter_pll_lpf_lpf__a_sum;
double _source_meter_pll_lpf_lpf__b_sum;
double _source_meter_pll_lpf_lpf__delay_line_in;
double _dist_load_632_meter_pll_pid_sum7__out;
double _dist_load_671_meter_pll_pid_sum7__out;
double _load_634_meter_pll_pid_sum7__out;
double _load_671_meter_pll_pid_sum7__out;
double _load_675_meter_pll_pid_sum7__out;
double _source_meter_pll_pid_sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _dist_load_632_meter_pll_pid_integrator1__state;
double _dist_load_632_meter_pll_pid_integrator2__state;
double _dist_load_632_meter_pll_unit_delay1__state;
double _dist_load_671_meter_pll_pid_integrator1__state;
double _dist_load_671_meter_pll_pid_integrator2__state;
double _dist_load_671_meter_pll_unit_delay1__state;
double _load_634_meter_pll_pid_integrator1__state;
double _load_634_meter_pll_pid_integrator2__state;
double _load_634_meter_pll_unit_delay1__state;
double _load_671_meter_pll_pid_integrator1__state;
double _load_671_meter_pll_pid_integrator2__state;
double _load_671_meter_pll_unit_delay1__state;
double _load_675_meter_pll_pid_integrator1__state;
double _load_675_meter_pll_pid_integrator2__state;
double _load_675_meter_pll_unit_delay1__state;
double _rega_vreg_auto1_edge_detection3_unit_delay1__state;
double _rega_vreg_auto1_elapsed_time_clock1__state;
double _rega_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state;
double _rega_vreg_auto1_elapsed_time_unit_delay1__state;
double _rega_vreg_auto1_tap_position__state;
double _regb_vreg_auto1_edge_detection3_unit_delay1__state;
double _regb_vreg_auto1_elapsed_time_clock1__state;
double _regb_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state;
double _regb_vreg_auto1_elapsed_time_unit_delay1__state;
double _regb_vreg_auto1_tap_position__state;
double _regc_vreg_auto1_edge_detection3_unit_delay1__state;
double _regc_vreg_auto1_elapsed_time_clock1__state;
double _regc_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state;
double _regc_vreg_auto1_elapsed_time_unit_delay1__state;
double _regc_vreg_auto1_tap_position__state;
double _source_meter_pll_pid_integrator1__state;
double _source_meter_pll_pid_integrator2__state;
double _source_meter_pll_unit_delay1__state;
double _dist_load_632_meter_meassm_mode_and_dfract__Tfract;
double _dist_load_632_meter_meassm_mode_and_dfract__freqAbs;
double _dist_load_632_meter_meassm_mode_and_dfract__fMax;
X_Int32 _dist_load_632_meter_meassm_mode_and_dfract__reset;
X_Int32 _dist_load_632_meter_meassm_mode_and_dfract__cycle_counter;
double _dist_load_671_meter_meassm_mode_and_dfract__Tfract;
double _dist_load_671_meter_meassm_mode_and_dfract__freqAbs;
double _dist_load_671_meter_meassm_mode_and_dfract__fMax;
X_Int32 _dist_load_671_meter_meassm_mode_and_dfract__reset;
X_Int32 _dist_load_671_meter_meassm_mode_and_dfract__cycle_counter;
double _load_634_meter_meassm_mode_and_dfract__Tfract;
double _load_634_meter_meassm_mode_and_dfract__freqAbs;
double _load_634_meter_meassm_mode_and_dfract__fMax;
X_Int32 _load_634_meter_meassm_mode_and_dfract__reset;
X_Int32 _load_634_meter_meassm_mode_and_dfract__cycle_counter;
double _load_671_meter_meassm_mode_and_dfract__Tfract;
double _load_671_meter_meassm_mode_and_dfract__freqAbs;
double _load_671_meter_meassm_mode_and_dfract__fMax;
X_Int32 _load_671_meter_meassm_mode_and_dfract__reset;
X_Int32 _load_671_meter_meassm_mode_and_dfract__cycle_counter;
double _load_675_meter_meassm_mode_and_dfract__Tfract;
double _load_675_meter_meassm_mode_and_dfract__freqAbs;
double _load_675_meter_meassm_mode_and_dfract__fMax;
X_Int32 _load_675_meter_meassm_mode_and_dfract__reset;
X_Int32 _load_675_meter_meassm_mode_and_dfract__cycle_counter;
double _source_meter_meassm_mode_and_dfract__Tfract;
double _source_meter_meassm_mode_and_dfract__freqAbs;
double _source_meter_meassm_mode_and_dfract__fMax;
X_Int32 _source_meter_meassm_mode_and_dfract__reset;
X_Int32 _source_meter_meassm_mode_and_dfract__cycle_counter;
double _dist_load_632_meter_vln_rms_calc_rms__rmsSum1;
double _dist_load_632_meter_vln_rms_calc_rms__rmsSum2;
double _dist_load_632_meter_vln_rms_calc_rms__rmsSum3;
double _dist_load_671_meter_vln_rms_calc_rms__rmsSum1;
double _dist_load_671_meter_vln_rms_calc_rms__rmsSum2;
double _dist_load_671_meter_vln_rms_calc_rms__rmsSum3;
double _load_634_meter_vln_rms_calc_rms__rmsSum1;
double _load_634_meter_vln_rms_calc_rms__rmsSum2;
double _load_634_meter_vln_rms_calc_rms__rmsSum3;
double _load_671_meter_vln_rms_calc_rms__rmsSum1;
double _load_671_meter_vln_rms_calc_rms__rmsSum2;
double _load_671_meter_vln_rms_calc_rms__rmsSum3;
double _load_675_meter_vln_rms_calc_rms__rmsSum1;
double _load_675_meter_vln_rms_calc_rms__rmsSum2;
double _load_675_meter_vln_rms_calc_rms__rmsSum3;
double _source_meter_i_rms_calc_rms__rmsSum1;
double _source_meter_i_rms_calc_rms__rmsSum2;
double _source_meter_i_rms_calc_rms__rmsSum3;
double _source_meter_vln_rms_calc_rms__rmsSum1;
double _source_meter_vln_rms_calc_rms__rmsSum2;
double _source_meter_vln_rms_calc_rms__rmsSum3;
double _dist_load_632_meter_pll_abc_to_dq_lpf_d__filtered_value;
double _dist_load_632_meter_pll_abc_to_dq_lpf_d__previous_in;
double _dist_load_632_meter_pll_abc_to_dq_lpf_q__filtered_value;
double _dist_load_632_meter_pll_abc_to_dq_lpf_q__previous_in;
double _dist_load_671_meter_pll_abc_to_dq_lpf_d__filtered_value;
double _dist_load_671_meter_pll_abc_to_dq_lpf_d__previous_in;
double _dist_load_671_meter_pll_abc_to_dq_lpf_q__filtered_value;
double _dist_load_671_meter_pll_abc_to_dq_lpf_q__previous_in;
double _load_634_meter_pll_abc_to_dq_lpf_d__filtered_value;
double _load_634_meter_pll_abc_to_dq_lpf_d__previous_in;
double _load_634_meter_pll_abc_to_dq_lpf_q__filtered_value;
double _load_634_meter_pll_abc_to_dq_lpf_q__previous_in;
double _load_671_meter_pll_abc_to_dq_lpf_d__filtered_value;
double _load_671_meter_pll_abc_to_dq_lpf_d__previous_in;
double _load_671_meter_pll_abc_to_dq_lpf_q__filtered_value;
double _load_671_meter_pll_abc_to_dq_lpf_q__previous_in;
double _load_675_meter_pll_abc_to_dq_lpf_d__filtered_value;
double _load_675_meter_pll_abc_to_dq_lpf_d__previous_in;
double _load_675_meter_pll_abc_to_dq_lpf_q__filtered_value;
double _load_675_meter_pll_abc_to_dq_lpf_q__previous_in;
double _source_meter_power_meter_power__PsumA;
double _source_meter_power_meter_power__PsumB;
double _source_meter_power_meter_power__PsumC;
double _source_meter_power_meter_power__VevenSumA;
double _source_meter_power_meter_power__VevenSumB;
double _source_meter_power_meter_power__VevenSumC;
double _source_meter_power_meter_power__VoddSumA;
double _source_meter_power_meter_power__VoddSumB;
double _source_meter_power_meter_power__VoddSumC;
double _source_meter_power_meter_power__IevenSumA;
double _source_meter_power_meter_power__IevenSumB;
double _source_meter_power_meter_power__IevenSumC;
double _source_meter_power_meter_power__IoddSumA;
double _source_meter_power_meter_power__IoddSumB;
double _source_meter_power_meter_power__IoddSumC;
double _source_meter_pll_abc_to_dq_lpf_d__filtered_value;
double _source_meter_pll_abc_to_dq_lpf_d__previous_in;
double _source_meter_pll_abc_to_dq_lpf_q__filtered_value;
double _source_meter_pll_abc_to_dq_lpf_q__previous_in;
double _dist_load_632_meter_pll_rate_limiter1__state;
X_Int32 _dist_load_632_meter_pll_rate_limiter1__first_step;
double _dist_load_671_meter_pll_rate_limiter1__state;
X_Int32 _dist_load_671_meter_pll_rate_limiter1__first_step;
double _load_634_meter_pll_rate_limiter1__state;
X_Int32 _load_634_meter_pll_rate_limiter1__first_step;
double _load_671_meter_pll_rate_limiter1__state;
X_Int32 _load_671_meter_pll_rate_limiter1__first_step;
double _load_675_meter_pll_rate_limiter1__state;
X_Int32 _load_675_meter_pll_rate_limiter1__first_step;
double _source_meter_pll_rate_limiter1__state;
X_Int32 _source_meter_pll_rate_limiter1__first_step;
double _dist_load_632_meter_pll_lpf_lpf__states[2];
double _dist_load_671_meter_pll_lpf_lpf__states[2];
double _load_634_meter_pll_lpf_lpf__states[2];
double _load_671_meter_pll_lpf_lpf__states[2];
double _load_675_meter_pll_lpf_lpf__states[2];
double _source_meter_pll_lpf_lpf__states[2];
//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _dist_load_632_meter_pll_pid_integrator1__state = 376.99111843;
    _dist_load_632_meter_pll_pid_integrator2__state = 0.0;
    _dist_load_632_meter_pll_unit_delay1__state = 0.0;
    _dist_load_671_meter_pll_pid_integrator1__state = 376.99111843;
    _dist_load_671_meter_pll_pid_integrator2__state = 0.0;
    _dist_load_671_meter_pll_unit_delay1__state = 0.0;
    _load_634_meter_pll_pid_integrator1__state = 376.99111843;
    _load_634_meter_pll_pid_integrator2__state = 0.0;
    _load_634_meter_pll_unit_delay1__state = 0.0;
    _load_671_meter_pll_pid_integrator1__state = 376.99111843;
    _load_671_meter_pll_pid_integrator2__state = 0.0;
    _load_671_meter_pll_unit_delay1__state = 0.0;
    _load_675_meter_pll_pid_integrator1__state = 376.99111843;
    _load_675_meter_pll_pid_integrator2__state = 0.0;
    _load_675_meter_pll_unit_delay1__state = 0.0;
    _rega_vreg_auto1_edge_detection3_unit_delay1__state = 0.0;
    _rega_vreg_auto1_elapsed_time_clock1__state = 0.0f;
    _rega_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state = 0.0;
    _rega_vreg_auto1_elapsed_time_unit_delay1__state = 0.0;
    _rega_vreg_auto1_tap_position__state = 0.0;
    _regb_vreg_auto1_edge_detection3_unit_delay1__state = 0.0;
    _regb_vreg_auto1_elapsed_time_clock1__state = 0.0f;
    _regb_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state = 0.0;
    _regb_vreg_auto1_elapsed_time_unit_delay1__state = 0.0;
    _regb_vreg_auto1_tap_position__state = 0.0;
    _regc_vreg_auto1_edge_detection3_unit_delay1__state = 0.0;
    _regc_vreg_auto1_elapsed_time_clock1__state = 0.0f;
    _regc_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state = 0.0;
    _regc_vreg_auto1_elapsed_time_unit_delay1__state = 0.0;
    _regc_vreg_auto1_tap_position__state = 0.0;
    _source_meter_pll_pid_integrator1__state = 376.99111843;
    _source_meter_pll_pid_integrator2__state = 0.0;
    _source_meter_pll_unit_delay1__state = 0.0;
    HIL_OutAO(0x4018, 0.0f);
    _dist_load_632_meter_meassm_mode_and_dfract__dFract = 0;
    _dist_load_632_meter_meassm_mode_and_dfract__fMax = 1.0 / 0.0001;
    _dist_load_632_meter_meassm_mode_and_dfract__cycle_counter = 0;
    _dist_load_632_meter_meassm_mode_and_dfract__reset = 1;
    HIL_OutAO(0x401c, 0.0f);
    _dist_load_671_meter_meassm_mode_and_dfract__dFract = 0;
    _dist_load_671_meter_meassm_mode_and_dfract__fMax = 1.0 / 0.0001;
    _dist_load_671_meter_meassm_mode_and_dfract__cycle_counter = 0;
    _dist_load_671_meter_meassm_mode_and_dfract__reset = 1;
    HIL_OutAO(0x4020, 0.0f);
    _load_634_meter_meassm_mode_and_dfract__dFract = 0;
    _load_634_meter_meassm_mode_and_dfract__fMax = 1.0 / 0.0001;
    _load_634_meter_meassm_mode_and_dfract__cycle_counter = 0;
    _load_634_meter_meassm_mode_and_dfract__reset = 1;
    HIL_OutAO(0x4024, 0.0f);
    _load_671_meter_meassm_mode_and_dfract__dFract = 0;
    _load_671_meter_meassm_mode_and_dfract__fMax = 1.0 / 0.0001;
    _load_671_meter_meassm_mode_and_dfract__cycle_counter = 0;
    _load_671_meter_meassm_mode_and_dfract__reset = 1;
    HIL_OutAO(0x4028, 0.0f);
    _load_675_meter_meassm_mode_and_dfract__dFract = 0;
    _load_675_meter_meassm_mode_and_dfract__fMax = 1.0 / 0.0001;
    _load_675_meter_meassm_mode_and_dfract__cycle_counter = 0;
    _load_675_meter_meassm_mode_and_dfract__reset = 1;
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x4035, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    _source_meter_meassm_mode_and_dfract__dFract = 0;
    _source_meter_meassm_mode_and_dfract__fMax = 1.0 / 0.0001;
    _source_meter_meassm_mode_and_dfract__cycle_counter = 0;
    _source_meter_meassm_mode_and_dfract__reset = 1;
    _dist_load_632_meter_vln_rms_calc_rms__mode = 1;
    _dist_load_671_meter_vln_rms_calc_rms__mode = 1;
    _load_634_meter_vln_rms_calc_rms__mode = 1;
    _load_671_meter_vln_rms_calc_rms__mode = 1;
    _load_675_meter_vln_rms_calc_rms__mode = 1;
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4033, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    _source_meter_i_rms_calc_rms__mode = 1;
    _source_meter_vln_rms_calc_rms__mode = 1;
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    _dist_load_632_meter_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_632_meter_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _dist_load_632_meter_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_632_meter_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    _dist_load_671_meter_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_671_meter_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _dist_load_671_meter_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_671_meter_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    _load_634_meter_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_634_meter_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _load_634_meter_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_634_meter_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    _load_671_meter_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_671_meter_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _load_671_meter_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_671_meter_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    _load_675_meter_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_675_meter_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _load_675_meter_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_675_meter_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutFloat(137101315, 0.0);
    HIL_OutFloat(137101312, 0.0);
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutFloat(137101316, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutAO(0x4032, 0.0f);
    HIL_OutFloat(137101317, 0.0);
    HIL_OutFloat(137101314, 0.0);
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x4039, 0.0f);
    HIL_OutAO(0x403a, 0.0f);
    HIL_OutAO(0x403b, 0.0f);
    _source_meter_power_meter_power__mode = 1;
    HIL_OutAO(0x404c, 0.0f);
    HIL_OutAO(0x404d, 0.0f);
    HIL_OutAO(0x404e, 0.0f);
    _source_meter_pll_abc_to_dq_lpf_d__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _source_meter_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _source_meter_pll_abc_to_dq_lpf_q__filtered_value = 0.0 / (1 - 1.0 * 62.83185307 * 0.0001 );
    _source_meter_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    _dist_load_632_meter_pll_normalize__pk = 0;
    _dist_load_671_meter_pll_normalize__pk = 0;
    _load_634_meter_pll_normalize__pk = 0;
    _load_671_meter_pll_normalize__pk = 0;
    _load_675_meter_pll_normalize__pk = 0;
    HIL_OutAO(0x402c, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x4034, 0.0f);
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutAO(0x403f, 0.0f);
    HIL_OutAO(0x4040, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    HIL_OutAO(0x4045, 0.0f);
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4047, 0.0f);
    HIL_OutAO(0x4048, 0.0f);
    HIL_OutAO(0x4049, 0.0f);
    HIL_OutAO(0x404a, 0.0f);
    HIL_OutAO(0x404b, 0.0f);
    _source_meter_pll_normalize__pk = 0;
    _dist_load_632_meter_pll_rate_limiter1__state = 0;
    _dist_load_632_meter_pll_rate_limiter1__first_step = 1;
    _dist_load_632_meter_pll_integrator__out = 0;
    _dist_load_671_meter_pll_rate_limiter1__state = 0;
    _dist_load_671_meter_pll_rate_limiter1__first_step = 1;
    _dist_load_671_meter_pll_integrator__out = 0;
    _load_634_meter_pll_rate_limiter1__state = 0;
    _load_634_meter_pll_rate_limiter1__first_step = 1;
    _load_634_meter_pll_integrator__out = 0;
    _load_671_meter_pll_rate_limiter1__state = 0;
    _load_671_meter_pll_rate_limiter1__first_step = 1;
    _load_671_meter_pll_integrator__out = 0;
    _load_675_meter_pll_rate_limiter1__state = 0;
    _load_675_meter_pll_rate_limiter1__first_step = 1;
    _load_675_meter_pll_integrator__out = 0;
    _source_meter_pll_rate_limiter1__state = 0;
    _source_meter_pll_rate_limiter1__first_step = 1;
    _source_meter_pll_integrator__out = 0;
    X_UnInt32 _dist_load_632_meter_pll_lpf_lpf__i;
    for (_dist_load_632_meter_pll_lpf_lpf__i = 0; _dist_load_632_meter_pll_lpf_lpf__i < 2; _dist_load_632_meter_pll_lpf_lpf__i++) {
        _dist_load_632_meter_pll_lpf_lpf__states[_dist_load_632_meter_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _dist_load_671_meter_pll_lpf_lpf__i;
    for (_dist_load_671_meter_pll_lpf_lpf__i = 0; _dist_load_671_meter_pll_lpf_lpf__i < 2; _dist_load_671_meter_pll_lpf_lpf__i++) {
        _dist_load_671_meter_pll_lpf_lpf__states[_dist_load_671_meter_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _load_634_meter_pll_lpf_lpf__i;
    for (_load_634_meter_pll_lpf_lpf__i = 0; _load_634_meter_pll_lpf_lpf__i < 2; _load_634_meter_pll_lpf_lpf__i++) {
        _load_634_meter_pll_lpf_lpf__states[_load_634_meter_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _load_671_meter_pll_lpf_lpf__i;
    for (_load_671_meter_pll_lpf_lpf__i = 0; _load_671_meter_pll_lpf_lpf__i < 2; _load_671_meter_pll_lpf_lpf__i++) {
        _load_671_meter_pll_lpf_lpf__states[_load_671_meter_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _load_675_meter_pll_lpf_lpf__i;
    for (_load_675_meter_pll_lpf_lpf__i = 0; _load_675_meter_pll_lpf_lpf__i < 2; _load_675_meter_pll_lpf_lpf__i++) {
        _load_675_meter_pll_lpf_lpf__states[_load_675_meter_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _source_meter_pll_lpf_lpf__i;
    for (_source_meter_pll_lpf_lpf__i = 0; _source_meter_pll_lpf_lpf__i < 2; _source_meter_pll_lpf_lpf__i++) {
        _source_meter_pll_lpf_lpf__states[_source_meter_pll_lpf_lpf__i] = 0;
    }
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
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

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: Dist Load 632.Meter.zero
    // Generated from the component: Dist Load 671.Meter.zero
    // Generated from the component: Load 634.Meter.zero
    // Generated from the component: Load 671.Meter.zero
    // Generated from the component: Load 675.Meter.zero
    // Generated from the component: Rega.Vreg.Auto1.regulator_voltage
    // Generated from the component: Rega.Vreg.Auto1.regulator_voltage1
    // Generated from the component: Rega.Vreg.Auto1.regulator_voltage2
    // Generated from the component: Rega.Vreg.Auto1.regulator_voltage3
    // Generated from the component: Rega.Vreg.Auto1.regulator_voltage4
    // Generated from the component: Rega.Vreg.Auto1.var_per_tap
    // Generated from the component: Regb.Vreg.Auto1.regulator_voltage
    // Generated from the component: Regb.Vreg.Auto1.regulator_voltage1
    // Generated from the component: Regb.Vreg.Auto1.regulator_voltage2
    // Generated from the component: Regb.Vreg.Auto1.regulator_voltage3
    // Generated from the component: Regb.Vreg.Auto1.regulator_voltage4
    // Generated from the component: Regb.Vreg.Auto1.var_per_tap
    // Generated from the component: Regc.Vreg.Auto1.regulator_voltage
    // Generated from the component: Regc.Vreg.Auto1.regulator_voltage1
    // Generated from the component: Regc.Vreg.Auto1.regulator_voltage2
    // Generated from the component: Regc.Vreg.Auto1.regulator_voltage3
    // Generated from the component: Regc.Vreg.Auto1.regulator_voltage4
    // Generated from the component: Regc.Vreg.Auto1.var_per_tap
    // Generated from the component: Source_Meter.zero
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Integrator1
    _dist_load_632_meter_pll_pid_integrator1__out = _dist_load_632_meter_pll_pid_integrator1__state;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Integrator2
    _dist_load_632_meter_pll_pid_integrator2__out = _dist_load_632_meter_pll_pid_integrator2__state;
    // Generated from the component: Dist Load 632.Meter.PLL.Unit Delay1
    _dist_load_632_meter_pll_unit_delay1__out = _dist_load_632_meter_pll_unit_delay1__state;
    // Generated from the component: Dist Load 632.Meter.PLL.to_Hz
    _dist_load_632_meter_pll_to_hz__out = 0.15915494309189535 * _dist_load_632_meter_pll_lpf_lpf__out;
    // Generated from the component: Dist Load 632.Meter.VAn.Va1
    _dist_load_632_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x61));
    // Generated from the component: Dist Load 632.Meter.VBn.Va1
    _dist_load_632_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x62));
    // Generated from the component: Dist Load 632.Meter.VCn.Va1
    _dist_load_632_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x63));
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Integrator1
    _dist_load_671_meter_pll_pid_integrator1__out = _dist_load_671_meter_pll_pid_integrator1__state;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Integrator2
    _dist_load_671_meter_pll_pid_integrator2__out = _dist_load_671_meter_pll_pid_integrator2__state;
    // Generated from the component: Dist Load 671.Meter.PLL.Unit Delay1
    _dist_load_671_meter_pll_unit_delay1__out = _dist_load_671_meter_pll_unit_delay1__state;
    // Generated from the component: Dist Load 671.Meter.PLL.to_Hz
    _dist_load_671_meter_pll_to_hz__out = 0.15915494309189535 * _dist_load_671_meter_pll_lpf_lpf__out;
    // Generated from the component: Dist Load 671.Meter.VAn.Va1
    _dist_load_671_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x64));
    // Generated from the component: Dist Load 671.Meter.VBn.Va1
    _dist_load_671_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x65));
    // Generated from the component: Dist Load 671.Meter.VCn.Va1
    _dist_load_671_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x66));
    // Generated from the component: Load 634.Meter.PLL.PID.Integrator1
    _load_634_meter_pll_pid_integrator1__out = _load_634_meter_pll_pid_integrator1__state;
    // Generated from the component: Load 634.Meter.PLL.PID.Integrator2
    _load_634_meter_pll_pid_integrator2__out = _load_634_meter_pll_pid_integrator2__state;
    // Generated from the component: Load 634.Meter.PLL.Unit Delay1
    _load_634_meter_pll_unit_delay1__out = _load_634_meter_pll_unit_delay1__state;
    // Generated from the component: Load 634.Meter.PLL.to_Hz
    _load_634_meter_pll_to_hz__out = 0.15915494309189535 * _load_634_meter_pll_lpf_lpf__out;
    // Generated from the component: Load 634.Meter.VAn.Va1
    _load_634_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x69));
    // Generated from the component: Load 634.Meter.VBn.Va1
    _load_634_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x6a));
    // Generated from the component: Load 634.Meter.VCn.Va1
    _load_634_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x6b));
    // Generated from the component: Load 671.Meter.PLL.PID.Integrator1
    _load_671_meter_pll_pid_integrator1__out = _load_671_meter_pll_pid_integrator1__state;
    // Generated from the component: Load 671.Meter.PLL.PID.Integrator2
    _load_671_meter_pll_pid_integrator2__out = _load_671_meter_pll_pid_integrator2__state;
    // Generated from the component: Load 671.Meter.PLL.Unit Delay1
    _load_671_meter_pll_unit_delay1__out = _load_671_meter_pll_unit_delay1__state;
    // Generated from the component: Load 671.Meter.PLL.to_Hz
    _load_671_meter_pll_to_hz__out = 0.15915494309189535 * _load_671_meter_pll_lpf_lpf__out;
    // Generated from the component: Load 671.Meter.VAn.Va1
    _load_671_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x75));
    // Generated from the component: Load 671.Meter.VBn.Va1
    _load_671_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x76));
    // Generated from the component: Load 671.Meter.VCn.Va1
    _load_671_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x77));
    // Generated from the component: Load 675.Meter.PLL.PID.Integrator1
    _load_675_meter_pll_pid_integrator1__out = _load_675_meter_pll_pid_integrator1__state;
    // Generated from the component: Load 675.Meter.PLL.PID.Integrator2
    _load_675_meter_pll_pid_integrator2__out = _load_675_meter_pll_pid_integrator2__state;
    // Generated from the component: Load 675.Meter.PLL.Unit Delay1
    _load_675_meter_pll_unit_delay1__out = _load_675_meter_pll_unit_delay1__state;
    // Generated from the component: Load 675.Meter.PLL.to_Hz
    _load_675_meter_pll_to_hz__out = 0.15915494309189535 * _load_675_meter_pll_lpf_lpf__out;
    // Generated from the component: Load 675.Meter.VAn.Va1
    _load_675_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x78));
    // Generated from the component: Load 675.Meter.VBn.Va1
    _load_675_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x79));
    // Generated from the component: Load 675.Meter.VCn.Va1
    _load_675_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x7a));
    // Generated from the component: Rega.Vreg.Auto1.Edge Detection3.Unit Delay1
    _rega_vreg_auto1_edge_detection3_unit_delay1__out = _rega_vreg_auto1_edge_detection3_unit_delay1__state;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Clock1
    _rega_vreg_auto1_elapsed_time_clock1__out = _rega_vreg_auto1_elapsed_time_clock1__state;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Edge Detection1.Unit Delay1
    _rega_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out = _rega_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Unit Delay1
    _rega_vreg_auto1_elapsed_time_unit_delay1__out = _rega_vreg_auto1_elapsed_time_unit_delay1__state;
    // Generated from the component: Rega.Vreg.Auto1.Isec_A
    _rega_vreg_auto1_isec_a__out = (HIL_InFloat(0xc80000 + 0x8a));
    // Generated from the component: Rega.Vreg.Auto1.Tap Position
    _rega_vreg_auto1_tap_position__out = _rega_vreg_auto1_tap_position__state;
    // Generated from the component: Rega.Vreg.Auto1.VLoad_A.cpu_trans.Output
    _rega_vreg_auto1_vload_a_cpu_trans_output__out = XIo_InFloat(0xfffc0000);
    // Generated from the component: Rega.Vreg.Auto1.Vprim_A
    _rega_vreg_auto1_vprim_a__out = (HIL_InFloat(0xc80000 + 0x81));
    // Generated from the component: Regb.Vreg.Auto1.Edge Detection3.Unit Delay1
    _regb_vreg_auto1_edge_detection3_unit_delay1__out = _regb_vreg_auto1_edge_detection3_unit_delay1__state;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Clock1
    _regb_vreg_auto1_elapsed_time_clock1__out = _regb_vreg_auto1_elapsed_time_clock1__state;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Edge Detection1.Unit Delay1
    _regb_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out = _regb_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Unit Delay1
    _regb_vreg_auto1_elapsed_time_unit_delay1__out = _regb_vreg_auto1_elapsed_time_unit_delay1__state;
    // Generated from the component: Regb.Vreg.Auto1.Isec_A
    _regb_vreg_auto1_isec_a__out = (HIL_InFloat(0xc80000 + 0x8c));
    // Generated from the component: Regb.Vreg.Auto1.Tap Position
    _regb_vreg_auto1_tap_position__out = _regb_vreg_auto1_tap_position__state;
    // Generated from the component: Regb.Vreg.Auto1.VLoad_A.cpu_trans.Output
    _regb_vreg_auto1_vload_a_cpu_trans_output__out = XIo_InFloat(0xfffc0004);
    // Generated from the component: Regb.Vreg.Auto1.Vprim_A
    _regb_vreg_auto1_vprim_a__out = (HIL_InFloat(0xc80000 + 0x83));
    // Generated from the component: Regc.Vreg.Auto1.Edge Detection3.Unit Delay1
    _regc_vreg_auto1_edge_detection3_unit_delay1__out = _regc_vreg_auto1_edge_detection3_unit_delay1__state;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Clock1
    _regc_vreg_auto1_elapsed_time_clock1__out = _regc_vreg_auto1_elapsed_time_clock1__state;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Edge Detection1.Unit Delay1
    _regc_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out = _regc_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Unit Delay1
    _regc_vreg_auto1_elapsed_time_unit_delay1__out = _regc_vreg_auto1_elapsed_time_unit_delay1__state;
    // Generated from the component: Regc.Vreg.Auto1.Isec_A
    _regc_vreg_auto1_isec_a__out = (HIL_InFloat(0xc80000 + 0x8e));
    // Generated from the component: Regc.Vreg.Auto1.Tap Position
    _regc_vreg_auto1_tap_position__out = _regc_vreg_auto1_tap_position__state;
    // Generated from the component: Regc.Vreg.Auto1.VLoad_A.cpu_trans.Output
    _regc_vreg_auto1_vload_a_cpu_trans_output__out = XIo_InFloat(0xfffc0008);
    // Generated from the component: Regc.Vreg.Auto1.Vprim_A
    _regc_vreg_auto1_vprim_a__out = (HIL_InFloat(0xc80000 + 0x85));
    // Generated from the component: Source_Meter.IA.Ia1
    _source_meter_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x8f));
    // Generated from the component: Source_Meter.IB.Ia1
    _source_meter_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x90));
    // Generated from the component: Source_Meter.IC.Ia1
    _source_meter_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x91));
    // Generated from the component: Source_Meter.PLL.PID.Integrator1
    _source_meter_pll_pid_integrator1__out = _source_meter_pll_pid_integrator1__state;
    // Generated from the component: Source_Meter.PLL.PID.Integrator2
    _source_meter_pll_pid_integrator2__out = _source_meter_pll_pid_integrator2__state;
    // Generated from the component: Source_Meter.PLL.Unit Delay1
    _source_meter_pll_unit_delay1__out = _source_meter_pll_unit_delay1__state;
    // Generated from the component: Source_Meter.PLL.to_Hz
    _source_meter_pll_to_hz__out = 0.15915494309189535 * _source_meter_pll_lpf_lpf__out;
    // Generated from the component: Source_Meter.VAn.Va1
    _source_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x86));
    // Generated from the component: Source_Meter.VBn.Va1
    _source_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x87));
    // Generated from the component: Source_Meter.VCn.Va1
    _source_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x88));
    // Generated from the component: Dist Load 632.Meter.PLL.sin
    _dist_load_632_meter_pll_sin__out = sin(_dist_load_632_meter_pll_unit_delay1__out);
    // Generated from the component: Dist Load 632.Meter.TRMwt
    // Generated from the component: Dist Load 632.Meter.Freq
    HIL_OutAO(0x4018, (float)_dist_load_632_meter_pll_to_hz__out);
    // Generated from the component: Dist Load 632.Meter.measSM.mode_and_dFract
    _dist_load_632_meter_meassm_mode_and_dfract__Freq = _dist_load_632_meter_pll_to_hz__out;
    _dist_load_632_meter_meassm_mode_and_dfract__freqAbs = fabs(_dist_load_632_meter_meassm_mode_and_dfract__Freq);
    if (_dist_load_632_meter_meassm_mode_and_dfract__reset == 1) {
        _dist_load_632_meter_meassm_mode_and_dfract__mode = 1;
        _dist_load_632_meter_meassm_mode_and_dfract__Tfract = 0.0;
        _dist_load_632_meter_meassm_mode_and_dfract__cycle_counter = 0;
        _dist_load_632_meter_meassm_mode_and_dfract__reset = 0;
    }
    else if (_dist_load_632_meter_meassm_mode_and_dfract__freqAbs < 1.0) {
        _dist_load_632_meter_meassm_mode_and_dfract__mode = 2;
        if (_dist_load_632_meter_meassm_mode_and_dfract__Tfract > 0.0) {
            _dist_load_632_meter_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_dist_load_632_meter_meassm_mode_and_dfract__Tfract < 1.0) && (_dist_load_632_meter_meassm_mode_and_dfract__freqAbs < _dist_load_632_meter_meassm_mode_and_dfract__fMax)) {
        _dist_load_632_meter_meassm_mode_and_dfract__dFract = 0.0001 * _dist_load_632_meter_meassm_mode_and_dfract__freqAbs;
        _dist_load_632_meter_meassm_mode_and_dfract__Tfract += _dist_load_632_meter_meassm_mode_and_dfract__dFract;
        if (_dist_load_632_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
            _dist_load_632_meter_meassm_mode_and_dfract__cycle_counter += 1;
            if (_dist_load_632_meter_meassm_mode_and_dfract__cycle_counter >= 1) {
                _dist_load_632_meter_meassm_mode_and_dfract__dFract = 1.0 - (_dist_load_632_meter_meassm_mode_and_dfract__Tfract - _dist_load_632_meter_meassm_mode_and_dfract__dFract);
            }
            else {
                _dist_load_632_meter_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _dist_load_632_meter_meassm_mode_and_dfract__dFract /= 1;
        _dist_load_632_meter_meassm_mode_and_dfract__mode = 3;
        if (_dist_load_632_meter_meassm_mode_and_dfract__Tfract < 0.25) {
            _dist_load_632_meter_meassm_mode_and_dfract__submode = 1;
        }
        else if (_dist_load_632_meter_meassm_mode_and_dfract__Tfract < 0.5) {
            _dist_load_632_meter_meassm_mode_and_dfract__submode = 2;
        }
        else if (_dist_load_632_meter_meassm_mode_and_dfract__Tfract < 0.75) {
            _dist_load_632_meter_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _dist_load_632_meter_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_dist_load_632_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
        _dist_load_632_meter_meassm_mode_and_dfract__mode = 4;
        _dist_load_632_meter_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _dist_load_632_meter_meassm_mode_and_dfract__mode = 5;
        _dist_load_632_meter_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Dist Load 632.Meter.PLL.abc to dq.abc to alpha beta
    _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _dist_load_632_meter_van_va1__out - _dist_load_632_meter_vbn_va1__out - _dist_load_632_meter_vcn_va1__out) * 0.3333333333333333;
    _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__beta = (_dist_load_632_meter_vbn_va1__out - _dist_load_632_meter_vcn_va1__out) * 0.5773502691896258;
    _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_dist_load_632_meter_van_va1__out + _dist_load_632_meter_vbn_va1__out + _dist_load_632_meter_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Dist Load 632.Meter.IA_RMS
    // Generated from the component: Dist Load 632.Meter.IB_RMS
    // Generated from the component: Dist Load 632.Meter.IC_RMS
    // Generated from the component: Dist Load 632.Meter.IN
    // Generated from the component: Dist Load 632.Meter.IN_RMS
    // Generated from the component: Dist Load 632.Meter.I_RMS
    // Generated from the component: Dist Load 632.Meter.POWER_P
    // Generated from the component: Dist Load 632.Meter.POWER_PA
    // Generated from the component: Dist Load 632.Meter.POWER_PB
    // Generated from the component: Dist Load 632.Meter.POWER_PC
    // Generated from the component: Dist Load 632.Meter.POWER_PF
    // Generated from the component: Dist Load 632.Meter.POWER_PFA
    // Generated from the component: Dist Load 632.Meter.POWER_PFB
    // Generated from the component: Dist Load 632.Meter.POWER_PFC
    // Generated from the component: Dist Load 632.Meter.POWER_Q
    // Generated from the component: Dist Load 632.Meter.POWER_QA
    // Generated from the component: Dist Load 632.Meter.POWER_QB
    // Generated from the component: Dist Load 632.Meter.POWER_QC
    // Generated from the component: Dist Load 632.Meter.POWER_S
    // Generated from the component: Dist Load 632.Meter.POWER_SA
    // Generated from the component: Dist Load 632.Meter.POWER_SB
    // Generated from the component: Dist Load 632.Meter.POWER_SC
    // Generated from the component: Dist Load 632.Meter.VAB_RMS
    // Generated from the component: Dist Load 632.Meter.VBC_RMS
    // Generated from the component: Dist Load 632.Meter.VCA_RMS
    // Generated from the component: Dist Load 632.Meter.VLL_RMS
    // Generated from the component: Dist Load 632.Meter.VLn_RMS
    // Generated from the component: Dist Load 632.Meter.VN
    // Generated from the component: Dist Load 632.Meter.VN_RMS
    // Generated from the component: Dist Load 632.Meter.extra_output_bus
    _dist_load_632_meter_extra_output_bus__out[0] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[1] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[2] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[3] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[4] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[5] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[6] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[7] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[8] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[9] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[10] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_extra_output_bus__out[11] = _dist_load_632_meter_zero__out;
    // Generated from the component: Dist Load 671.Meter.PLL.sin
    _dist_load_671_meter_pll_sin__out = sin(_dist_load_671_meter_pll_unit_delay1__out);
    // Generated from the component: Dist Load 671.Meter.TRMwt
    // Generated from the component: Dist Load 671.Meter.Freq
    HIL_OutAO(0x401c, (float)_dist_load_671_meter_pll_to_hz__out);
    // Generated from the component: Dist Load 671.Meter.measSM.mode_and_dFract
    _dist_load_671_meter_meassm_mode_and_dfract__Freq = _dist_load_671_meter_pll_to_hz__out;
    _dist_load_671_meter_meassm_mode_and_dfract__freqAbs = fabs(_dist_load_671_meter_meassm_mode_and_dfract__Freq);
    if (_dist_load_671_meter_meassm_mode_and_dfract__reset == 1) {
        _dist_load_671_meter_meassm_mode_and_dfract__mode = 1;
        _dist_load_671_meter_meassm_mode_and_dfract__Tfract = 0.0;
        _dist_load_671_meter_meassm_mode_and_dfract__cycle_counter = 0;
        _dist_load_671_meter_meassm_mode_and_dfract__reset = 0;
    }
    else if (_dist_load_671_meter_meassm_mode_and_dfract__freqAbs < 1.0) {
        _dist_load_671_meter_meassm_mode_and_dfract__mode = 2;
        if (_dist_load_671_meter_meassm_mode_and_dfract__Tfract > 0.0) {
            _dist_load_671_meter_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_dist_load_671_meter_meassm_mode_and_dfract__Tfract < 1.0) && (_dist_load_671_meter_meassm_mode_and_dfract__freqAbs < _dist_load_671_meter_meassm_mode_and_dfract__fMax)) {
        _dist_load_671_meter_meassm_mode_and_dfract__dFract = 0.0001 * _dist_load_671_meter_meassm_mode_and_dfract__freqAbs;
        _dist_load_671_meter_meassm_mode_and_dfract__Tfract += _dist_load_671_meter_meassm_mode_and_dfract__dFract;
        if (_dist_load_671_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
            _dist_load_671_meter_meassm_mode_and_dfract__cycle_counter += 1;
            if (_dist_load_671_meter_meassm_mode_and_dfract__cycle_counter >= 1) {
                _dist_load_671_meter_meassm_mode_and_dfract__dFract = 1.0 - (_dist_load_671_meter_meassm_mode_and_dfract__Tfract - _dist_load_671_meter_meassm_mode_and_dfract__dFract);
            }
            else {
                _dist_load_671_meter_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _dist_load_671_meter_meassm_mode_and_dfract__dFract /= 1;
        _dist_load_671_meter_meassm_mode_and_dfract__mode = 3;
        if (_dist_load_671_meter_meassm_mode_and_dfract__Tfract < 0.25) {
            _dist_load_671_meter_meassm_mode_and_dfract__submode = 1;
        }
        else if (_dist_load_671_meter_meassm_mode_and_dfract__Tfract < 0.5) {
            _dist_load_671_meter_meassm_mode_and_dfract__submode = 2;
        }
        else if (_dist_load_671_meter_meassm_mode_and_dfract__Tfract < 0.75) {
            _dist_load_671_meter_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _dist_load_671_meter_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_dist_load_671_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
        _dist_load_671_meter_meassm_mode_and_dfract__mode = 4;
        _dist_load_671_meter_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _dist_load_671_meter_meassm_mode_and_dfract__mode = 5;
        _dist_load_671_meter_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Dist Load 671.Meter.PLL.abc to dq.abc to alpha beta
    _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _dist_load_671_meter_van_va1__out - _dist_load_671_meter_vbn_va1__out - _dist_load_671_meter_vcn_va1__out) * 0.3333333333333333;
    _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta = (_dist_load_671_meter_vbn_va1__out - _dist_load_671_meter_vcn_va1__out) * 0.5773502691896258;
    _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_dist_load_671_meter_van_va1__out + _dist_load_671_meter_vbn_va1__out + _dist_load_671_meter_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Dist Load 671.Meter.IA_RMS
    // Generated from the component: Dist Load 671.Meter.IB_RMS
    // Generated from the component: Dist Load 671.Meter.IC_RMS
    // Generated from the component: Dist Load 671.Meter.IN
    // Generated from the component: Dist Load 671.Meter.IN_RMS
    // Generated from the component: Dist Load 671.Meter.I_RMS
    // Generated from the component: Dist Load 671.Meter.POWER_P
    // Generated from the component: Dist Load 671.Meter.POWER_PA
    // Generated from the component: Dist Load 671.Meter.POWER_PB
    // Generated from the component: Dist Load 671.Meter.POWER_PC
    // Generated from the component: Dist Load 671.Meter.POWER_PF
    // Generated from the component: Dist Load 671.Meter.POWER_PFA
    // Generated from the component: Dist Load 671.Meter.POWER_PFB
    // Generated from the component: Dist Load 671.Meter.POWER_PFC
    // Generated from the component: Dist Load 671.Meter.POWER_Q
    // Generated from the component: Dist Load 671.Meter.POWER_QA
    // Generated from the component: Dist Load 671.Meter.POWER_QB
    // Generated from the component: Dist Load 671.Meter.POWER_QC
    // Generated from the component: Dist Load 671.Meter.POWER_S
    // Generated from the component: Dist Load 671.Meter.POWER_SA
    // Generated from the component: Dist Load 671.Meter.POWER_SB
    // Generated from the component: Dist Load 671.Meter.POWER_SC
    // Generated from the component: Dist Load 671.Meter.VAB_RMS
    // Generated from the component: Dist Load 671.Meter.VBC_RMS
    // Generated from the component: Dist Load 671.Meter.VCA_RMS
    // Generated from the component: Dist Load 671.Meter.VLL_RMS
    // Generated from the component: Dist Load 671.Meter.VLn_RMS
    // Generated from the component: Dist Load 671.Meter.VN
    // Generated from the component: Dist Load 671.Meter.VN_RMS
    // Generated from the component: Dist Load 671.Meter.extra_output_bus
    _dist_load_671_meter_extra_output_bus__out[0] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[1] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[2] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[3] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[4] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[5] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[6] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[7] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[8] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[9] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[10] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_extra_output_bus__out[11] = _dist_load_671_meter_zero__out;
    // Generated from the component: Load 634.Meter.PLL.sin
    _load_634_meter_pll_sin__out = sin(_load_634_meter_pll_unit_delay1__out);
    // Generated from the component: Load 634.Meter.TRMwt
    // Generated from the component: Load 634.Meter.Freq
    HIL_OutAO(0x4020, (float)_load_634_meter_pll_to_hz__out);
    // Generated from the component: Load 634.Meter.measSM.mode_and_dFract
    _load_634_meter_meassm_mode_and_dfract__Freq = _load_634_meter_pll_to_hz__out;
    _load_634_meter_meassm_mode_and_dfract__freqAbs = fabs(_load_634_meter_meassm_mode_and_dfract__Freq);
    if (_load_634_meter_meassm_mode_and_dfract__reset == 1) {
        _load_634_meter_meassm_mode_and_dfract__mode = 1;
        _load_634_meter_meassm_mode_and_dfract__Tfract = 0.0;
        _load_634_meter_meassm_mode_and_dfract__cycle_counter = 0;
        _load_634_meter_meassm_mode_and_dfract__reset = 0;
    }
    else if (_load_634_meter_meassm_mode_and_dfract__freqAbs < 1.0) {
        _load_634_meter_meassm_mode_and_dfract__mode = 2;
        if (_load_634_meter_meassm_mode_and_dfract__Tfract > 0.0) {
            _load_634_meter_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_load_634_meter_meassm_mode_and_dfract__Tfract < 1.0) && (_load_634_meter_meassm_mode_and_dfract__freqAbs < _load_634_meter_meassm_mode_and_dfract__fMax)) {
        _load_634_meter_meassm_mode_and_dfract__dFract = 0.0001 * _load_634_meter_meassm_mode_and_dfract__freqAbs;
        _load_634_meter_meassm_mode_and_dfract__Tfract += _load_634_meter_meassm_mode_and_dfract__dFract;
        if (_load_634_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
            _load_634_meter_meassm_mode_and_dfract__cycle_counter += 1;
            if (_load_634_meter_meassm_mode_and_dfract__cycle_counter >= 1) {
                _load_634_meter_meassm_mode_and_dfract__dFract = 1.0 - (_load_634_meter_meassm_mode_and_dfract__Tfract - _load_634_meter_meassm_mode_and_dfract__dFract);
            }
            else {
                _load_634_meter_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _load_634_meter_meassm_mode_and_dfract__dFract /= 1;
        _load_634_meter_meassm_mode_and_dfract__mode = 3;
        if (_load_634_meter_meassm_mode_and_dfract__Tfract < 0.25) {
            _load_634_meter_meassm_mode_and_dfract__submode = 1;
        }
        else if (_load_634_meter_meassm_mode_and_dfract__Tfract < 0.5) {
            _load_634_meter_meassm_mode_and_dfract__submode = 2;
        }
        else if (_load_634_meter_meassm_mode_and_dfract__Tfract < 0.75) {
            _load_634_meter_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _load_634_meter_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_load_634_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
        _load_634_meter_meassm_mode_and_dfract__mode = 4;
        _load_634_meter_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _load_634_meter_meassm_mode_and_dfract__mode = 5;
        _load_634_meter_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Load 634.Meter.PLL.abc to dq.abc to alpha beta
    _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _load_634_meter_van_va1__out - _load_634_meter_vbn_va1__out - _load_634_meter_vcn_va1__out) * 0.3333333333333333;
    _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__beta = (_load_634_meter_vbn_va1__out - _load_634_meter_vcn_va1__out) * 0.5773502691896258;
    _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_load_634_meter_van_va1__out + _load_634_meter_vbn_va1__out + _load_634_meter_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Load 634.Meter.IA_RMS
    // Generated from the component: Load 634.Meter.IB_RMS
    // Generated from the component: Load 634.Meter.IC_RMS
    // Generated from the component: Load 634.Meter.IN
    // Generated from the component: Load 634.Meter.IN_RMS
    // Generated from the component: Load 634.Meter.I_RMS
    // Generated from the component: Load 634.Meter.POWER_P
    // Generated from the component: Load 634.Meter.POWER_PA
    // Generated from the component: Load 634.Meter.POWER_PB
    // Generated from the component: Load 634.Meter.POWER_PC
    // Generated from the component: Load 634.Meter.POWER_PF
    // Generated from the component: Load 634.Meter.POWER_PFA
    // Generated from the component: Load 634.Meter.POWER_PFB
    // Generated from the component: Load 634.Meter.POWER_PFC
    // Generated from the component: Load 634.Meter.POWER_Q
    // Generated from the component: Load 634.Meter.POWER_QA
    // Generated from the component: Load 634.Meter.POWER_QB
    // Generated from the component: Load 634.Meter.POWER_QC
    // Generated from the component: Load 634.Meter.POWER_S
    // Generated from the component: Load 634.Meter.POWER_SA
    // Generated from the component: Load 634.Meter.POWER_SB
    // Generated from the component: Load 634.Meter.POWER_SC
    // Generated from the component: Load 634.Meter.VAB_RMS
    // Generated from the component: Load 634.Meter.VBC_RMS
    // Generated from the component: Load 634.Meter.VCA_RMS
    // Generated from the component: Load 634.Meter.VLL_RMS
    // Generated from the component: Load 634.Meter.VLn_RMS
    // Generated from the component: Load 634.Meter.VN
    // Generated from the component: Load 634.Meter.VN_RMS
    // Generated from the component: Load 634.Meter.extra_output_bus
    _load_634_meter_extra_output_bus__out[0] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[1] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[2] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[3] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[4] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[5] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[6] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[7] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[8] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[9] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[10] = _load_634_meter_zero__out;
    _load_634_meter_extra_output_bus__out[11] = _load_634_meter_zero__out;
    // Generated from the component: Load 671.Meter.PLL.sin
    _load_671_meter_pll_sin__out = sin(_load_671_meter_pll_unit_delay1__out);
    // Generated from the component: Load 671.Meter.TRMwt
    // Generated from the component: Load 671.Meter.Freq
    HIL_OutAO(0x4024, (float)_load_671_meter_pll_to_hz__out);
    // Generated from the component: Load 671.Meter.measSM.mode_and_dFract
    _load_671_meter_meassm_mode_and_dfract__Freq = _load_671_meter_pll_to_hz__out;
    _load_671_meter_meassm_mode_and_dfract__freqAbs = fabs(_load_671_meter_meassm_mode_and_dfract__Freq);
    if (_load_671_meter_meassm_mode_and_dfract__reset == 1) {
        _load_671_meter_meassm_mode_and_dfract__mode = 1;
        _load_671_meter_meassm_mode_and_dfract__Tfract = 0.0;
        _load_671_meter_meassm_mode_and_dfract__cycle_counter = 0;
        _load_671_meter_meassm_mode_and_dfract__reset = 0;
    }
    else if (_load_671_meter_meassm_mode_and_dfract__freqAbs < 1.0) {
        _load_671_meter_meassm_mode_and_dfract__mode = 2;
        if (_load_671_meter_meassm_mode_and_dfract__Tfract > 0.0) {
            _load_671_meter_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_load_671_meter_meassm_mode_and_dfract__Tfract < 1.0) && (_load_671_meter_meassm_mode_and_dfract__freqAbs < _load_671_meter_meassm_mode_and_dfract__fMax)) {
        _load_671_meter_meassm_mode_and_dfract__dFract = 0.0001 * _load_671_meter_meassm_mode_and_dfract__freqAbs;
        _load_671_meter_meassm_mode_and_dfract__Tfract += _load_671_meter_meassm_mode_and_dfract__dFract;
        if (_load_671_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
            _load_671_meter_meassm_mode_and_dfract__cycle_counter += 1;
            if (_load_671_meter_meassm_mode_and_dfract__cycle_counter >= 1) {
                _load_671_meter_meassm_mode_and_dfract__dFract = 1.0 - (_load_671_meter_meassm_mode_and_dfract__Tfract - _load_671_meter_meassm_mode_and_dfract__dFract);
            }
            else {
                _load_671_meter_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _load_671_meter_meassm_mode_and_dfract__dFract /= 1;
        _load_671_meter_meassm_mode_and_dfract__mode = 3;
        if (_load_671_meter_meassm_mode_and_dfract__Tfract < 0.25) {
            _load_671_meter_meassm_mode_and_dfract__submode = 1;
        }
        else if (_load_671_meter_meassm_mode_and_dfract__Tfract < 0.5) {
            _load_671_meter_meassm_mode_and_dfract__submode = 2;
        }
        else if (_load_671_meter_meassm_mode_and_dfract__Tfract < 0.75) {
            _load_671_meter_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _load_671_meter_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_load_671_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
        _load_671_meter_meassm_mode_and_dfract__mode = 4;
        _load_671_meter_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _load_671_meter_meassm_mode_and_dfract__mode = 5;
        _load_671_meter_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Load 671.Meter.PLL.abc to dq.abc to alpha beta
    _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _load_671_meter_van_va1__out - _load_671_meter_vbn_va1__out - _load_671_meter_vcn_va1__out) * 0.3333333333333333;
    _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta = (_load_671_meter_vbn_va1__out - _load_671_meter_vcn_va1__out) * 0.5773502691896258;
    _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_load_671_meter_van_va1__out + _load_671_meter_vbn_va1__out + _load_671_meter_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Load 671.Meter.IA_RMS
    // Generated from the component: Load 671.Meter.IB_RMS
    // Generated from the component: Load 671.Meter.IC_RMS
    // Generated from the component: Load 671.Meter.IN
    // Generated from the component: Load 671.Meter.IN_RMS
    // Generated from the component: Load 671.Meter.I_RMS
    // Generated from the component: Load 671.Meter.POWER_P
    // Generated from the component: Load 671.Meter.POWER_PA
    // Generated from the component: Load 671.Meter.POWER_PB
    // Generated from the component: Load 671.Meter.POWER_PC
    // Generated from the component: Load 671.Meter.POWER_PF
    // Generated from the component: Load 671.Meter.POWER_PFA
    // Generated from the component: Load 671.Meter.POWER_PFB
    // Generated from the component: Load 671.Meter.POWER_PFC
    // Generated from the component: Load 671.Meter.POWER_Q
    // Generated from the component: Load 671.Meter.POWER_QA
    // Generated from the component: Load 671.Meter.POWER_QB
    // Generated from the component: Load 671.Meter.POWER_QC
    // Generated from the component: Load 671.Meter.POWER_S
    // Generated from the component: Load 671.Meter.POWER_SA
    // Generated from the component: Load 671.Meter.POWER_SB
    // Generated from the component: Load 671.Meter.POWER_SC
    // Generated from the component: Load 671.Meter.VAB_RMS
    // Generated from the component: Load 671.Meter.VBC_RMS
    // Generated from the component: Load 671.Meter.VCA_RMS
    // Generated from the component: Load 671.Meter.VLL_RMS
    // Generated from the component: Load 671.Meter.VLn_RMS
    // Generated from the component: Load 671.Meter.VN
    // Generated from the component: Load 671.Meter.VN_RMS
    // Generated from the component: Load 671.Meter.extra_output_bus
    _load_671_meter_extra_output_bus__out[0] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[1] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[2] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[3] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[4] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[5] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[6] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[7] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[8] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[9] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[10] = _load_671_meter_zero__out;
    _load_671_meter_extra_output_bus__out[11] = _load_671_meter_zero__out;
    // Generated from the component: Load 675.Meter.PLL.sin
    _load_675_meter_pll_sin__out = sin(_load_675_meter_pll_unit_delay1__out);
    // Generated from the component: Load 675.Meter.TRMwt
    // Generated from the component: Load 675.Meter.Freq
    HIL_OutAO(0x4028, (float)_load_675_meter_pll_to_hz__out);
    // Generated from the component: Load 675.Meter.measSM.mode_and_dFract
    _load_675_meter_meassm_mode_and_dfract__Freq = _load_675_meter_pll_to_hz__out;
    _load_675_meter_meassm_mode_and_dfract__freqAbs = fabs(_load_675_meter_meassm_mode_and_dfract__Freq);
    if (_load_675_meter_meassm_mode_and_dfract__reset == 1) {
        _load_675_meter_meassm_mode_and_dfract__mode = 1;
        _load_675_meter_meassm_mode_and_dfract__Tfract = 0.0;
        _load_675_meter_meassm_mode_and_dfract__cycle_counter = 0;
        _load_675_meter_meassm_mode_and_dfract__reset = 0;
    }
    else if (_load_675_meter_meassm_mode_and_dfract__freqAbs < 1.0) {
        _load_675_meter_meassm_mode_and_dfract__mode = 2;
        if (_load_675_meter_meassm_mode_and_dfract__Tfract > 0.0) {
            _load_675_meter_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_load_675_meter_meassm_mode_and_dfract__Tfract < 1.0) && (_load_675_meter_meassm_mode_and_dfract__freqAbs < _load_675_meter_meassm_mode_and_dfract__fMax)) {
        _load_675_meter_meassm_mode_and_dfract__dFract = 0.0001 * _load_675_meter_meassm_mode_and_dfract__freqAbs;
        _load_675_meter_meassm_mode_and_dfract__Tfract += _load_675_meter_meassm_mode_and_dfract__dFract;
        if (_load_675_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
            _load_675_meter_meassm_mode_and_dfract__cycle_counter += 1;
            if (_load_675_meter_meassm_mode_and_dfract__cycle_counter >= 1) {
                _load_675_meter_meassm_mode_and_dfract__dFract = 1.0 - (_load_675_meter_meassm_mode_and_dfract__Tfract - _load_675_meter_meassm_mode_and_dfract__dFract);
            }
            else {
                _load_675_meter_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _load_675_meter_meassm_mode_and_dfract__dFract /= 1;
        _load_675_meter_meassm_mode_and_dfract__mode = 3;
        if (_load_675_meter_meassm_mode_and_dfract__Tfract < 0.25) {
            _load_675_meter_meassm_mode_and_dfract__submode = 1;
        }
        else if (_load_675_meter_meassm_mode_and_dfract__Tfract < 0.5) {
            _load_675_meter_meassm_mode_and_dfract__submode = 2;
        }
        else if (_load_675_meter_meassm_mode_and_dfract__Tfract < 0.75) {
            _load_675_meter_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _load_675_meter_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_load_675_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
        _load_675_meter_meassm_mode_and_dfract__mode = 4;
        _load_675_meter_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _load_675_meter_meassm_mode_and_dfract__mode = 5;
        _load_675_meter_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Load 675.Meter.PLL.abc to dq.abc to alpha beta
    _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _load_675_meter_van_va1__out - _load_675_meter_vbn_va1__out - _load_675_meter_vcn_va1__out) * 0.3333333333333333;
    _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__beta = (_load_675_meter_vbn_va1__out - _load_675_meter_vcn_va1__out) * 0.5773502691896258;
    _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_load_675_meter_van_va1__out + _load_675_meter_vbn_va1__out + _load_675_meter_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Load 675.Meter.IA_RMS
    // Generated from the component: Load 675.Meter.IB_RMS
    // Generated from the component: Load 675.Meter.IC_RMS
    // Generated from the component: Load 675.Meter.IN
    // Generated from the component: Load 675.Meter.IN_RMS
    // Generated from the component: Load 675.Meter.I_RMS
    // Generated from the component: Load 675.Meter.POWER_P
    // Generated from the component: Load 675.Meter.POWER_PA
    // Generated from the component: Load 675.Meter.POWER_PB
    // Generated from the component: Load 675.Meter.POWER_PC
    // Generated from the component: Load 675.Meter.POWER_PF
    // Generated from the component: Load 675.Meter.POWER_PFA
    // Generated from the component: Load 675.Meter.POWER_PFB
    // Generated from the component: Load 675.Meter.POWER_PFC
    // Generated from the component: Load 675.Meter.POWER_Q
    // Generated from the component: Load 675.Meter.POWER_QA
    // Generated from the component: Load 675.Meter.POWER_QB
    // Generated from the component: Load 675.Meter.POWER_QC
    // Generated from the component: Load 675.Meter.POWER_S
    // Generated from the component: Load 675.Meter.POWER_SA
    // Generated from the component: Load 675.Meter.POWER_SB
    // Generated from the component: Load 675.Meter.POWER_SC
    // Generated from the component: Load 675.Meter.VAB_RMS
    // Generated from the component: Load 675.Meter.VBC_RMS
    // Generated from the component: Load 675.Meter.VCA_RMS
    // Generated from the component: Load 675.Meter.VLL_RMS
    // Generated from the component: Load 675.Meter.VLn_RMS
    // Generated from the component: Load 675.Meter.VN
    // Generated from the component: Load 675.Meter.VN_RMS
    // Generated from the component: Load 675.Meter.extra_output_bus
    _load_675_meter_extra_output_bus__out[0] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[1] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[2] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[3] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[4] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[5] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[6] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[7] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[8] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[9] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[10] = _load_675_meter_zero__out;
    _load_675_meter_extra_output_bus__out[11] = _load_675_meter_zero__out;
    // Generated from the component: Rega.Vreg.Auto1.Edge Detection3.Relational operator1
    _rega_vreg_auto1_edge_detection3_relational_operator1__out = (_rega_vreg_auto1_tap_position__out != _rega_vreg_auto1_edge_detection3_unit_delay1__out) ? 1 : 0;
    // Generated from the component: Rega.Vreg.Auto1.Gain4
    _rega_vreg_auto1_gain4__out = 0.05 * _rega_vreg_auto1_vload_a_cpu_trans_output__out;
    // Generated from the component: Rega.Vreg.Auto1.Gain1
    _rega_vreg_auto1_gain1__out = 0.5 * _rega_vreg_auto1_regulator_voltage1__out;
    // Generated from the component: Rega.Vreg.Auto1.VSum2
    _rega_vreg_auto1_vsum2__out =  - _rega_vreg_auto1_regulator_voltage4__out + _rega_vreg_auto1_tap_position__out;
    // Generated from the component: Rega.Vreg.Auto1.Product1
    _rega_vreg_auto1_product1__out = (_rega_vreg_auto1_tap_position__out * _rega_vreg_auto1_var_per_tap__out);
    // Generated from the component: Rega.Vreg.Auto1.per_tap
    HIL_OutAO(0x402d, (float)_rega_vreg_auto1_var_per_tap__out);
    // Generated from the component: Regb.Vreg.Auto1.Edge Detection3.Relational operator1
    _regb_vreg_auto1_edge_detection3_relational_operator1__out = (_regb_vreg_auto1_tap_position__out != _regb_vreg_auto1_edge_detection3_unit_delay1__out) ? 1 : 0;
    // Generated from the component: Regb.Vreg.Auto1.Gain4
    _regb_vreg_auto1_gain4__out = 0.05 * _regb_vreg_auto1_vload_a_cpu_trans_output__out;
    // Generated from the component: Regb.Vreg.Auto1.Gain1
    _regb_vreg_auto1_gain1__out = 0.5 * _regb_vreg_auto1_regulator_voltage1__out;
    // Generated from the component: Regb.Vreg.Auto1.VSum2
    _regb_vreg_auto1_vsum2__out =  - _regb_vreg_auto1_regulator_voltage4__out + _regb_vreg_auto1_tap_position__out;
    // Generated from the component: Regb.Vreg.Auto1.Product1
    _regb_vreg_auto1_product1__out = (_regb_vreg_auto1_tap_position__out * _regb_vreg_auto1_var_per_tap__out);
    // Generated from the component: Regb.Vreg.Auto1.per_tap
    HIL_OutAO(0x4031, (float)_regb_vreg_auto1_var_per_tap__out);
    // Generated from the component: Regc.Vreg.Auto1.Edge Detection3.Relational operator1
    _regc_vreg_auto1_edge_detection3_relational_operator1__out = (_regc_vreg_auto1_tap_position__out != _regc_vreg_auto1_edge_detection3_unit_delay1__out) ? 1 : 0;
    // Generated from the component: Regc.Vreg.Auto1.Gain4
    _regc_vreg_auto1_gain4__out = 0.05 * _regc_vreg_auto1_vload_a_cpu_trans_output__out;
    // Generated from the component: Regc.Vreg.Auto1.Gain1
    _regc_vreg_auto1_gain1__out = 0.5 * _regc_vreg_auto1_regulator_voltage1__out;
    // Generated from the component: Regc.Vreg.Auto1.VSum2
    _regc_vreg_auto1_vsum2__out =  - _regc_vreg_auto1_regulator_voltage4__out + _regc_vreg_auto1_tap_position__out;
    // Generated from the component: Regc.Vreg.Auto1.Product1
    _regc_vreg_auto1_product1__out = (_regc_vreg_auto1_tap_position__out * _regc_vreg_auto1_var_per_tap__out);
    // Generated from the component: Regc.Vreg.Auto1.per_tap
    HIL_OutAO(0x4035, (float)_regc_vreg_auto1_var_per_tap__out);
    // Generated from the component: Source_Meter.PLL.sin
    _source_meter_pll_sin__out = sin(_source_meter_pll_unit_delay1__out);
    // Generated from the component: Source_Meter.TRMwt
    // Generated from the component: Source_Meter.Freq
    HIL_OutAO(0x4038, (float)_source_meter_pll_to_hz__out);
    // Generated from the component: Source_Meter.measSM.mode_and_dFract
    _source_meter_meassm_mode_and_dfract__Freq = _source_meter_pll_to_hz__out;
    _source_meter_meassm_mode_and_dfract__freqAbs = fabs(_source_meter_meassm_mode_and_dfract__Freq);
    if (_source_meter_meassm_mode_and_dfract__reset == 1) {
        _source_meter_meassm_mode_and_dfract__mode = 1;
        _source_meter_meassm_mode_and_dfract__Tfract = 0.0;
        _source_meter_meassm_mode_and_dfract__cycle_counter = 0;
        _source_meter_meassm_mode_and_dfract__reset = 0;
    }
    else if (_source_meter_meassm_mode_and_dfract__freqAbs < 1.0) {
        _source_meter_meassm_mode_and_dfract__mode = 2;
        if (_source_meter_meassm_mode_and_dfract__Tfract > 0.0) {
            _source_meter_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_source_meter_meassm_mode_and_dfract__Tfract < 1.0) && (_source_meter_meassm_mode_and_dfract__freqAbs < _source_meter_meassm_mode_and_dfract__fMax)) {
        _source_meter_meassm_mode_and_dfract__dFract = 0.0001 * _source_meter_meassm_mode_and_dfract__freqAbs;
        _source_meter_meassm_mode_and_dfract__Tfract += _source_meter_meassm_mode_and_dfract__dFract;
        if (_source_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
            _source_meter_meassm_mode_and_dfract__cycle_counter += 1;
            if (_source_meter_meassm_mode_and_dfract__cycle_counter >= 1) {
                _source_meter_meassm_mode_and_dfract__dFract = 1.0 - (_source_meter_meassm_mode_and_dfract__Tfract - _source_meter_meassm_mode_and_dfract__dFract);
            }
            else {
                _source_meter_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _source_meter_meassm_mode_and_dfract__dFract /= 1;
        _source_meter_meassm_mode_and_dfract__mode = 3;
        if (_source_meter_meassm_mode_and_dfract__Tfract < 0.25) {
            _source_meter_meassm_mode_and_dfract__submode = 1;
        }
        else if (_source_meter_meassm_mode_and_dfract__Tfract < 0.5) {
            _source_meter_meassm_mode_and_dfract__submode = 2;
        }
        else if (_source_meter_meassm_mode_and_dfract__Tfract < 0.75) {
            _source_meter_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _source_meter_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_source_meter_meassm_mode_and_dfract__Tfract >= 1.0) {
        _source_meter_meassm_mode_and_dfract__mode = 4;
        _source_meter_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _source_meter_meassm_mode_and_dfract__mode = 5;
        _source_meter_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Source_Meter.PLL.abc to dq.abc to alpha beta
    _source_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _source_meter_van_va1__out - _source_meter_vbn_va1__out - _source_meter_vcn_va1__out) * 0.3333333333333333;
    _source_meter_pll_abc_to_dq_abc_to_alpha_beta__beta = (_source_meter_vbn_va1__out - _source_meter_vcn_va1__out) * 0.5773502691896258;
    _source_meter_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_source_meter_van_va1__out + _source_meter_vbn_va1__out + _source_meter_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Source_Meter.IN
    // Generated from the component: Source_Meter.IN_RMS
    // Generated from the component: Source_Meter.I_RMS
    // Generated from the component: Source_Meter.VAB_RMS
    // Generated from the component: Source_Meter.VBC_RMS
    // Generated from the component: Source_Meter.VCA_RMS
    // Generated from the component: Source_Meter.VLL_RMS
    // Generated from the component: Source_Meter.VLn_RMS
    // Generated from the component: Source_Meter.VN
    // Generated from the component: Source_Meter.VN_RMS
    // Generated from the component: Dist Load 632.Meter.TRMsin
    // Generated from the component: Dist Load 632.Meter.VLn_RMS_calc.RMS
    _dist_load_632_meter_vln_rms_calc_rms__IN1 = _dist_load_632_meter_van_va1__out;
    _dist_load_632_meter_vln_rms_calc_rms__IN2 = _dist_load_632_meter_vbn_va1__out;
    _dist_load_632_meter_vln_rms_calc_rms__IN3 = _dist_load_632_meter_vcn_va1__out;
    _dist_load_632_meter_vln_rms_calc_rms__dFract = _dist_load_632_meter_meassm_mode_and_dfract__dFract;
    _dist_load_632_meter_vln_rms_calc_rms__mode = _dist_load_632_meter_meassm_mode_and_dfract__mode;
    switch (_dist_load_632_meter_vln_rms_calc_rms__mode) {
    case 1:
        _dist_load_632_meter_vln_rms_calc_rms__rmsSum1 = 0.0;
        _dist_load_632_meter_vln_rms_calc_rms__rmsSum2 = 0.0;
        _dist_load_632_meter_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _dist_load_632_meter_vln_rms_calc_rms__RMS1 = _dist_load_632_meter_vln_rms_calc_rms__IN1;
        _dist_load_632_meter_vln_rms_calc_rms__RMS2 = _dist_load_632_meter_vln_rms_calc_rms__IN2;
        _dist_load_632_meter_vln_rms_calc_rms__RMS3 = _dist_load_632_meter_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _dist_load_632_meter_vln_rms_calc_rms__rmsSum1 += _dist_load_632_meter_vln_rms_calc_rms__dFract * (_dist_load_632_meter_vln_rms_calc_rms__IN1 * _dist_load_632_meter_vln_rms_calc_rms__IN1);
        _dist_load_632_meter_vln_rms_calc_rms__rmsSum2 += _dist_load_632_meter_vln_rms_calc_rms__dFract * (_dist_load_632_meter_vln_rms_calc_rms__IN2 * _dist_load_632_meter_vln_rms_calc_rms__IN2);
        _dist_load_632_meter_vln_rms_calc_rms__rmsSum3 += _dist_load_632_meter_vln_rms_calc_rms__dFract * (_dist_load_632_meter_vln_rms_calc_rms__IN3 * _dist_load_632_meter_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _dist_load_632_meter_vln_rms_calc_rms__RMS1 = sqrt(_dist_load_632_meter_vln_rms_calc_rms__rmsSum1);
        _dist_load_632_meter_vln_rms_calc_rms__RMS2 = sqrt(_dist_load_632_meter_vln_rms_calc_rms__rmsSum2);
        _dist_load_632_meter_vln_rms_calc_rms__RMS3 = sqrt(_dist_load_632_meter_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _dist_load_632_meter_vln_rms_calc_rms__RMS1 = fabs(_dist_load_632_meter_vln_rms_calc_rms__IN1);
        _dist_load_632_meter_vln_rms_calc_rms__RMS2 = fabs(_dist_load_632_meter_vln_rms_calc_rms__IN2);
        _dist_load_632_meter_vln_rms_calc_rms__RMS3 = fabs(_dist_load_632_meter_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Dist Load 632.Meter.termSubMode
    // Generated from the component: Dist Load 632.Meter.PLL.abc to dq.alpha beta to dq
    _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_dist_load_632_meter_pll_unit_delay1__out);
    _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_dist_load_632_meter_pll_unit_delay1__out);
    _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__d = _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha - _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__q = _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha + _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _dist_load_632_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Dist Load 632.Meter.TRMz
    // Generated from the component: Dist Load 632.Meter.extra_out
    // Generated from the component: Dist Load 671.Meter.TRMsin
    // Generated from the component: Dist Load 671.Meter.VLn_RMS_calc.RMS
    _dist_load_671_meter_vln_rms_calc_rms__IN1 = _dist_load_671_meter_van_va1__out;
    _dist_load_671_meter_vln_rms_calc_rms__IN2 = _dist_load_671_meter_vbn_va1__out;
    _dist_load_671_meter_vln_rms_calc_rms__IN3 = _dist_load_671_meter_vcn_va1__out;
    _dist_load_671_meter_vln_rms_calc_rms__dFract = _dist_load_671_meter_meassm_mode_and_dfract__dFract;
    _dist_load_671_meter_vln_rms_calc_rms__mode = _dist_load_671_meter_meassm_mode_and_dfract__mode;
    switch (_dist_load_671_meter_vln_rms_calc_rms__mode) {
    case 1:
        _dist_load_671_meter_vln_rms_calc_rms__rmsSum1 = 0.0;
        _dist_load_671_meter_vln_rms_calc_rms__rmsSum2 = 0.0;
        _dist_load_671_meter_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _dist_load_671_meter_vln_rms_calc_rms__RMS1 = _dist_load_671_meter_vln_rms_calc_rms__IN1;
        _dist_load_671_meter_vln_rms_calc_rms__RMS2 = _dist_load_671_meter_vln_rms_calc_rms__IN2;
        _dist_load_671_meter_vln_rms_calc_rms__RMS3 = _dist_load_671_meter_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _dist_load_671_meter_vln_rms_calc_rms__rmsSum1 += _dist_load_671_meter_vln_rms_calc_rms__dFract * (_dist_load_671_meter_vln_rms_calc_rms__IN1 * _dist_load_671_meter_vln_rms_calc_rms__IN1);
        _dist_load_671_meter_vln_rms_calc_rms__rmsSum2 += _dist_load_671_meter_vln_rms_calc_rms__dFract * (_dist_load_671_meter_vln_rms_calc_rms__IN2 * _dist_load_671_meter_vln_rms_calc_rms__IN2);
        _dist_load_671_meter_vln_rms_calc_rms__rmsSum3 += _dist_load_671_meter_vln_rms_calc_rms__dFract * (_dist_load_671_meter_vln_rms_calc_rms__IN3 * _dist_load_671_meter_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _dist_load_671_meter_vln_rms_calc_rms__RMS1 = sqrt(_dist_load_671_meter_vln_rms_calc_rms__rmsSum1);
        _dist_load_671_meter_vln_rms_calc_rms__RMS2 = sqrt(_dist_load_671_meter_vln_rms_calc_rms__rmsSum2);
        _dist_load_671_meter_vln_rms_calc_rms__RMS3 = sqrt(_dist_load_671_meter_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _dist_load_671_meter_vln_rms_calc_rms__RMS1 = fabs(_dist_load_671_meter_vln_rms_calc_rms__IN1);
        _dist_load_671_meter_vln_rms_calc_rms__RMS2 = fabs(_dist_load_671_meter_vln_rms_calc_rms__IN2);
        _dist_load_671_meter_vln_rms_calc_rms__RMS3 = fabs(_dist_load_671_meter_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Dist Load 671.Meter.termSubMode
    // Generated from the component: Dist Load 671.Meter.PLL.abc to dq.alpha beta to dq
    _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_dist_load_671_meter_pll_unit_delay1__out);
    _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_dist_load_671_meter_pll_unit_delay1__out);
    _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__d = _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha - _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__q = _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha + _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _dist_load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Dist Load 671.Meter.TRMz
    // Generated from the component: Dist Load 671.Meter.extra_out
    // Generated from the component: Load 634.Meter.TRMsin
    // Generated from the component: Load 634.Meter.VLn_RMS_calc.RMS
    _load_634_meter_vln_rms_calc_rms__IN1 = _load_634_meter_van_va1__out;
    _load_634_meter_vln_rms_calc_rms__IN2 = _load_634_meter_vbn_va1__out;
    _load_634_meter_vln_rms_calc_rms__IN3 = _load_634_meter_vcn_va1__out;
    _load_634_meter_vln_rms_calc_rms__dFract = _load_634_meter_meassm_mode_and_dfract__dFract;
    _load_634_meter_vln_rms_calc_rms__mode = _load_634_meter_meassm_mode_and_dfract__mode;
    switch (_load_634_meter_vln_rms_calc_rms__mode) {
    case 1:
        _load_634_meter_vln_rms_calc_rms__rmsSum1 = 0.0;
        _load_634_meter_vln_rms_calc_rms__rmsSum2 = 0.0;
        _load_634_meter_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _load_634_meter_vln_rms_calc_rms__RMS1 = _load_634_meter_vln_rms_calc_rms__IN1;
        _load_634_meter_vln_rms_calc_rms__RMS2 = _load_634_meter_vln_rms_calc_rms__IN2;
        _load_634_meter_vln_rms_calc_rms__RMS3 = _load_634_meter_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _load_634_meter_vln_rms_calc_rms__rmsSum1 += _load_634_meter_vln_rms_calc_rms__dFract * (_load_634_meter_vln_rms_calc_rms__IN1 * _load_634_meter_vln_rms_calc_rms__IN1);
        _load_634_meter_vln_rms_calc_rms__rmsSum2 += _load_634_meter_vln_rms_calc_rms__dFract * (_load_634_meter_vln_rms_calc_rms__IN2 * _load_634_meter_vln_rms_calc_rms__IN2);
        _load_634_meter_vln_rms_calc_rms__rmsSum3 += _load_634_meter_vln_rms_calc_rms__dFract * (_load_634_meter_vln_rms_calc_rms__IN3 * _load_634_meter_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _load_634_meter_vln_rms_calc_rms__RMS1 = sqrt(_load_634_meter_vln_rms_calc_rms__rmsSum1);
        _load_634_meter_vln_rms_calc_rms__RMS2 = sqrt(_load_634_meter_vln_rms_calc_rms__rmsSum2);
        _load_634_meter_vln_rms_calc_rms__RMS3 = sqrt(_load_634_meter_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _load_634_meter_vln_rms_calc_rms__RMS1 = fabs(_load_634_meter_vln_rms_calc_rms__IN1);
        _load_634_meter_vln_rms_calc_rms__RMS2 = fabs(_load_634_meter_vln_rms_calc_rms__IN2);
        _load_634_meter_vln_rms_calc_rms__RMS3 = fabs(_load_634_meter_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Load 634.Meter.termSubMode
    // Generated from the component: Load 634.Meter.PLL.abc to dq.alpha beta to dq
    _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_load_634_meter_pll_unit_delay1__out);
    _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_load_634_meter_pll_unit_delay1__out);
    _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__d = _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha - _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__q = _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha + _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _load_634_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Load 634.Meter.TRMz
    // Generated from the component: Load 634.Meter.extra_out
    // Generated from the component: Load 671.Meter.TRMsin
    // Generated from the component: Load 671.Meter.VLn_RMS_calc.RMS
    _load_671_meter_vln_rms_calc_rms__IN1 = _load_671_meter_van_va1__out;
    _load_671_meter_vln_rms_calc_rms__IN2 = _load_671_meter_vbn_va1__out;
    _load_671_meter_vln_rms_calc_rms__IN3 = _load_671_meter_vcn_va1__out;
    _load_671_meter_vln_rms_calc_rms__dFract = _load_671_meter_meassm_mode_and_dfract__dFract;
    _load_671_meter_vln_rms_calc_rms__mode = _load_671_meter_meassm_mode_and_dfract__mode;
    switch (_load_671_meter_vln_rms_calc_rms__mode) {
    case 1:
        _load_671_meter_vln_rms_calc_rms__rmsSum1 = 0.0;
        _load_671_meter_vln_rms_calc_rms__rmsSum2 = 0.0;
        _load_671_meter_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _load_671_meter_vln_rms_calc_rms__RMS1 = _load_671_meter_vln_rms_calc_rms__IN1;
        _load_671_meter_vln_rms_calc_rms__RMS2 = _load_671_meter_vln_rms_calc_rms__IN2;
        _load_671_meter_vln_rms_calc_rms__RMS3 = _load_671_meter_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _load_671_meter_vln_rms_calc_rms__rmsSum1 += _load_671_meter_vln_rms_calc_rms__dFract * (_load_671_meter_vln_rms_calc_rms__IN1 * _load_671_meter_vln_rms_calc_rms__IN1);
        _load_671_meter_vln_rms_calc_rms__rmsSum2 += _load_671_meter_vln_rms_calc_rms__dFract * (_load_671_meter_vln_rms_calc_rms__IN2 * _load_671_meter_vln_rms_calc_rms__IN2);
        _load_671_meter_vln_rms_calc_rms__rmsSum3 += _load_671_meter_vln_rms_calc_rms__dFract * (_load_671_meter_vln_rms_calc_rms__IN3 * _load_671_meter_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _load_671_meter_vln_rms_calc_rms__RMS1 = sqrt(_load_671_meter_vln_rms_calc_rms__rmsSum1);
        _load_671_meter_vln_rms_calc_rms__RMS2 = sqrt(_load_671_meter_vln_rms_calc_rms__rmsSum2);
        _load_671_meter_vln_rms_calc_rms__RMS3 = sqrt(_load_671_meter_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _load_671_meter_vln_rms_calc_rms__RMS1 = fabs(_load_671_meter_vln_rms_calc_rms__IN1);
        _load_671_meter_vln_rms_calc_rms__RMS2 = fabs(_load_671_meter_vln_rms_calc_rms__IN2);
        _load_671_meter_vln_rms_calc_rms__RMS3 = fabs(_load_671_meter_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Load 671.Meter.termSubMode
    // Generated from the component: Load 671.Meter.PLL.abc to dq.alpha beta to dq
    _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_load_671_meter_pll_unit_delay1__out);
    _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_load_671_meter_pll_unit_delay1__out);
    _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__d = _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha - _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__q = _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha + _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _load_671_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Load 671.Meter.TRMz
    // Generated from the component: Load 671.Meter.extra_out
    // Generated from the component: Load 675.Meter.TRMsin
    // Generated from the component: Load 675.Meter.VLn_RMS_calc.RMS
    _load_675_meter_vln_rms_calc_rms__IN1 = _load_675_meter_van_va1__out;
    _load_675_meter_vln_rms_calc_rms__IN2 = _load_675_meter_vbn_va1__out;
    _load_675_meter_vln_rms_calc_rms__IN3 = _load_675_meter_vcn_va1__out;
    _load_675_meter_vln_rms_calc_rms__dFract = _load_675_meter_meassm_mode_and_dfract__dFract;
    _load_675_meter_vln_rms_calc_rms__mode = _load_675_meter_meassm_mode_and_dfract__mode;
    switch (_load_675_meter_vln_rms_calc_rms__mode) {
    case 1:
        _load_675_meter_vln_rms_calc_rms__rmsSum1 = 0.0;
        _load_675_meter_vln_rms_calc_rms__rmsSum2 = 0.0;
        _load_675_meter_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _load_675_meter_vln_rms_calc_rms__RMS1 = _load_675_meter_vln_rms_calc_rms__IN1;
        _load_675_meter_vln_rms_calc_rms__RMS2 = _load_675_meter_vln_rms_calc_rms__IN2;
        _load_675_meter_vln_rms_calc_rms__RMS3 = _load_675_meter_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _load_675_meter_vln_rms_calc_rms__rmsSum1 += _load_675_meter_vln_rms_calc_rms__dFract * (_load_675_meter_vln_rms_calc_rms__IN1 * _load_675_meter_vln_rms_calc_rms__IN1);
        _load_675_meter_vln_rms_calc_rms__rmsSum2 += _load_675_meter_vln_rms_calc_rms__dFract * (_load_675_meter_vln_rms_calc_rms__IN2 * _load_675_meter_vln_rms_calc_rms__IN2);
        _load_675_meter_vln_rms_calc_rms__rmsSum3 += _load_675_meter_vln_rms_calc_rms__dFract * (_load_675_meter_vln_rms_calc_rms__IN3 * _load_675_meter_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _load_675_meter_vln_rms_calc_rms__RMS1 = sqrt(_load_675_meter_vln_rms_calc_rms__rmsSum1);
        _load_675_meter_vln_rms_calc_rms__RMS2 = sqrt(_load_675_meter_vln_rms_calc_rms__rmsSum2);
        _load_675_meter_vln_rms_calc_rms__RMS3 = sqrt(_load_675_meter_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _load_675_meter_vln_rms_calc_rms__RMS1 = fabs(_load_675_meter_vln_rms_calc_rms__IN1);
        _load_675_meter_vln_rms_calc_rms__RMS2 = fabs(_load_675_meter_vln_rms_calc_rms__IN2);
        _load_675_meter_vln_rms_calc_rms__RMS3 = fabs(_load_675_meter_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Load 675.Meter.termSubMode
    // Generated from the component: Load 675.Meter.PLL.abc to dq.alpha beta to dq
    _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_load_675_meter_pll_unit_delay1__out);
    _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_load_675_meter_pll_unit_delay1__out);
    _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__d = _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha - _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__q = _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha + _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _load_675_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Load 675.Meter.TRMz
    // Generated from the component: Load 675.Meter.extra_out
    // Generated from the component: Rega.Vreg.Auto1.Logical operator3
    _rega_vreg_auto1_logical_operator3__out = !_rega_vreg_auto1_edge_detection3_relational_operator1__out;
    // Generated from the component: Rega.Vreg.Auto1.VSum
    _rega_vreg_auto1_vsum__out =  - _rega_vreg_auto1_gain4__out + _rega_vreg_auto1_regulator_voltage__out;
    // Generated from the component: Rega.Vreg.Auto1.tap
    HIL_OutAO(0x402f, (float)_rega_vreg_auto1_vsum2__out);
    // Generated from the component: Rega.Vreg.Auto1.Product10
    _rega_vreg_auto1_product10__out = (_rega_vreg_auto1_product1__out * _rega_vreg_auto1_isec_a__out);
    // Generated from the component: Rega.Vreg.Auto1.Product11
    _rega_vreg_auto1_product11__out = (_rega_vreg_auto1_product1__out * _rega_vreg_auto1_vprim_a__out);
    // Generated from the component: Rega.Vreg.Auto1.VSum1
    _rega_vreg_auto1_vsum1__out = _rega_vreg_auto1_regulator_voltage3__out + _rega_vreg_auto1_product1__out;
    // Generated from the component: Regb.Vreg.Auto1.Logical operator3
    _regb_vreg_auto1_logical_operator3__out = !_regb_vreg_auto1_edge_detection3_relational_operator1__out;
    // Generated from the component: Regb.Vreg.Auto1.VSum
    _regb_vreg_auto1_vsum__out =  - _regb_vreg_auto1_gain4__out + _regb_vreg_auto1_regulator_voltage__out;
    // Generated from the component: Regb.Vreg.Auto1.tap
    HIL_OutAO(0x4033, (float)_regb_vreg_auto1_vsum2__out);
    // Generated from the component: Regb.Vreg.Auto1.Product10
    _regb_vreg_auto1_product10__out = (_regb_vreg_auto1_product1__out * _regb_vreg_auto1_isec_a__out);
    // Generated from the component: Regb.Vreg.Auto1.Product11
    _regb_vreg_auto1_product11__out = (_regb_vreg_auto1_product1__out * _regb_vreg_auto1_vprim_a__out);
    // Generated from the component: Regb.Vreg.Auto1.VSum1
    _regb_vreg_auto1_vsum1__out = _regb_vreg_auto1_regulator_voltage3__out + _regb_vreg_auto1_product1__out;
    // Generated from the component: Regc.Vreg.Auto1.Logical operator3
    _regc_vreg_auto1_logical_operator3__out = !_regc_vreg_auto1_edge_detection3_relational_operator1__out;
    // Generated from the component: Regc.Vreg.Auto1.VSum
    _regc_vreg_auto1_vsum__out =  - _regc_vreg_auto1_gain4__out + _regc_vreg_auto1_regulator_voltage__out;
    // Generated from the component: Regc.Vreg.Auto1.tap
    HIL_OutAO(0x4037, (float)_regc_vreg_auto1_vsum2__out);
    // Generated from the component: Regc.Vreg.Auto1.Product10
    _regc_vreg_auto1_product10__out = (_regc_vreg_auto1_product1__out * _regc_vreg_auto1_isec_a__out);
    // Generated from the component: Regc.Vreg.Auto1.Product11
    _regc_vreg_auto1_product11__out = (_regc_vreg_auto1_product1__out * _regc_vreg_auto1_vprim_a__out);
    // Generated from the component: Regc.Vreg.Auto1.VSum1
    _regc_vreg_auto1_vsum1__out = _regc_vreg_auto1_regulator_voltage3__out + _regc_vreg_auto1_product1__out;
    // Generated from the component: Source_Meter.TRMsin
    // Generated from the component: Source_Meter.I_RMS_calc.RMS
    _source_meter_i_rms_calc_rms__IN1 = _source_meter_ia_ia1__out;
    _source_meter_i_rms_calc_rms__IN2 = _source_meter_ib_ia1__out;
    _source_meter_i_rms_calc_rms__IN3 = _source_meter_ic_ia1__out;
    _source_meter_i_rms_calc_rms__dFract = _source_meter_meassm_mode_and_dfract__dFract;
    _source_meter_i_rms_calc_rms__mode = _source_meter_meassm_mode_and_dfract__mode;
    switch (_source_meter_i_rms_calc_rms__mode) {
    case 1:
        _source_meter_i_rms_calc_rms__rmsSum1 = 0.0;
        _source_meter_i_rms_calc_rms__rmsSum2 = 0.0;
        _source_meter_i_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _source_meter_i_rms_calc_rms__RMS1 = _source_meter_i_rms_calc_rms__IN1;
        _source_meter_i_rms_calc_rms__RMS2 = _source_meter_i_rms_calc_rms__IN2;
        _source_meter_i_rms_calc_rms__RMS3 = _source_meter_i_rms_calc_rms__IN3;
        break ;
    case 3:
        _source_meter_i_rms_calc_rms__rmsSum1 += _source_meter_i_rms_calc_rms__dFract * (_source_meter_i_rms_calc_rms__IN1 * _source_meter_i_rms_calc_rms__IN1);
        _source_meter_i_rms_calc_rms__rmsSum2 += _source_meter_i_rms_calc_rms__dFract * (_source_meter_i_rms_calc_rms__IN2 * _source_meter_i_rms_calc_rms__IN2);
        _source_meter_i_rms_calc_rms__rmsSum3 += _source_meter_i_rms_calc_rms__dFract * (_source_meter_i_rms_calc_rms__IN3 * _source_meter_i_rms_calc_rms__IN3);
        break ;
    case 4:
        _source_meter_i_rms_calc_rms__RMS1 = sqrt(_source_meter_i_rms_calc_rms__rmsSum1);
        _source_meter_i_rms_calc_rms__RMS2 = sqrt(_source_meter_i_rms_calc_rms__rmsSum2);
        _source_meter_i_rms_calc_rms__RMS3 = sqrt(_source_meter_i_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _source_meter_i_rms_calc_rms__RMS1 = fabs(_source_meter_i_rms_calc_rms__IN1);
        _source_meter_i_rms_calc_rms__RMS2 = fabs(_source_meter_i_rms_calc_rms__IN2);
        _source_meter_i_rms_calc_rms__RMS3 = fabs(_source_meter_i_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Source_Meter.VLn_RMS_calc.RMS
    _source_meter_vln_rms_calc_rms__IN1 = _source_meter_van_va1__out;
    _source_meter_vln_rms_calc_rms__IN2 = _source_meter_vbn_va1__out;
    _source_meter_vln_rms_calc_rms__IN3 = _source_meter_vcn_va1__out;
    _source_meter_vln_rms_calc_rms__dFract = _source_meter_meassm_mode_and_dfract__dFract;
    _source_meter_vln_rms_calc_rms__mode = _source_meter_meassm_mode_and_dfract__mode;
    switch (_source_meter_vln_rms_calc_rms__mode) {
    case 1:
        _source_meter_vln_rms_calc_rms__rmsSum1 = 0.0;
        _source_meter_vln_rms_calc_rms__rmsSum2 = 0.0;
        _source_meter_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _source_meter_vln_rms_calc_rms__RMS1 = _source_meter_vln_rms_calc_rms__IN1;
        _source_meter_vln_rms_calc_rms__RMS2 = _source_meter_vln_rms_calc_rms__IN2;
        _source_meter_vln_rms_calc_rms__RMS3 = _source_meter_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _source_meter_vln_rms_calc_rms__rmsSum1 += _source_meter_vln_rms_calc_rms__dFract * (_source_meter_vln_rms_calc_rms__IN1 * _source_meter_vln_rms_calc_rms__IN1);
        _source_meter_vln_rms_calc_rms__rmsSum2 += _source_meter_vln_rms_calc_rms__dFract * (_source_meter_vln_rms_calc_rms__IN2 * _source_meter_vln_rms_calc_rms__IN2);
        _source_meter_vln_rms_calc_rms__rmsSum3 += _source_meter_vln_rms_calc_rms__dFract * (_source_meter_vln_rms_calc_rms__IN3 * _source_meter_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _source_meter_vln_rms_calc_rms__RMS1 = sqrt(_source_meter_vln_rms_calc_rms__rmsSum1);
        _source_meter_vln_rms_calc_rms__RMS2 = sqrt(_source_meter_vln_rms_calc_rms__rmsSum2);
        _source_meter_vln_rms_calc_rms__RMS3 = sqrt(_source_meter_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _source_meter_vln_rms_calc_rms__RMS1 = fabs(_source_meter_vln_rms_calc_rms__IN1);
        _source_meter_vln_rms_calc_rms__RMS2 = fabs(_source_meter_vln_rms_calc_rms__IN2);
        _source_meter_vln_rms_calc_rms__RMS3 = fabs(_source_meter_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Source_Meter.PLL.abc to dq.alpha beta to dq
    _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_source_meter_pll_unit_delay1__out);
    _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_source_meter_pll_unit_delay1__out);
    _source_meter_pll_abc_to_dq_alpha_beta_to_dq__d = _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _source_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha - _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _source_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _source_meter_pll_abc_to_dq_alpha_beta_to_dq__q = _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k1 * _source_meter_pll_abc_to_dq_abc_to_alpha_beta__alpha + _source_meter_pll_abc_to_dq_alpha_beta_to_dq__k2 * _source_meter_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Source_Meter.TRMz
    // Generated from the component: Dist Load 632.Meter.VAn_RMS
    HIL_OutAO(0x4019, (float)_dist_load_632_meter_vln_rms_calc_rms__RMS1);
    // Generated from the component: Dist Load 632.Meter.VBn_RMS
    HIL_OutAO(0x401a, (float)_dist_load_632_meter_vln_rms_calc_rms__RMS2);
    // Generated from the component: Dist Load 632.Meter.VCn_RMS
    HIL_OutAO(0x401b, (float)_dist_load_632_meter_vln_rms_calc_rms__RMS3);
    // Generated from the component: Dist Load 632.Meter.output_bus
    _dist_load_632_meter_output_bus__out[0] = _dist_load_632_meter_van_va1__out;
    _dist_load_632_meter_output_bus__out[1] = _dist_load_632_meter_vbn_va1__out;
    _dist_load_632_meter_output_bus__out[2] = _dist_load_632_meter_vcn_va1__out;
    _dist_load_632_meter_output_bus__out[3] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[4] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[5] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[6] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[7] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[8] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[9] = _dist_load_632_meter_pll_to_hz__out;
    _dist_load_632_meter_output_bus__out[10] = _dist_load_632_meter_vln_rms_calc_rms__RMS1;
    _dist_load_632_meter_output_bus__out[11] = _dist_load_632_meter_vln_rms_calc_rms__RMS2;
    _dist_load_632_meter_output_bus__out[12] = _dist_load_632_meter_vln_rms_calc_rms__RMS3;
    _dist_load_632_meter_output_bus__out[13] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[14] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[15] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[16] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[17] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[18] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[19] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[20] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[21] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[22] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[23] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[24] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[25] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[26] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[27] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[28] = _dist_load_632_meter_zero__out;
    _dist_load_632_meter_output_bus__out[29] = _dist_load_632_meter_zero__out;
    // Generated from the component: Dist Load 632.Meter.PLL.abc to dq.LPF_d
    _dist_load_632_meter_pll_abc_to_dq_lpf_d__previous_filtered_value = _dist_load_632_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _dist_load_632_meter_pll_abc_to_dq_lpf_d__filtered_value = _dist_load_632_meter_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.0001) + _dist_load_632_meter_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_632_meter_pll_abc_to_dq_lpf_d__out = _dist_load_632_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _dist_load_632_meter_pll_abc_to_dq_lpf_d__previous_in = _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Dist Load 632.Meter.PLL.abc to dq.LPF_q
    _dist_load_632_meter_pll_abc_to_dq_lpf_q__previous_filtered_value = _dist_load_632_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _dist_load_632_meter_pll_abc_to_dq_lpf_q__filtered_value = _dist_load_632_meter_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.0001) + _dist_load_632_meter_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_632_meter_pll_abc_to_dq_lpf_q__out = _dist_load_632_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _dist_load_632_meter_pll_abc_to_dq_lpf_q__previous_in = _dist_load_632_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Dist Load 671.Meter.VAn_RMS
    HIL_OutAO(0x401d, (float)_dist_load_671_meter_vln_rms_calc_rms__RMS1);
    // Generated from the component: Dist Load 671.Meter.VBn_RMS
    HIL_OutAO(0x401e, (float)_dist_load_671_meter_vln_rms_calc_rms__RMS2);
    // Generated from the component: Dist Load 671.Meter.VCn_RMS
    HIL_OutAO(0x401f, (float)_dist_load_671_meter_vln_rms_calc_rms__RMS3);
    // Generated from the component: Dist Load 671.Meter.output_bus
    _dist_load_671_meter_output_bus__out[0] = _dist_load_671_meter_van_va1__out;
    _dist_load_671_meter_output_bus__out[1] = _dist_load_671_meter_vbn_va1__out;
    _dist_load_671_meter_output_bus__out[2] = _dist_load_671_meter_vcn_va1__out;
    _dist_load_671_meter_output_bus__out[3] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[4] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[5] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[6] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[7] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[8] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[9] = _dist_load_671_meter_pll_to_hz__out;
    _dist_load_671_meter_output_bus__out[10] = _dist_load_671_meter_vln_rms_calc_rms__RMS1;
    _dist_load_671_meter_output_bus__out[11] = _dist_load_671_meter_vln_rms_calc_rms__RMS2;
    _dist_load_671_meter_output_bus__out[12] = _dist_load_671_meter_vln_rms_calc_rms__RMS3;
    _dist_load_671_meter_output_bus__out[13] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[14] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[15] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[16] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[17] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[18] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[19] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[20] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[21] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[22] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[23] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[24] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[25] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[26] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[27] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[28] = _dist_load_671_meter_zero__out;
    _dist_load_671_meter_output_bus__out[29] = _dist_load_671_meter_zero__out;
    // Generated from the component: Dist Load 671.Meter.PLL.abc to dq.LPF_d
    _dist_load_671_meter_pll_abc_to_dq_lpf_d__previous_filtered_value = _dist_load_671_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _dist_load_671_meter_pll_abc_to_dq_lpf_d__filtered_value = _dist_load_671_meter_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.0001) + _dist_load_671_meter_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_671_meter_pll_abc_to_dq_lpf_d__out = _dist_load_671_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _dist_load_671_meter_pll_abc_to_dq_lpf_d__previous_in = _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Dist Load 671.Meter.PLL.abc to dq.LPF_q
    _dist_load_671_meter_pll_abc_to_dq_lpf_q__previous_filtered_value = _dist_load_671_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _dist_load_671_meter_pll_abc_to_dq_lpf_q__filtered_value = _dist_load_671_meter_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.0001) + _dist_load_671_meter_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _dist_load_671_meter_pll_abc_to_dq_lpf_q__out = _dist_load_671_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _dist_load_671_meter_pll_abc_to_dq_lpf_q__previous_in = _dist_load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Load 634.Meter.VAn_RMS
    HIL_OutAO(0x4021, (float)_load_634_meter_vln_rms_calc_rms__RMS1);
    // Generated from the component: Load 634.Meter.VBn_RMS
    HIL_OutAO(0x4022, (float)_load_634_meter_vln_rms_calc_rms__RMS2);
    // Generated from the component: Load 634.Meter.VCn_RMS
    HIL_OutAO(0x4023, (float)_load_634_meter_vln_rms_calc_rms__RMS3);
    // Generated from the component: Load 634.Meter.output_bus
    _load_634_meter_output_bus__out[0] = _load_634_meter_van_va1__out;
    _load_634_meter_output_bus__out[1] = _load_634_meter_vbn_va1__out;
    _load_634_meter_output_bus__out[2] = _load_634_meter_vcn_va1__out;
    _load_634_meter_output_bus__out[3] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[4] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[5] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[6] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[7] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[8] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[9] = _load_634_meter_pll_to_hz__out;
    _load_634_meter_output_bus__out[10] = _load_634_meter_vln_rms_calc_rms__RMS1;
    _load_634_meter_output_bus__out[11] = _load_634_meter_vln_rms_calc_rms__RMS2;
    _load_634_meter_output_bus__out[12] = _load_634_meter_vln_rms_calc_rms__RMS3;
    _load_634_meter_output_bus__out[13] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[14] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[15] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[16] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[17] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[18] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[19] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[20] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[21] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[22] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[23] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[24] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[25] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[26] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[27] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[28] = _load_634_meter_zero__out;
    _load_634_meter_output_bus__out[29] = _load_634_meter_zero__out;
    // Generated from the component: Load 634.Meter.PLL.abc to dq.LPF_d
    _load_634_meter_pll_abc_to_dq_lpf_d__previous_filtered_value = _load_634_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _load_634_meter_pll_abc_to_dq_lpf_d__filtered_value = _load_634_meter_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.0001) + _load_634_meter_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_634_meter_pll_abc_to_dq_lpf_d__out = _load_634_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _load_634_meter_pll_abc_to_dq_lpf_d__previous_in = _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Load 634.Meter.PLL.abc to dq.LPF_q
    _load_634_meter_pll_abc_to_dq_lpf_q__previous_filtered_value = _load_634_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _load_634_meter_pll_abc_to_dq_lpf_q__filtered_value = _load_634_meter_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.0001) + _load_634_meter_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_634_meter_pll_abc_to_dq_lpf_q__out = _load_634_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _load_634_meter_pll_abc_to_dq_lpf_q__previous_in = _load_634_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Load 671.Meter.VAn_RMS
    HIL_OutAO(0x4025, (float)_load_671_meter_vln_rms_calc_rms__RMS1);
    // Generated from the component: Load 671.Meter.VBn_RMS
    HIL_OutAO(0x4026, (float)_load_671_meter_vln_rms_calc_rms__RMS2);
    // Generated from the component: Load 671.Meter.VCn_RMS
    HIL_OutAO(0x4027, (float)_load_671_meter_vln_rms_calc_rms__RMS3);
    // Generated from the component: Load 671.Meter.output_bus
    _load_671_meter_output_bus__out[0] = _load_671_meter_van_va1__out;
    _load_671_meter_output_bus__out[1] = _load_671_meter_vbn_va1__out;
    _load_671_meter_output_bus__out[2] = _load_671_meter_vcn_va1__out;
    _load_671_meter_output_bus__out[3] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[4] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[5] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[6] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[7] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[8] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[9] = _load_671_meter_pll_to_hz__out;
    _load_671_meter_output_bus__out[10] = _load_671_meter_vln_rms_calc_rms__RMS1;
    _load_671_meter_output_bus__out[11] = _load_671_meter_vln_rms_calc_rms__RMS2;
    _load_671_meter_output_bus__out[12] = _load_671_meter_vln_rms_calc_rms__RMS3;
    _load_671_meter_output_bus__out[13] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[14] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[15] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[16] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[17] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[18] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[19] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[20] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[21] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[22] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[23] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[24] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[25] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[26] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[27] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[28] = _load_671_meter_zero__out;
    _load_671_meter_output_bus__out[29] = _load_671_meter_zero__out;
    // Generated from the component: Load 671.Meter.PLL.abc to dq.LPF_d
    _load_671_meter_pll_abc_to_dq_lpf_d__previous_filtered_value = _load_671_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _load_671_meter_pll_abc_to_dq_lpf_d__filtered_value = _load_671_meter_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.0001) + _load_671_meter_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_671_meter_pll_abc_to_dq_lpf_d__out = _load_671_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _load_671_meter_pll_abc_to_dq_lpf_d__previous_in = _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Load 671.Meter.PLL.abc to dq.LPF_q
    _load_671_meter_pll_abc_to_dq_lpf_q__previous_filtered_value = _load_671_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _load_671_meter_pll_abc_to_dq_lpf_q__filtered_value = _load_671_meter_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.0001) + _load_671_meter_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_671_meter_pll_abc_to_dq_lpf_q__out = _load_671_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _load_671_meter_pll_abc_to_dq_lpf_q__previous_in = _load_671_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Load 675.Meter.VAn_RMS
    HIL_OutAO(0x4029, (float)_load_675_meter_vln_rms_calc_rms__RMS1);
    // Generated from the component: Load 675.Meter.VBn_RMS
    HIL_OutAO(0x402a, (float)_load_675_meter_vln_rms_calc_rms__RMS2);
    // Generated from the component: Load 675.Meter.VCn_RMS
    HIL_OutAO(0x402b, (float)_load_675_meter_vln_rms_calc_rms__RMS3);
    // Generated from the component: Load 675.Meter.output_bus
    _load_675_meter_output_bus__out[0] = _load_675_meter_van_va1__out;
    _load_675_meter_output_bus__out[1] = _load_675_meter_vbn_va1__out;
    _load_675_meter_output_bus__out[2] = _load_675_meter_vcn_va1__out;
    _load_675_meter_output_bus__out[3] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[4] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[5] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[6] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[7] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[8] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[9] = _load_675_meter_pll_to_hz__out;
    _load_675_meter_output_bus__out[10] = _load_675_meter_vln_rms_calc_rms__RMS1;
    _load_675_meter_output_bus__out[11] = _load_675_meter_vln_rms_calc_rms__RMS2;
    _load_675_meter_output_bus__out[12] = _load_675_meter_vln_rms_calc_rms__RMS3;
    _load_675_meter_output_bus__out[13] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[14] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[15] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[16] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[17] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[18] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[19] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[20] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[21] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[22] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[23] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[24] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[25] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[26] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[27] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[28] = _load_675_meter_zero__out;
    _load_675_meter_output_bus__out[29] = _load_675_meter_zero__out;
    // Generated from the component: Load 675.Meter.PLL.abc to dq.LPF_d
    _load_675_meter_pll_abc_to_dq_lpf_d__previous_filtered_value = _load_675_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _load_675_meter_pll_abc_to_dq_lpf_d__filtered_value = _load_675_meter_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.0001) + _load_675_meter_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_675_meter_pll_abc_to_dq_lpf_d__out = _load_675_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _load_675_meter_pll_abc_to_dq_lpf_d__previous_in = _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Load 675.Meter.PLL.abc to dq.LPF_q
    _load_675_meter_pll_abc_to_dq_lpf_q__previous_filtered_value = _load_675_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _load_675_meter_pll_abc_to_dq_lpf_q__filtered_value = _load_675_meter_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.0001) + _load_675_meter_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _load_675_meter_pll_abc_to_dq_lpf_q__out = _load_675_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _load_675_meter_pll_abc_to_dq_lpf_q__previous_in = _load_675_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Rega.Vreg.Auto1.Abs1
    _rega_vreg_auto1_abs1__out = fabs(_rega_vreg_auto1_vsum__out);
    // Generated from the component: Rega.Vreg.Auto1.Sign1
    _rega_vreg_auto1_sign1__out = (_rega_vreg_auto1_vsum__out == 0x0) ? 0 : ((_rega_vreg_auto1_vsum__out > 0x0) ? 1 : -1);
    // Generated from the component: Rega.Vreg.Auto1.Isp_A.Is1
    HIL_OutFloat(137101315, (float) _rega_vreg_auto1_product10__out);
    // Generated from the component: Rega.Vreg.Auto1.Vsec_ins_A.Vs1
    HIL_OutFloat(137101312, (float) _rega_vreg_auto1_product11__out);
    // Generated from the component: Rega.Vreg.Auto1.pu_applied
    HIL_OutAO(0x402e, (float)_rega_vreg_auto1_vsum1__out);
    // Generated from the component: Regb.Vreg.Auto1.Abs1
    _regb_vreg_auto1_abs1__out = fabs(_regb_vreg_auto1_vsum__out);
    // Generated from the component: Regb.Vreg.Auto1.Sign1
    _regb_vreg_auto1_sign1__out = (_regb_vreg_auto1_vsum__out == 0x0) ? 0 : ((_regb_vreg_auto1_vsum__out > 0x0) ? 1 : -1);
    // Generated from the component: Regb.Vreg.Auto1.Isp_A.Is1
    HIL_OutFloat(137101316, (float) _regb_vreg_auto1_product10__out);
    // Generated from the component: Regb.Vreg.Auto1.Vsec_ins_A.Vs1
    HIL_OutFloat(137101313, (float) _regb_vreg_auto1_product11__out);
    // Generated from the component: Regb.Vreg.Auto1.pu_applied
    HIL_OutAO(0x4032, (float)_regb_vreg_auto1_vsum1__out);
    // Generated from the component: Regc.Vreg.Auto1.Abs1
    _regc_vreg_auto1_abs1__out = fabs(_regc_vreg_auto1_vsum__out);
    // Generated from the component: Regc.Vreg.Auto1.Sign1
    _regc_vreg_auto1_sign1__out = (_regc_vreg_auto1_vsum__out == 0x0) ? 0 : ((_regc_vreg_auto1_vsum__out > 0x0) ? 1 : -1);
    // Generated from the component: Regc.Vreg.Auto1.Isp_A.Is1
    HIL_OutFloat(137101317, (float) _regc_vreg_auto1_product10__out);
    // Generated from the component: Regc.Vreg.Auto1.Vsec_ins_A.Vs1
    HIL_OutFloat(137101314, (float) _regc_vreg_auto1_product11__out);
    // Generated from the component: Regc.Vreg.Auto1.pu_applied
    HIL_OutAO(0x4036, (float)_regc_vreg_auto1_vsum1__out);
    // Generated from the component: Source_Meter.IA_RMS
    HIL_OutAO(0x4039, (float)_source_meter_i_rms_calc_rms__RMS1);
    // Generated from the component: Source_Meter.IB_RMS
    HIL_OutAO(0x403a, (float)_source_meter_i_rms_calc_rms__RMS2);
    // Generated from the component: Source_Meter.IC_RMS
    HIL_OutAO(0x403b, (float)_source_meter_i_rms_calc_rms__RMS3);
    // Generated from the component: Source_Meter.Power Meter.POWER
    _source_meter_power_meter_power__Ia = _source_meter_ia_ia1__out;
    _source_meter_power_meter_power__Ib = _source_meter_ib_ia1__out;
    _source_meter_power_meter_power__Ic = _source_meter_ic_ia1__out;
    _source_meter_power_meter_power__IrmsA = _source_meter_i_rms_calc_rms__RMS1;
    _source_meter_power_meter_power__IrmsB = _source_meter_i_rms_calc_rms__RMS2;
    _source_meter_power_meter_power__IrmsC = _source_meter_i_rms_calc_rms__RMS3;
    _source_meter_power_meter_power__Va = _source_meter_van_va1__out;
    _source_meter_power_meter_power__Vb = _source_meter_vbn_va1__out;
    _source_meter_power_meter_power__Vc = _source_meter_vcn_va1__out;
    _source_meter_power_meter_power__VrmsA = _source_meter_vln_rms_calc_rms__RMS1;
    _source_meter_power_meter_power__VrmsB = _source_meter_vln_rms_calc_rms__RMS2;
    _source_meter_power_meter_power__VrmsC = _source_meter_vln_rms_calc_rms__RMS3;
    _source_meter_power_meter_power__dFract = _source_meter_meassm_mode_and_dfract__dFract;
    _source_meter_power_meter_power__mode = _source_meter_meassm_mode_and_dfract__mode;
    _source_meter_power_meter_power__submode = _source_meter_meassm_mode_and_dfract__submode;
    switch (_source_meter_power_meter_power__mode) {
    case 1:
        _source_meter_power_meter_power__VevenSumA = 0.0;
        _source_meter_power_meter_power__VoddSumA = 0.0;
        _source_meter_power_meter_power__VevenSumB = 0.0;
        _source_meter_power_meter_power__VoddSumB = 0.0;
        _source_meter_power_meter_power__VevenSumC = 0.0;
        _source_meter_power_meter_power__VoddSumC = 0.0;
        _source_meter_power_meter_power__IevenSumA = 0.0;
        _source_meter_power_meter_power__IoddSumA = 0.0;
        _source_meter_power_meter_power__IevenSumB = 0.0;
        _source_meter_power_meter_power__IoddSumB = 0.0;
        _source_meter_power_meter_power__IevenSumC = 0.0;
        _source_meter_power_meter_power__IoddSumC = 0.0;
        _source_meter_power_meter_power__PsumA = 0.0;
        _source_meter_power_meter_power__PsumB = 0.0;
        _source_meter_power_meter_power__PsumC = 0.0;
        break ;
    case 2:
        _source_meter_power_meter_power__Pa = _source_meter_power_meter_power__Va * _source_meter_power_meter_power__Ia;
        _source_meter_power_meter_power__Pb = _source_meter_power_meter_power__Vb * _source_meter_power_meter_power__Ib;
        _source_meter_power_meter_power__Pc = _source_meter_power_meter_power__Vc * _source_meter_power_meter_power__Ic;
        _source_meter_power_meter_power__P = _source_meter_power_meter_power__Pa + _source_meter_power_meter_power__Pb + _source_meter_power_meter_power__Pc;
        _source_meter_power_meter_power__Qa = 0;
        _source_meter_power_meter_power__Qb = 0;
        _source_meter_power_meter_power__Qc = 0;
        _source_meter_power_meter_power__Q = _source_meter_power_meter_power__Qa + _source_meter_power_meter_power__Qb + _source_meter_power_meter_power__Qc;
        _source_meter_power_meter_power__Sa = _source_meter_power_meter_power__Pa;
        _source_meter_power_meter_power__Sb = _source_meter_power_meter_power__Pb;
        _source_meter_power_meter_power__Sc = _source_meter_power_meter_power__Pc;
        _source_meter_power_meter_power__S = _source_meter_power_meter_power__Sa + _source_meter_power_meter_power__Sb + _source_meter_power_meter_power__Sc;
        _source_meter_power_meter_power__PFa = 1.0;
        _source_meter_power_meter_power__PFb = 1.0;
        _source_meter_power_meter_power__PFc = 1.0;
        _source_meter_power_meter_power__PF = 1.0;
        break ;
    case 3:
        _source_meter_power_meter_power__PsumA += _source_meter_power_meter_power__dFract * (_source_meter_power_meter_power__Va * _source_meter_power_meter_power__Ia);
        _source_meter_power_meter_power__PsumB += _source_meter_power_meter_power__dFract * (_source_meter_power_meter_power__Vb * _source_meter_power_meter_power__Ib);
        _source_meter_power_meter_power__PsumC += _source_meter_power_meter_power__dFract * (_source_meter_power_meter_power__Vc * _source_meter_power_meter_power__Ic);
        switch (_source_meter_power_meter_power__submode) {
        case 1:
            _source_meter_power_meter_power__VevenSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VevenSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VevenSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IevenSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IevenSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IevenSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            _source_meter_power_meter_power__VoddSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VoddSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VoddSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IoddSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IoddSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IoddSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            break ;
        case 2:
            _source_meter_power_meter_power__VevenSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VevenSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VevenSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IevenSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IevenSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IevenSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            _source_meter_power_meter_power__VoddSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VoddSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VoddSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IoddSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IoddSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IoddSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            break ;
        case 3:
            _source_meter_power_meter_power__VevenSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VevenSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VevenSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IevenSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IevenSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IevenSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            _source_meter_power_meter_power__VoddSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VoddSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VoddSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IoddSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IoddSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IoddSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            break ;
        case 4:
            _source_meter_power_meter_power__VevenSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VevenSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VevenSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IevenSumA += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IevenSumB += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IevenSumC += _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            _source_meter_power_meter_power__VoddSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Va;
            _source_meter_power_meter_power__VoddSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vb;
            _source_meter_power_meter_power__VoddSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Vc;
            _source_meter_power_meter_power__IoddSumA -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ia;
            _source_meter_power_meter_power__IoddSumB -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ib;
            _source_meter_power_meter_power__IoddSumC -= _source_meter_power_meter_power__dFract * _source_meter_power_meter_power__Ic;
            break ;
        }
        break ;
    case 4:
        _source_meter_power_meter_power__Pa = _source_meter_power_meter_power__PsumA;
        _source_meter_power_meter_power__Pb = _source_meter_power_meter_power__PsumB;
        _source_meter_power_meter_power__Pc = _source_meter_power_meter_power__PsumC;
        _source_meter_power_meter_power__P = _source_meter_power_meter_power__Pa + _source_meter_power_meter_power__Pb + _source_meter_power_meter_power__Pc;
        _source_meter_power_meter_power__Sa = _source_meter_power_meter_power__VrmsA * _source_meter_power_meter_power__IrmsA;
        _source_meter_power_meter_power__Sb = _source_meter_power_meter_power__VrmsB * _source_meter_power_meter_power__IrmsB;
        _source_meter_power_meter_power__Sc = _source_meter_power_meter_power__VrmsC * _source_meter_power_meter_power__IrmsC;
        _source_meter_power_meter_power__S = _source_meter_power_meter_power__Sa + _source_meter_power_meter_power__Sb + _source_meter_power_meter_power__Sc;
        _source_meter_power_meter_power__Qa = _source_meter_power_meter_power__Sa * _source_meter_power_meter_power__Sa - _source_meter_power_meter_power__Pa * _source_meter_power_meter_power__Pa;
        if (_source_meter_power_meter_power__Qa < 0.0) {
            _source_meter_power_meter_power__Qa = 0.0;
        }
        else {
            _source_meter_power_meter_power__Qa = sqrt(_source_meter_power_meter_power__Qa);
            if (atan2f((_source_meter_power_meter_power__VoddSumA * _source_meter_power_meter_power__IevenSumA - _source_meter_power_meter_power__IoddSumA * _source_meter_power_meter_power__VevenSumA), (_source_meter_power_meter_power__VevenSumA * _source_meter_power_meter_power__IevenSumA + _source_meter_power_meter_power__VoddSumA * _source_meter_power_meter_power__IoddSumA)) > 0.0) {
                _source_meter_power_meter_power__Qa *= -1;
            }
        }
        _source_meter_power_meter_power__Qb = _source_meter_power_meter_power__Sb * _source_meter_power_meter_power__Sb - _source_meter_power_meter_power__Pb * _source_meter_power_meter_power__Pb;
        if (_source_meter_power_meter_power__Qb < 0.0) {
            _source_meter_power_meter_power__Qb = 0.0;
        }
        else {
            _source_meter_power_meter_power__Qb = sqrt(_source_meter_power_meter_power__Qb);
            if (atan2f((_source_meter_power_meter_power__VoddSumB * _source_meter_power_meter_power__IevenSumB - _source_meter_power_meter_power__IoddSumB * _source_meter_power_meter_power__VevenSumB), (_source_meter_power_meter_power__VevenSumB * _source_meter_power_meter_power__IevenSumB + _source_meter_power_meter_power__VoddSumB * _source_meter_power_meter_power__IoddSumB)) > 0.0) {
                _source_meter_power_meter_power__Qb *= -1;
            }
        }
        _source_meter_power_meter_power__Qc = _source_meter_power_meter_power__Sc * _source_meter_power_meter_power__Sc - _source_meter_power_meter_power__Pc * _source_meter_power_meter_power__Pc;
        if (_source_meter_power_meter_power__Qc < 0.0) {
            _source_meter_power_meter_power__Qc = 0.0;
        }
        else {
            _source_meter_power_meter_power__Qc = sqrt(_source_meter_power_meter_power__Qc);
            if (atan2f((_source_meter_power_meter_power__VoddSumC * _source_meter_power_meter_power__IevenSumC - _source_meter_power_meter_power__IoddSumC * _source_meter_power_meter_power__VevenSumC), (_source_meter_power_meter_power__VevenSumC * _source_meter_power_meter_power__IevenSumC + _source_meter_power_meter_power__VoddSumC * _source_meter_power_meter_power__IoddSumC)) > 0.0) {
                _source_meter_power_meter_power__Qc *= -1;
            }
        }
        _source_meter_power_meter_power__Q = _source_meter_power_meter_power__Qa + _source_meter_power_meter_power__Qb + _source_meter_power_meter_power__Qc;
        if (_source_meter_power_meter_power__Sa > 0) {
            _source_meter_power_meter_power__PFa = _source_meter_power_meter_power__Pa / _source_meter_power_meter_power__Sa;
        }
        else {
            _source_meter_power_meter_power__PFa = 0.0;
        }
        if (_source_meter_power_meter_power__Sb > 0) {
            _source_meter_power_meter_power__PFb = _source_meter_power_meter_power__Pb / _source_meter_power_meter_power__Sb;
        }
        else {
            _source_meter_power_meter_power__PFb = 0.0;
        }
        if (_source_meter_power_meter_power__Sc > 0) {
            _source_meter_power_meter_power__PFc = _source_meter_power_meter_power__Pc / _source_meter_power_meter_power__Sc;
        }
        else {
            _source_meter_power_meter_power__PFc = 0.0;
        }
        if (_source_meter_power_meter_power__S > 0) {
            _source_meter_power_meter_power__PF = _source_meter_power_meter_power__P / _source_meter_power_meter_power__S;
        }
        else {
            _source_meter_power_meter_power__PF = 0.0;
        }
        break ;
    case 5:
        _source_meter_power_meter_power__Pa = _source_meter_power_meter_power__Va * _source_meter_power_meter_power__Ia;
        _source_meter_power_meter_power__Pb = _source_meter_power_meter_power__Vb * _source_meter_power_meter_power__Ib;
        _source_meter_power_meter_power__Pc = _source_meter_power_meter_power__Vc * _source_meter_power_meter_power__Ic;
        _source_meter_power_meter_power__P = _source_meter_power_meter_power__Pa + _source_meter_power_meter_power__Pb + _source_meter_power_meter_power__Pc;
        _source_meter_power_meter_power__Qa = 0;
        _source_meter_power_meter_power__Qb = 0;
        _source_meter_power_meter_power__Qc = 0;
        _source_meter_power_meter_power__Q = 0.0;
        _source_meter_power_meter_power__Sa = 0;
        _source_meter_power_meter_power__Sb = 0;
        _source_meter_power_meter_power__Sc = 0;
        _source_meter_power_meter_power__S = 0;
        _source_meter_power_meter_power__PFa = 0.0;
        _source_meter_power_meter_power__PFb = 0.0;
        _source_meter_power_meter_power__PFc = 0.0;
        _source_meter_power_meter_power__PF = 0.0;
        break ;
    }
    // Generated from the component: Source_Meter.VAn_RMS
    HIL_OutAO(0x404c, (float)_source_meter_vln_rms_calc_rms__RMS1);
    // Generated from the component: Source_Meter.VBn_RMS
    HIL_OutAO(0x404d, (float)_source_meter_vln_rms_calc_rms__RMS2);
    // Generated from the component: Source_Meter.VCn_RMS
    HIL_OutAO(0x404e, (float)_source_meter_vln_rms_calc_rms__RMS3);
    // Generated from the component: Source_Meter.PLL.abc to dq.LPF_d
    _source_meter_pll_abc_to_dq_lpf_d__previous_filtered_value = _source_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _source_meter_pll_abc_to_dq_lpf_d__filtered_value = _source_meter_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.0001) + _source_meter_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _source_meter_pll_abc_to_dq_lpf_d__out = _source_meter_pll_abc_to_dq_lpf_d__filtered_value;
    _source_meter_pll_abc_to_dq_lpf_d__previous_in = _source_meter_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Source_Meter.PLL.abc to dq.LPF_q
    _source_meter_pll_abc_to_dq_lpf_q__previous_filtered_value = _source_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _source_meter_pll_abc_to_dq_lpf_q__filtered_value = _source_meter_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.0001) + _source_meter_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.0001 );
    _source_meter_pll_abc_to_dq_lpf_q__out = _source_meter_pll_abc_to_dq_lpf_q__filtered_value;
    _source_meter_pll_abc_to_dq_lpf_q__previous_in = _source_meter_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Dist Load 632.Meter.Out
    // Generated from the component: Dist Load 632.Meter.TRMd
    // Generated from the component: Dist Load 632.Meter.PLL.normalize
    _dist_load_632_meter_pll_normalize__in1 = _dist_load_632_meter_pll_abc_to_dq_lpf_d__out;
    _dist_load_632_meter_pll_normalize__in2 = _dist_load_632_meter_pll_abc_to_dq_lpf_q__out;
    _dist_load_632_meter_pll_normalize__pk = (powf(_dist_load_632_meter_pll_normalize__in1, 2.0) + powf(_dist_load_632_meter_pll_normalize__in2, 2.0));
    _dist_load_632_meter_pll_normalize__pk = sqrt(_dist_load_632_meter_pll_normalize__pk);
    if (_dist_load_632_meter_pll_normalize__pk < 0.1) {
        _dist_load_632_meter_pll_normalize__in2_pu = _dist_load_632_meter_pll_normalize__in2 / 0.1;
    }
    else {
        _dist_load_632_meter_pll_normalize__in2_pu = _dist_load_632_meter_pll_normalize__in2 / _dist_load_632_meter_pll_normalize__pk;
    }
    // Generated from the component: Dist Load 632.Meter.TRMq
    // Generated from the component: Dist Load 671.Meter.Out
    // Generated from the component: Dist Load 671.Meter.TRMd
    // Generated from the component: Dist Load 671.Meter.PLL.normalize
    _dist_load_671_meter_pll_normalize__in1 = _dist_load_671_meter_pll_abc_to_dq_lpf_d__out;
    _dist_load_671_meter_pll_normalize__in2 = _dist_load_671_meter_pll_abc_to_dq_lpf_q__out;
    _dist_load_671_meter_pll_normalize__pk = (powf(_dist_load_671_meter_pll_normalize__in1, 2.0) + powf(_dist_load_671_meter_pll_normalize__in2, 2.0));
    _dist_load_671_meter_pll_normalize__pk = sqrt(_dist_load_671_meter_pll_normalize__pk);
    if (_dist_load_671_meter_pll_normalize__pk < 0.1) {
        _dist_load_671_meter_pll_normalize__in2_pu = _dist_load_671_meter_pll_normalize__in2 / 0.1;
    }
    else {
        _dist_load_671_meter_pll_normalize__in2_pu = _dist_load_671_meter_pll_normalize__in2 / _dist_load_671_meter_pll_normalize__pk;
    }
    // Generated from the component: Dist Load 671.Meter.TRMq
    // Generated from the component: Load 634.Meter.Out
    // Generated from the component: Load 634.Meter.TRMd
    // Generated from the component: Load 634.Meter.PLL.normalize
    _load_634_meter_pll_normalize__in1 = _load_634_meter_pll_abc_to_dq_lpf_d__out;
    _load_634_meter_pll_normalize__in2 = _load_634_meter_pll_abc_to_dq_lpf_q__out;
    _load_634_meter_pll_normalize__pk = (powf(_load_634_meter_pll_normalize__in1, 2.0) + powf(_load_634_meter_pll_normalize__in2, 2.0));
    _load_634_meter_pll_normalize__pk = sqrt(_load_634_meter_pll_normalize__pk);
    if (_load_634_meter_pll_normalize__pk < 0.1) {
        _load_634_meter_pll_normalize__in2_pu = _load_634_meter_pll_normalize__in2 / 0.1;
    }
    else {
        _load_634_meter_pll_normalize__in2_pu = _load_634_meter_pll_normalize__in2 / _load_634_meter_pll_normalize__pk;
    }
    // Generated from the component: Load 634.Meter.TRMq
    // Generated from the component: Load 671.Meter.Out
    // Generated from the component: Load 671.Meter.TRMd
    // Generated from the component: Load 671.Meter.PLL.normalize
    _load_671_meter_pll_normalize__in1 = _load_671_meter_pll_abc_to_dq_lpf_d__out;
    _load_671_meter_pll_normalize__in2 = _load_671_meter_pll_abc_to_dq_lpf_q__out;
    _load_671_meter_pll_normalize__pk = (powf(_load_671_meter_pll_normalize__in1, 2.0) + powf(_load_671_meter_pll_normalize__in2, 2.0));
    _load_671_meter_pll_normalize__pk = sqrt(_load_671_meter_pll_normalize__pk);
    if (_load_671_meter_pll_normalize__pk < 0.1) {
        _load_671_meter_pll_normalize__in2_pu = _load_671_meter_pll_normalize__in2 / 0.1;
    }
    else {
        _load_671_meter_pll_normalize__in2_pu = _load_671_meter_pll_normalize__in2 / _load_671_meter_pll_normalize__pk;
    }
    // Generated from the component: Load 671.Meter.TRMq
    // Generated from the component: Load 675.Meter.Out
    // Generated from the component: Load 675.Meter.TRMd
    // Generated from the component: Load 675.Meter.PLL.normalize
    _load_675_meter_pll_normalize__in1 = _load_675_meter_pll_abc_to_dq_lpf_d__out;
    _load_675_meter_pll_normalize__in2 = _load_675_meter_pll_abc_to_dq_lpf_q__out;
    _load_675_meter_pll_normalize__pk = (powf(_load_675_meter_pll_normalize__in1, 2.0) + powf(_load_675_meter_pll_normalize__in2, 2.0));
    _load_675_meter_pll_normalize__pk = sqrt(_load_675_meter_pll_normalize__pk);
    if (_load_675_meter_pll_normalize__pk < 0.1) {
        _load_675_meter_pll_normalize__in2_pu = _load_675_meter_pll_normalize__in2 / 0.1;
    }
    else {
        _load_675_meter_pll_normalize__in2_pu = _load_675_meter_pll_normalize__in2 / _load_675_meter_pll_normalize__pk;
    }
    // Generated from the component: Load 675.Meter.TRMq
    // Generated from the component: Rega.Vreg.Auto1.Relational operator1
    _rega_vreg_auto1_relational_operator1__out = (_rega_vreg_auto1_abs1__out > _rega_vreg_auto1_gain1__out) ? 1 : 0;
    // Generated from the component: Rega.Vreg.Auto1.diff
    HIL_OutAO(0x402c, (float)_rega_vreg_auto1_abs1__out);
    // Generated from the component: Rega.Vreg.Auto1.ABcomp
    _rega_vreg_auto1_abcomp__out = 1.0 * _rega_vreg_auto1_sign1__out;
    // Generated from the component: Regb.Vreg.Auto1.Relational operator1
    _regb_vreg_auto1_relational_operator1__out = (_regb_vreg_auto1_abs1__out > _regb_vreg_auto1_gain1__out) ? 1 : 0;
    // Generated from the component: Regb.Vreg.Auto1.diff
    HIL_OutAO(0x4030, (float)_regb_vreg_auto1_abs1__out);
    // Generated from the component: Regb.Vreg.Auto1.ABcomp
    _regb_vreg_auto1_abcomp__out = 1.0 * _regb_vreg_auto1_sign1__out;
    // Generated from the component: Regc.Vreg.Auto1.Relational operator1
    _regc_vreg_auto1_relational_operator1__out = (_regc_vreg_auto1_abs1__out > _regc_vreg_auto1_gain1__out) ? 1 : 0;
    // Generated from the component: Regc.Vreg.Auto1.diff
    HIL_OutAO(0x4034, (float)_regc_vreg_auto1_abs1__out);
    // Generated from the component: Regc.Vreg.Auto1.ABcomp
    _regc_vreg_auto1_abcomp__out = 1.0 * _regc_vreg_auto1_sign1__out;
    // Generated from the component: Source_Meter.POWER_P
    HIL_OutAO(0x403c, (float)_source_meter_power_meter_power__P);
    // Generated from the component: Source_Meter.POWER_PA
    HIL_OutAO(0x403d, (float)_source_meter_power_meter_power__Pa);
    // Generated from the component: Source_Meter.POWER_PB
    HIL_OutAO(0x403e, (float)_source_meter_power_meter_power__Pb);
    // Generated from the component: Source_Meter.POWER_PC
    HIL_OutAO(0x403f, (float)_source_meter_power_meter_power__Pc);
    // Generated from the component: Source_Meter.POWER_PF
    HIL_OutAO(0x4040, (float)_source_meter_power_meter_power__PF);
    // Generated from the component: Source_Meter.POWER_PFA
    HIL_OutAO(0x4041, (float)_source_meter_power_meter_power__PFa);
    // Generated from the component: Source_Meter.POWER_PFB
    HIL_OutAO(0x4042, (float)_source_meter_power_meter_power__PFb);
    // Generated from the component: Source_Meter.POWER_PFC
    HIL_OutAO(0x4043, (float)_source_meter_power_meter_power__PFc);
    // Generated from the component: Source_Meter.POWER_Q
    HIL_OutAO(0x4044, (float)_source_meter_power_meter_power__Q);
    // Generated from the component: Source_Meter.POWER_QA
    HIL_OutAO(0x4045, (float)_source_meter_power_meter_power__Qa);
    // Generated from the component: Source_Meter.POWER_QB
    HIL_OutAO(0x4046, (float)_source_meter_power_meter_power__Qb);
    // Generated from the component: Source_Meter.POWER_QC
    HIL_OutAO(0x4047, (float)_source_meter_power_meter_power__Qc);
    // Generated from the component: Source_Meter.POWER_S
    HIL_OutAO(0x4048, (float)_source_meter_power_meter_power__S);
    // Generated from the component: Source_Meter.POWER_SA
    HIL_OutAO(0x4049, (float)_source_meter_power_meter_power__Sa);
    // Generated from the component: Source_Meter.POWER_SB
    HIL_OutAO(0x404a, (float)_source_meter_power_meter_power__Sb);
    // Generated from the component: Source_Meter.POWER_SC
    HIL_OutAO(0x404b, (float)_source_meter_power_meter_power__Sc);
    // Generated from the component: Source_Meter.extra_output_bus
    _source_meter_extra_output_bus__out[0] = _source_meter_power_meter_power__Pa;
    _source_meter_extra_output_bus__out[1] = _source_meter_power_meter_power__Pb;
    _source_meter_extra_output_bus__out[2] = _source_meter_power_meter_power__Pc;
    _source_meter_extra_output_bus__out[3] = _source_meter_power_meter_power__Qa;
    _source_meter_extra_output_bus__out[4] = _source_meter_power_meter_power__Qb;
    _source_meter_extra_output_bus__out[5] = _source_meter_power_meter_power__Qc;
    _source_meter_extra_output_bus__out[6] = _source_meter_power_meter_power__Sa;
    _source_meter_extra_output_bus__out[7] = _source_meter_power_meter_power__Sb;
    _source_meter_extra_output_bus__out[8] = _source_meter_power_meter_power__Sc;
    _source_meter_extra_output_bus__out[9] = _source_meter_power_meter_power__PFa;
    _source_meter_extra_output_bus__out[10] = _source_meter_power_meter_power__PFb;
    _source_meter_extra_output_bus__out[11] = _source_meter_power_meter_power__PFc;
    // Generated from the component: Source_Meter.output_bus
    _source_meter_output_bus__out[0] = _source_meter_van_va1__out;
    _source_meter_output_bus__out[1] = _source_meter_vbn_va1__out;
    _source_meter_output_bus__out[2] = _source_meter_vcn_va1__out;
    _source_meter_output_bus__out[3] = _source_meter_zero__out;
    _source_meter_output_bus__out[4] = _source_meter_zero__out;
    _source_meter_output_bus__out[5] = _source_meter_zero__out;
    _source_meter_output_bus__out[6] = _source_meter_ia_ia1__out;
    _source_meter_output_bus__out[7] = _source_meter_ib_ia1__out;
    _source_meter_output_bus__out[8] = _source_meter_ic_ia1__out;
    _source_meter_output_bus__out[9] = _source_meter_pll_to_hz__out;
    _source_meter_output_bus__out[10] = _source_meter_vln_rms_calc_rms__RMS1;
    _source_meter_output_bus__out[11] = _source_meter_vln_rms_calc_rms__RMS2;
    _source_meter_output_bus__out[12] = _source_meter_vln_rms_calc_rms__RMS3;
    _source_meter_output_bus__out[13] = _source_meter_zero__out;
    _source_meter_output_bus__out[14] = _source_meter_zero__out;
    _source_meter_output_bus__out[15] = _source_meter_zero__out;
    _source_meter_output_bus__out[16] = _source_meter_zero__out;
    _source_meter_output_bus__out[17] = _source_meter_zero__out;
    _source_meter_output_bus__out[18] = _source_meter_i_rms_calc_rms__RMS1;
    _source_meter_output_bus__out[19] = _source_meter_i_rms_calc_rms__RMS2;
    _source_meter_output_bus__out[20] = _source_meter_i_rms_calc_rms__RMS3;
    _source_meter_output_bus__out[21] = _source_meter_zero__out;
    _source_meter_output_bus__out[22] = _source_meter_power_meter_power__P;
    _source_meter_output_bus__out[23] = _source_meter_power_meter_power__Q;
    _source_meter_output_bus__out[24] = _source_meter_power_meter_power__S;
    _source_meter_output_bus__out[25] = _source_meter_power_meter_power__PF;
    _source_meter_output_bus__out[26] = _source_meter_zero__out;
    _source_meter_output_bus__out[27] = _source_meter_zero__out;
    _source_meter_output_bus__out[28] = _source_meter_zero__out;
    _source_meter_output_bus__out[29] = _source_meter_zero__out;
    // Generated from the component: Source_Meter.TRMd
    // Generated from the component: Source_Meter.PLL.normalize
    _source_meter_pll_normalize__in1 = _source_meter_pll_abc_to_dq_lpf_d__out;
    _source_meter_pll_normalize__in2 = _source_meter_pll_abc_to_dq_lpf_q__out;
    _source_meter_pll_normalize__pk = (powf(_source_meter_pll_normalize__in1, 2.0) + powf(_source_meter_pll_normalize__in2, 2.0));
    _source_meter_pll_normalize__pk = sqrt(_source_meter_pll_normalize__pk);
    if (_source_meter_pll_normalize__pk < 0.1) {
        _source_meter_pll_normalize__in2_pu = _source_meter_pll_normalize__in2 / 0.1;
    }
    else {
        _source_meter_pll_normalize__in2_pu = _source_meter_pll_normalize__in2 / _source_meter_pll_normalize__pk;
    }
    // Generated from the component: Source_Meter.TRMq
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Kd
    _dist_load_632_meter_pll_pid_kd__out = 1.0 * _dist_load_632_meter_pll_normalize__in2_pu;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Ki
    _dist_load_632_meter_pll_pid_ki__out = 3200.0 * _dist_load_632_meter_pll_normalize__in2_pu;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Kp
    _dist_load_632_meter_pll_pid_kp__out = 100.0 * _dist_load_632_meter_pll_normalize__in2_pu;
    // Generated from the component: Dist Load 632.Meter.PLL.term_pk
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Kd
    _dist_load_671_meter_pll_pid_kd__out = 1.0 * _dist_load_671_meter_pll_normalize__in2_pu;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Ki
    _dist_load_671_meter_pll_pid_ki__out = 3200.0 * _dist_load_671_meter_pll_normalize__in2_pu;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Kp
    _dist_load_671_meter_pll_pid_kp__out = 100.0 * _dist_load_671_meter_pll_normalize__in2_pu;
    // Generated from the component: Dist Load 671.Meter.PLL.term_pk
    // Generated from the component: Load 634.Meter.PLL.PID.Kd
    _load_634_meter_pll_pid_kd__out = 1.0 * _load_634_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 634.Meter.PLL.PID.Ki
    _load_634_meter_pll_pid_ki__out = 3200.0 * _load_634_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 634.Meter.PLL.PID.Kp
    _load_634_meter_pll_pid_kp__out = 100.0 * _load_634_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 634.Meter.PLL.term_pk
    // Generated from the component: Load 671.Meter.PLL.PID.Kd
    _load_671_meter_pll_pid_kd__out = 1.0 * _load_671_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 671.Meter.PLL.PID.Ki
    _load_671_meter_pll_pid_ki__out = 3200.0 * _load_671_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 671.Meter.PLL.PID.Kp
    _load_671_meter_pll_pid_kp__out = 100.0 * _load_671_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 671.Meter.PLL.term_pk
    // Generated from the component: Load 675.Meter.PLL.PID.Kd
    _load_675_meter_pll_pid_kd__out = 1.0 * _load_675_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 675.Meter.PLL.PID.Ki
    _load_675_meter_pll_pid_ki__out = 3200.0 * _load_675_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 675.Meter.PLL.PID.Kp
    _load_675_meter_pll_pid_kp__out = 100.0 * _load_675_meter_pll_normalize__in2_pu;
    // Generated from the component: Load 675.Meter.PLL.term_pk
    // Generated from the component: Rega.Vreg.Auto1.Logical operator2
    _rega_vreg_auto1_logical_operator2__out = _rega_vreg_auto1_relational_operator1__out && _rega_vreg_auto1_logical_operator3__out ;
    // Generated from the component: Regb.Vreg.Auto1.Logical operator2
    _regb_vreg_auto1_logical_operator2__out = _regb_vreg_auto1_relational_operator1__out && _regb_vreg_auto1_logical_operator3__out ;
    // Generated from the component: Regc.Vreg.Auto1.Logical operator2
    _regc_vreg_auto1_logical_operator2__out = _regc_vreg_auto1_relational_operator1__out && _regc_vreg_auto1_logical_operator3__out ;
    // Generated from the component: Source_Meter.extra_out
    // Generated from the component: Source_Meter.Out
    // Generated from the component: Source_Meter.PLL.PID.Kd
    _source_meter_pll_pid_kd__out = 1.0 * _source_meter_pll_normalize__in2_pu;
    // Generated from the component: Source_Meter.PLL.PID.Ki
    _source_meter_pll_pid_ki__out = 3200.0 * _source_meter_pll_normalize__in2_pu;
    // Generated from the component: Source_Meter.PLL.PID.Kp
    _source_meter_pll_pid_kp__out = 100.0 * _source_meter_pll_normalize__in2_pu;
    // Generated from the component: Source_Meter.PLL.term_pk
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Sum8
    _dist_load_632_meter_pll_pid_sum8__out = _dist_load_632_meter_pll_pid_kd__out - _dist_load_632_meter_pll_pid_integrator2__out;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Sum8
    _dist_load_671_meter_pll_pid_sum8__out = _dist_load_671_meter_pll_pid_kd__out - _dist_load_671_meter_pll_pid_integrator2__out;
    // Generated from the component: Load 634.Meter.PLL.PID.Sum8
    _load_634_meter_pll_pid_sum8__out = _load_634_meter_pll_pid_kd__out - _load_634_meter_pll_pid_integrator2__out;
    // Generated from the component: Load 671.Meter.PLL.PID.Sum8
    _load_671_meter_pll_pid_sum8__out = _load_671_meter_pll_pid_kd__out - _load_671_meter_pll_pid_integrator2__out;
    // Generated from the component: Load 675.Meter.PLL.PID.Sum8
    _load_675_meter_pll_pid_sum8__out = _load_675_meter_pll_pid_kd__out - _load_675_meter_pll_pid_integrator2__out;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Edge Detection1.Relational operator1
    _rega_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out = (_rega_vreg_auto1_logical_operator2__out > _rega_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out) ? 1 : 0;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Edge Detection1.Relational operator1
    _regb_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out = (_regb_vreg_auto1_logical_operator2__out > _regb_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out) ? 1 : 0;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Edge Detection1.Relational operator1
    _regc_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out = (_regc_vreg_auto1_logical_operator2__out > _regc_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__out) ? 1 : 0;
    // Generated from the component: Source_Meter.PLL.PID.Sum8
    _source_meter_pll_pid_sum8__out = _source_meter_pll_pid_kd__out - _source_meter_pll_pid_integrator2__out;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Gain1
    _dist_load_632_meter_pll_pid_gain1__out = 714.2857 * _dist_load_632_meter_pll_pid_sum8__out;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Gain1
    _dist_load_671_meter_pll_pid_gain1__out = 714.2857 * _dist_load_671_meter_pll_pid_sum8__out;
    // Generated from the component: Load 634.Meter.PLL.PID.Gain1
    _load_634_meter_pll_pid_gain1__out = 714.2857 * _load_634_meter_pll_pid_sum8__out;
    // Generated from the component: Load 671.Meter.PLL.PID.Gain1
    _load_671_meter_pll_pid_gain1__out = 714.2857 * _load_671_meter_pll_pid_sum8__out;
    // Generated from the component: Load 675.Meter.PLL.PID.Gain1
    _load_675_meter_pll_pid_gain1__out = 714.2857 * _load_675_meter_pll_pid_sum8__out;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Signal switch1
    _rega_vreg_auto1_elapsed_time_signal_switch1__out = (_rega_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out < 0.5f) ? _rega_vreg_auto1_elapsed_time_unit_delay1__out : _rega_vreg_auto1_elapsed_time_clock1__out;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Signal switch1
    _regb_vreg_auto1_elapsed_time_signal_switch1__out = (_regb_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out < 0.5f) ? _regb_vreg_auto1_elapsed_time_unit_delay1__out : _regb_vreg_auto1_elapsed_time_clock1__out;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Signal switch1
    _regc_vreg_auto1_elapsed_time_signal_switch1__out = (_regc_vreg_auto1_elapsed_time_edge_detection1_relational_operator1__out < 0.5f) ? _regc_vreg_auto1_elapsed_time_unit_delay1__out : _regc_vreg_auto1_elapsed_time_clock1__out;
    // Generated from the component: Source_Meter.PLL.PID.Gain1
    _source_meter_pll_pid_gain1__out = 714.2857 * _source_meter_pll_pid_sum8__out;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Sum5
    _dist_load_632_meter_pll_pid_sum5__out = _dist_load_632_meter_pll_pid_kp__out + _dist_load_632_meter_pll_pid_gain1__out + _dist_load_632_meter_pll_pid_integrator1__out;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Sum5
    _dist_load_671_meter_pll_pid_sum5__out = _dist_load_671_meter_pll_pid_kp__out + _dist_load_671_meter_pll_pid_gain1__out + _dist_load_671_meter_pll_pid_integrator1__out;
    // Generated from the component: Load 634.Meter.PLL.PID.Sum5
    _load_634_meter_pll_pid_sum5__out = _load_634_meter_pll_pid_kp__out + _load_634_meter_pll_pid_gain1__out + _load_634_meter_pll_pid_integrator1__out;
    // Generated from the component: Load 671.Meter.PLL.PID.Sum5
    _load_671_meter_pll_pid_sum5__out = _load_671_meter_pll_pid_kp__out + _load_671_meter_pll_pid_gain1__out + _load_671_meter_pll_pid_integrator1__out;
    // Generated from the component: Load 675.Meter.PLL.PID.Sum5
    _load_675_meter_pll_pid_sum5__out = _load_675_meter_pll_pid_kp__out + _load_675_meter_pll_pid_gain1__out + _load_675_meter_pll_pid_integrator1__out;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Sum2
    _rega_vreg_auto1_elapsed_time_sum2__out =  - _rega_vreg_auto1_elapsed_time_signal_switch1__out + _rega_vreg_auto1_elapsed_time_clock1__out;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Sum2
    _regb_vreg_auto1_elapsed_time_sum2__out =  - _regb_vreg_auto1_elapsed_time_signal_switch1__out + _regb_vreg_auto1_elapsed_time_clock1__out;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Sum2
    _regc_vreg_auto1_elapsed_time_sum2__out =  - _regc_vreg_auto1_elapsed_time_signal_switch1__out + _regc_vreg_auto1_elapsed_time_clock1__out;
    // Generated from the component: Source_Meter.PLL.PID.Sum5
    _source_meter_pll_pid_sum5__out = _source_meter_pll_pid_kp__out + _source_meter_pll_pid_gain1__out + _source_meter_pll_pid_integrator1__out;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Limit1
    _dist_load_632_meter_pll_pid_limit1__out = MIN(MAX(_dist_load_632_meter_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Limit1
    _dist_load_671_meter_pll_pid_limit1__out = MIN(MAX(_dist_load_671_meter_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Load 634.Meter.PLL.PID.Limit1
    _load_634_meter_pll_pid_limit1__out = MIN(MAX(_load_634_meter_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Load 671.Meter.PLL.PID.Limit1
    _load_671_meter_pll_pid_limit1__out = MIN(MAX(_load_671_meter_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Load 675.Meter.PLL.PID.Limit1
    _load_675_meter_pll_pid_limit1__out = MIN(MAX(_load_675_meter_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Rega.Vreg.Auto1.Relational operator2
    _rega_vreg_auto1_relational_operator2__out = (_rega_vreg_auto1_elapsed_time_sum2__out > _rega_vreg_auto1_regulator_voltage2__out) ? 1 : 0;
    // Generated from the component: Regb.Vreg.Auto1.Relational operator2
    _regb_vreg_auto1_relational_operator2__out = (_regb_vreg_auto1_elapsed_time_sum2__out > _regb_vreg_auto1_regulator_voltage2__out) ? 1 : 0;
    // Generated from the component: Regc.Vreg.Auto1.Relational operator2
    _regc_vreg_auto1_relational_operator2__out = (_regc_vreg_auto1_elapsed_time_sum2__out > _regc_vreg_auto1_regulator_voltage2__out) ? 1 : 0;
    // Generated from the component: Source_Meter.PLL.PID.Limit1
    _source_meter_pll_pid_limit1__out = MIN(MAX(_source_meter_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Sum6
    _dist_load_632_meter_pll_pid_sum6__out =  - _dist_load_632_meter_pll_pid_sum5__out + _dist_load_632_meter_pll_pid_limit1__out;
    // Generated from the component: Dist Load 632.Meter.PLL.Rate Limiter1
    if (_dist_load_632_meter_pll_rate_limiter1__first_step) {
        _dist_load_632_meter_pll_rate_limiter1__out = _dist_load_632_meter_pll_pid_limit1__out;
        _dist_load_632_meter_pll_rate_limiter1__state = _dist_load_632_meter_pll_pid_limit1__out;
    } else {
        _dist_load_632_meter_pll_rate_limiter1__out = _dist_load_632_meter_pll_pid_limit1__out;
        if (_dist_load_632_meter_pll_pid_limit1__out - _dist_load_632_meter_pll_rate_limiter1__state > 0.007539822368615503)
            _dist_load_632_meter_pll_rate_limiter1__out = _dist_load_632_meter_pll_rate_limiter1__state + (0.007539822368615503);
        if (_dist_load_632_meter_pll_pid_limit1__out - _dist_load_632_meter_pll_rate_limiter1__state < -0.007539822368615503)
            _dist_load_632_meter_pll_rate_limiter1__out = _dist_load_632_meter_pll_rate_limiter1__state + (-0.007539822368615503);
    }
    // Generated from the component: Dist Load 632.Meter.PLL.integrator
    _dist_load_632_meter_pll_integrator__in = _dist_load_632_meter_pll_pid_limit1__out;
    _dist_load_632_meter_pll_integrator__out += 0.0001 * _dist_load_632_meter_pll_integrator__in;
    if (_dist_load_632_meter_pll_integrator__in >= 0.0) {
        if (_dist_load_632_meter_pll_integrator__out >= 6.283185307179586) {
            _dist_load_632_meter_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_dist_load_632_meter_pll_integrator__out <= -6.283185307179586) {
            _dist_load_632_meter_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Sum6
    _dist_load_671_meter_pll_pid_sum6__out =  - _dist_load_671_meter_pll_pid_sum5__out + _dist_load_671_meter_pll_pid_limit1__out;
    // Generated from the component: Dist Load 671.Meter.PLL.Rate Limiter1
    if (_dist_load_671_meter_pll_rate_limiter1__first_step) {
        _dist_load_671_meter_pll_rate_limiter1__out = _dist_load_671_meter_pll_pid_limit1__out;
        _dist_load_671_meter_pll_rate_limiter1__state = _dist_load_671_meter_pll_pid_limit1__out;
    } else {
        _dist_load_671_meter_pll_rate_limiter1__out = _dist_load_671_meter_pll_pid_limit1__out;
        if (_dist_load_671_meter_pll_pid_limit1__out - _dist_load_671_meter_pll_rate_limiter1__state > 0.007539822368615503)
            _dist_load_671_meter_pll_rate_limiter1__out = _dist_load_671_meter_pll_rate_limiter1__state + (0.007539822368615503);
        if (_dist_load_671_meter_pll_pid_limit1__out - _dist_load_671_meter_pll_rate_limiter1__state < -0.007539822368615503)
            _dist_load_671_meter_pll_rate_limiter1__out = _dist_load_671_meter_pll_rate_limiter1__state + (-0.007539822368615503);
    }
    // Generated from the component: Dist Load 671.Meter.PLL.integrator
    _dist_load_671_meter_pll_integrator__in = _dist_load_671_meter_pll_pid_limit1__out;
    _dist_load_671_meter_pll_integrator__out += 0.0001 * _dist_load_671_meter_pll_integrator__in;
    if (_dist_load_671_meter_pll_integrator__in >= 0.0) {
        if (_dist_load_671_meter_pll_integrator__out >= 6.283185307179586) {
            _dist_load_671_meter_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_dist_load_671_meter_pll_integrator__out <= -6.283185307179586) {
            _dist_load_671_meter_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Load 634.Meter.PLL.PID.Sum6
    _load_634_meter_pll_pid_sum6__out =  - _load_634_meter_pll_pid_sum5__out + _load_634_meter_pll_pid_limit1__out;
    // Generated from the component: Load 634.Meter.PLL.Rate Limiter1
    if (_load_634_meter_pll_rate_limiter1__first_step) {
        _load_634_meter_pll_rate_limiter1__out = _load_634_meter_pll_pid_limit1__out;
        _load_634_meter_pll_rate_limiter1__state = _load_634_meter_pll_pid_limit1__out;
    } else {
        _load_634_meter_pll_rate_limiter1__out = _load_634_meter_pll_pid_limit1__out;
        if (_load_634_meter_pll_pid_limit1__out - _load_634_meter_pll_rate_limiter1__state > 0.007539822368615503)
            _load_634_meter_pll_rate_limiter1__out = _load_634_meter_pll_rate_limiter1__state + (0.007539822368615503);
        if (_load_634_meter_pll_pid_limit1__out - _load_634_meter_pll_rate_limiter1__state < -0.007539822368615503)
            _load_634_meter_pll_rate_limiter1__out = _load_634_meter_pll_rate_limiter1__state + (-0.007539822368615503);
    }
    // Generated from the component: Load 634.Meter.PLL.integrator
    _load_634_meter_pll_integrator__in = _load_634_meter_pll_pid_limit1__out;
    _load_634_meter_pll_integrator__out += 0.0001 * _load_634_meter_pll_integrator__in;
    if (_load_634_meter_pll_integrator__in >= 0.0) {
        if (_load_634_meter_pll_integrator__out >= 6.283185307179586) {
            _load_634_meter_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_load_634_meter_pll_integrator__out <= -6.283185307179586) {
            _load_634_meter_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Load 671.Meter.PLL.PID.Sum6
    _load_671_meter_pll_pid_sum6__out =  - _load_671_meter_pll_pid_sum5__out + _load_671_meter_pll_pid_limit1__out;
    // Generated from the component: Load 671.Meter.PLL.Rate Limiter1
    if (_load_671_meter_pll_rate_limiter1__first_step) {
        _load_671_meter_pll_rate_limiter1__out = _load_671_meter_pll_pid_limit1__out;
        _load_671_meter_pll_rate_limiter1__state = _load_671_meter_pll_pid_limit1__out;
    } else {
        _load_671_meter_pll_rate_limiter1__out = _load_671_meter_pll_pid_limit1__out;
        if (_load_671_meter_pll_pid_limit1__out - _load_671_meter_pll_rate_limiter1__state > 0.007539822368615503)
            _load_671_meter_pll_rate_limiter1__out = _load_671_meter_pll_rate_limiter1__state + (0.007539822368615503);
        if (_load_671_meter_pll_pid_limit1__out - _load_671_meter_pll_rate_limiter1__state < -0.007539822368615503)
            _load_671_meter_pll_rate_limiter1__out = _load_671_meter_pll_rate_limiter1__state + (-0.007539822368615503);
    }
    // Generated from the component: Load 671.Meter.PLL.integrator
    _load_671_meter_pll_integrator__in = _load_671_meter_pll_pid_limit1__out;
    _load_671_meter_pll_integrator__out += 0.0001 * _load_671_meter_pll_integrator__in;
    if (_load_671_meter_pll_integrator__in >= 0.0) {
        if (_load_671_meter_pll_integrator__out >= 6.283185307179586) {
            _load_671_meter_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_load_671_meter_pll_integrator__out <= -6.283185307179586) {
            _load_671_meter_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Load 675.Meter.PLL.PID.Sum6
    _load_675_meter_pll_pid_sum6__out =  - _load_675_meter_pll_pid_sum5__out + _load_675_meter_pll_pid_limit1__out;
    // Generated from the component: Load 675.Meter.PLL.Rate Limiter1
    if (_load_675_meter_pll_rate_limiter1__first_step) {
        _load_675_meter_pll_rate_limiter1__out = _load_675_meter_pll_pid_limit1__out;
        _load_675_meter_pll_rate_limiter1__state = _load_675_meter_pll_pid_limit1__out;
    } else {
        _load_675_meter_pll_rate_limiter1__out = _load_675_meter_pll_pid_limit1__out;
        if (_load_675_meter_pll_pid_limit1__out - _load_675_meter_pll_rate_limiter1__state > 0.007539822368615503)
            _load_675_meter_pll_rate_limiter1__out = _load_675_meter_pll_rate_limiter1__state + (0.007539822368615503);
        if (_load_675_meter_pll_pid_limit1__out - _load_675_meter_pll_rate_limiter1__state < -0.007539822368615503)
            _load_675_meter_pll_rate_limiter1__out = _load_675_meter_pll_rate_limiter1__state + (-0.007539822368615503);
    }
    // Generated from the component: Load 675.Meter.PLL.integrator
    _load_675_meter_pll_integrator__in = _load_675_meter_pll_pid_limit1__out;
    _load_675_meter_pll_integrator__out += 0.0001 * _load_675_meter_pll_integrator__in;
    if (_load_675_meter_pll_integrator__in >= 0.0) {
        if (_load_675_meter_pll_integrator__out >= 6.283185307179586) {
            _load_675_meter_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_load_675_meter_pll_integrator__out <= -6.283185307179586) {
            _load_675_meter_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Rega.Vreg.Auto1.Logical operator1
    _rega_vreg_auto1_logical_operator1__out = _rega_vreg_auto1_logical_operator2__out && _rega_vreg_auto1_relational_operator2__out ;
    // Generated from the component: Regb.Vreg.Auto1.Logical operator1
    _regb_vreg_auto1_logical_operator1__out = _regb_vreg_auto1_logical_operator2__out && _regb_vreg_auto1_relational_operator2__out ;
    // Generated from the component: Regc.Vreg.Auto1.Logical operator1
    _regc_vreg_auto1_logical_operator1__out = _regc_vreg_auto1_logical_operator2__out && _regc_vreg_auto1_relational_operator2__out ;
    // Generated from the component: Source_Meter.PLL.PID.Sum6
    _source_meter_pll_pid_sum6__out =  - _source_meter_pll_pid_sum5__out + _source_meter_pll_pid_limit1__out;
    // Generated from the component: Source_Meter.PLL.Rate Limiter1
    if (_source_meter_pll_rate_limiter1__first_step) {
        _source_meter_pll_rate_limiter1__out = _source_meter_pll_pid_limit1__out;
        _source_meter_pll_rate_limiter1__state = _source_meter_pll_pid_limit1__out;
    } else {
        _source_meter_pll_rate_limiter1__out = _source_meter_pll_pid_limit1__out;
        if (_source_meter_pll_pid_limit1__out - _source_meter_pll_rate_limiter1__state > 0.007539822368615503)
            _source_meter_pll_rate_limiter1__out = _source_meter_pll_rate_limiter1__state + (0.007539822368615503);
        if (_source_meter_pll_pid_limit1__out - _source_meter_pll_rate_limiter1__state < -0.007539822368615503)
            _source_meter_pll_rate_limiter1__out = _source_meter_pll_rate_limiter1__state + (-0.007539822368615503);
    }
    // Generated from the component: Source_Meter.PLL.integrator
    _source_meter_pll_integrator__in = _source_meter_pll_pid_limit1__out;
    _source_meter_pll_integrator__out += 0.0001 * _source_meter_pll_integrator__in;
    if (_source_meter_pll_integrator__in >= 0.0) {
        if (_source_meter_pll_integrator__out >= 6.283185307179586) {
            _source_meter_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_source_meter_pll_integrator__out <= -6.283185307179586) {
            _source_meter_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Kb
    _dist_load_632_meter_pll_pid_kb__out = 1.0 * _dist_load_632_meter_pll_pid_sum6__out;
    // Generated from the component: Dist Load 632.Meter.PLL.LPF.LPF
    X_UnInt32 _dist_load_632_meter_pll_lpf_lpf__i;
    _dist_load_632_meter_pll_lpf_lpf__a_sum = 0.0f;
    _dist_load_632_meter_pll_lpf_lpf__b_sum = 0.0f;
    _dist_load_632_meter_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_dist_load_632_meter_pll_lpf_lpf__i = 0; _dist_load_632_meter_pll_lpf_lpf__i < 2; _dist_load_632_meter_pll_lpf_lpf__i++) {
        _dist_load_632_meter_pll_lpf_lpf__b_sum += _dist_load_632_meter_pll_lpf_lpf__b_coeff[_dist_load_632_meter_pll_lpf_lpf__i] * _dist_load_632_meter_pll_lpf_lpf__states[_dist_load_632_meter_pll_lpf_lpf__i + 0];
    }
    for (_dist_load_632_meter_pll_lpf_lpf__i = 1; _dist_load_632_meter_pll_lpf_lpf__i > 0; _dist_load_632_meter_pll_lpf_lpf__i--) {
        _dist_load_632_meter_pll_lpf_lpf__a_sum += _dist_load_632_meter_pll_lpf_lpf__a_coeff[_dist_load_632_meter_pll_lpf_lpf__i + 1] * _dist_load_632_meter_pll_lpf_lpf__states[_dist_load_632_meter_pll_lpf_lpf__i];
    }
    _dist_load_632_meter_pll_lpf_lpf__a_sum += _dist_load_632_meter_pll_lpf_lpf__states[0] * _dist_load_632_meter_pll_lpf_lpf__a_coeff[1];
    _dist_load_632_meter_pll_lpf_lpf__delay_line_in = _dist_load_632_meter_pll_rate_limiter1__out - _dist_load_632_meter_pll_lpf_lpf__a_sum;
    _dist_load_632_meter_pll_lpf_lpf__out = _dist_load_632_meter_pll_lpf_lpf__b_sum;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Kb
    _dist_load_671_meter_pll_pid_kb__out = 1.0 * _dist_load_671_meter_pll_pid_sum6__out;
    // Generated from the component: Dist Load 671.Meter.PLL.LPF.LPF
    X_UnInt32 _dist_load_671_meter_pll_lpf_lpf__i;
    _dist_load_671_meter_pll_lpf_lpf__a_sum = 0.0f;
    _dist_load_671_meter_pll_lpf_lpf__b_sum = 0.0f;
    _dist_load_671_meter_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_dist_load_671_meter_pll_lpf_lpf__i = 0; _dist_load_671_meter_pll_lpf_lpf__i < 2; _dist_load_671_meter_pll_lpf_lpf__i++) {
        _dist_load_671_meter_pll_lpf_lpf__b_sum += _dist_load_671_meter_pll_lpf_lpf__b_coeff[_dist_load_671_meter_pll_lpf_lpf__i] * _dist_load_671_meter_pll_lpf_lpf__states[_dist_load_671_meter_pll_lpf_lpf__i + 0];
    }
    for (_dist_load_671_meter_pll_lpf_lpf__i = 1; _dist_load_671_meter_pll_lpf_lpf__i > 0; _dist_load_671_meter_pll_lpf_lpf__i--) {
        _dist_load_671_meter_pll_lpf_lpf__a_sum += _dist_load_671_meter_pll_lpf_lpf__a_coeff[_dist_load_671_meter_pll_lpf_lpf__i + 1] * _dist_load_671_meter_pll_lpf_lpf__states[_dist_load_671_meter_pll_lpf_lpf__i];
    }
    _dist_load_671_meter_pll_lpf_lpf__a_sum += _dist_load_671_meter_pll_lpf_lpf__states[0] * _dist_load_671_meter_pll_lpf_lpf__a_coeff[1];
    _dist_load_671_meter_pll_lpf_lpf__delay_line_in = _dist_load_671_meter_pll_rate_limiter1__out - _dist_load_671_meter_pll_lpf_lpf__a_sum;
    _dist_load_671_meter_pll_lpf_lpf__out = _dist_load_671_meter_pll_lpf_lpf__b_sum;
    // Generated from the component: Load 634.Meter.PLL.PID.Kb
    _load_634_meter_pll_pid_kb__out = 1.0 * _load_634_meter_pll_pid_sum6__out;
    // Generated from the component: Load 634.Meter.PLL.LPF.LPF
    X_UnInt32 _load_634_meter_pll_lpf_lpf__i;
    _load_634_meter_pll_lpf_lpf__a_sum = 0.0f;
    _load_634_meter_pll_lpf_lpf__b_sum = 0.0f;
    _load_634_meter_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_load_634_meter_pll_lpf_lpf__i = 0; _load_634_meter_pll_lpf_lpf__i < 2; _load_634_meter_pll_lpf_lpf__i++) {
        _load_634_meter_pll_lpf_lpf__b_sum += _load_634_meter_pll_lpf_lpf__b_coeff[_load_634_meter_pll_lpf_lpf__i] * _load_634_meter_pll_lpf_lpf__states[_load_634_meter_pll_lpf_lpf__i + 0];
    }
    for (_load_634_meter_pll_lpf_lpf__i = 1; _load_634_meter_pll_lpf_lpf__i > 0; _load_634_meter_pll_lpf_lpf__i--) {
        _load_634_meter_pll_lpf_lpf__a_sum += _load_634_meter_pll_lpf_lpf__a_coeff[_load_634_meter_pll_lpf_lpf__i + 1] * _load_634_meter_pll_lpf_lpf__states[_load_634_meter_pll_lpf_lpf__i];
    }
    _load_634_meter_pll_lpf_lpf__a_sum += _load_634_meter_pll_lpf_lpf__states[0] * _load_634_meter_pll_lpf_lpf__a_coeff[1];
    _load_634_meter_pll_lpf_lpf__delay_line_in = _load_634_meter_pll_rate_limiter1__out - _load_634_meter_pll_lpf_lpf__a_sum;
    _load_634_meter_pll_lpf_lpf__out = _load_634_meter_pll_lpf_lpf__b_sum;
    // Generated from the component: Load 671.Meter.PLL.PID.Kb
    _load_671_meter_pll_pid_kb__out = 1.0 * _load_671_meter_pll_pid_sum6__out;
    // Generated from the component: Load 671.Meter.PLL.LPF.LPF
    X_UnInt32 _load_671_meter_pll_lpf_lpf__i;
    _load_671_meter_pll_lpf_lpf__a_sum = 0.0f;
    _load_671_meter_pll_lpf_lpf__b_sum = 0.0f;
    _load_671_meter_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_load_671_meter_pll_lpf_lpf__i = 0; _load_671_meter_pll_lpf_lpf__i < 2; _load_671_meter_pll_lpf_lpf__i++) {
        _load_671_meter_pll_lpf_lpf__b_sum += _load_671_meter_pll_lpf_lpf__b_coeff[_load_671_meter_pll_lpf_lpf__i] * _load_671_meter_pll_lpf_lpf__states[_load_671_meter_pll_lpf_lpf__i + 0];
    }
    for (_load_671_meter_pll_lpf_lpf__i = 1; _load_671_meter_pll_lpf_lpf__i > 0; _load_671_meter_pll_lpf_lpf__i--) {
        _load_671_meter_pll_lpf_lpf__a_sum += _load_671_meter_pll_lpf_lpf__a_coeff[_load_671_meter_pll_lpf_lpf__i + 1] * _load_671_meter_pll_lpf_lpf__states[_load_671_meter_pll_lpf_lpf__i];
    }
    _load_671_meter_pll_lpf_lpf__a_sum += _load_671_meter_pll_lpf_lpf__states[0] * _load_671_meter_pll_lpf_lpf__a_coeff[1];
    _load_671_meter_pll_lpf_lpf__delay_line_in = _load_671_meter_pll_rate_limiter1__out - _load_671_meter_pll_lpf_lpf__a_sum;
    _load_671_meter_pll_lpf_lpf__out = _load_671_meter_pll_lpf_lpf__b_sum;
    // Generated from the component: Load 675.Meter.PLL.PID.Kb
    _load_675_meter_pll_pid_kb__out = 1.0 * _load_675_meter_pll_pid_sum6__out;
    // Generated from the component: Load 675.Meter.PLL.LPF.LPF
    X_UnInt32 _load_675_meter_pll_lpf_lpf__i;
    _load_675_meter_pll_lpf_lpf__a_sum = 0.0f;
    _load_675_meter_pll_lpf_lpf__b_sum = 0.0f;
    _load_675_meter_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_load_675_meter_pll_lpf_lpf__i = 0; _load_675_meter_pll_lpf_lpf__i < 2; _load_675_meter_pll_lpf_lpf__i++) {
        _load_675_meter_pll_lpf_lpf__b_sum += _load_675_meter_pll_lpf_lpf__b_coeff[_load_675_meter_pll_lpf_lpf__i] * _load_675_meter_pll_lpf_lpf__states[_load_675_meter_pll_lpf_lpf__i + 0];
    }
    for (_load_675_meter_pll_lpf_lpf__i = 1; _load_675_meter_pll_lpf_lpf__i > 0; _load_675_meter_pll_lpf_lpf__i--) {
        _load_675_meter_pll_lpf_lpf__a_sum += _load_675_meter_pll_lpf_lpf__a_coeff[_load_675_meter_pll_lpf_lpf__i + 1] * _load_675_meter_pll_lpf_lpf__states[_load_675_meter_pll_lpf_lpf__i];
    }
    _load_675_meter_pll_lpf_lpf__a_sum += _load_675_meter_pll_lpf_lpf__states[0] * _load_675_meter_pll_lpf_lpf__a_coeff[1];
    _load_675_meter_pll_lpf_lpf__delay_line_in = _load_675_meter_pll_rate_limiter1__out - _load_675_meter_pll_lpf_lpf__a_sum;
    _load_675_meter_pll_lpf_lpf__out = _load_675_meter_pll_lpf_lpf__b_sum;
    // Generated from the component: Rega.Vreg.Auto1.Product2
    _rega_vreg_auto1_product2__out = (_rega_vreg_auto1_abcomp__out * _rega_vreg_auto1_logical_operator1__out);
    // Generated from the component: Regb.Vreg.Auto1.Product2
    _regb_vreg_auto1_product2__out = (_regb_vreg_auto1_abcomp__out * _regb_vreg_auto1_logical_operator1__out);
    // Generated from the component: Regc.Vreg.Auto1.Product2
    _regc_vreg_auto1_product2__out = (_regc_vreg_auto1_abcomp__out * _regc_vreg_auto1_logical_operator1__out);
    // Generated from the component: Source_Meter.PLL.PID.Kb
    _source_meter_pll_pid_kb__out = 1.0 * _source_meter_pll_pid_sum6__out;
    // Generated from the component: Source_Meter.PLL.LPF.LPF
    X_UnInt32 _source_meter_pll_lpf_lpf__i;
    _source_meter_pll_lpf_lpf__a_sum = 0.0f;
    _source_meter_pll_lpf_lpf__b_sum = 0.0f;
    _source_meter_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_source_meter_pll_lpf_lpf__i = 0; _source_meter_pll_lpf_lpf__i < 2; _source_meter_pll_lpf_lpf__i++) {
        _source_meter_pll_lpf_lpf__b_sum += _source_meter_pll_lpf_lpf__b_coeff[_source_meter_pll_lpf_lpf__i] * _source_meter_pll_lpf_lpf__states[_source_meter_pll_lpf_lpf__i + 0];
    }
    for (_source_meter_pll_lpf_lpf__i = 1; _source_meter_pll_lpf_lpf__i > 0; _source_meter_pll_lpf_lpf__i--) {
        _source_meter_pll_lpf_lpf__a_sum += _source_meter_pll_lpf_lpf__a_coeff[_source_meter_pll_lpf_lpf__i + 1] * _source_meter_pll_lpf_lpf__states[_source_meter_pll_lpf_lpf__i];
    }
    _source_meter_pll_lpf_lpf__a_sum += _source_meter_pll_lpf_lpf__states[0] * _source_meter_pll_lpf_lpf__a_coeff[1];
    _source_meter_pll_lpf_lpf__delay_line_in = _source_meter_pll_rate_limiter1__out - _source_meter_pll_lpf_lpf__a_sum;
    _source_meter_pll_lpf_lpf__out = _source_meter_pll_lpf_lpf__b_sum;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Sum7
    _dist_load_632_meter_pll_pid_sum7__out = _dist_load_632_meter_pll_pid_ki__out + _dist_load_632_meter_pll_pid_kb__out;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Sum7
    _dist_load_671_meter_pll_pid_sum7__out = _dist_load_671_meter_pll_pid_ki__out + _dist_load_671_meter_pll_pid_kb__out;
    // Generated from the component: Load 634.Meter.PLL.PID.Sum7
    _load_634_meter_pll_pid_sum7__out = _load_634_meter_pll_pid_ki__out + _load_634_meter_pll_pid_kb__out;
    // Generated from the component: Load 671.Meter.PLL.PID.Sum7
    _load_671_meter_pll_pid_sum7__out = _load_671_meter_pll_pid_ki__out + _load_671_meter_pll_pid_kb__out;
    // Generated from the component: Load 675.Meter.PLL.PID.Sum7
    _load_675_meter_pll_pid_sum7__out = _load_675_meter_pll_pid_ki__out + _load_675_meter_pll_pid_kb__out;
    // Generated from the component: Source_Meter.PLL.PID.Sum7
    _source_meter_pll_pid_sum7__out = _source_meter_pll_pid_ki__out + _source_meter_pll_pid_kb__out;
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Integrator1
    _dist_load_632_meter_pll_pid_integrator1__state += _dist_load_632_meter_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Dist Load 632.Meter.PLL.PID.Integrator2
    _dist_load_632_meter_pll_pid_integrator2__state += _dist_load_632_meter_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Dist Load 632.Meter.PLL.Unit Delay1
    _dist_load_632_meter_pll_unit_delay1__state = _dist_load_632_meter_pll_integrator__out;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Integrator1
    _dist_load_671_meter_pll_pid_integrator1__state += _dist_load_671_meter_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Dist Load 671.Meter.PLL.PID.Integrator2
    _dist_load_671_meter_pll_pid_integrator2__state += _dist_load_671_meter_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Dist Load 671.Meter.PLL.Unit Delay1
    _dist_load_671_meter_pll_unit_delay1__state = _dist_load_671_meter_pll_integrator__out;
    // Generated from the component: Load 634.Meter.PLL.PID.Integrator1
    _load_634_meter_pll_pid_integrator1__state += _load_634_meter_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Load 634.Meter.PLL.PID.Integrator2
    _load_634_meter_pll_pid_integrator2__state += _load_634_meter_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Load 634.Meter.PLL.Unit Delay1
    _load_634_meter_pll_unit_delay1__state = _load_634_meter_pll_integrator__out;
    // Generated from the component: Load 671.Meter.PLL.PID.Integrator1
    _load_671_meter_pll_pid_integrator1__state += _load_671_meter_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Load 671.Meter.PLL.PID.Integrator2
    _load_671_meter_pll_pid_integrator2__state += _load_671_meter_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Load 671.Meter.PLL.Unit Delay1
    _load_671_meter_pll_unit_delay1__state = _load_671_meter_pll_integrator__out;
    // Generated from the component: Load 675.Meter.PLL.PID.Integrator1
    _load_675_meter_pll_pid_integrator1__state += _load_675_meter_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Load 675.Meter.PLL.PID.Integrator2
    _load_675_meter_pll_pid_integrator2__state += _load_675_meter_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Load 675.Meter.PLL.Unit Delay1
    _load_675_meter_pll_unit_delay1__state = _load_675_meter_pll_integrator__out;
    // Generated from the component: Rega.Vreg.Auto1.Edge Detection3.Unit Delay1
    _rega_vreg_auto1_edge_detection3_unit_delay1__state = _rega_vreg_auto1_tap_position__out;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Clock1
    _rega_vreg_auto1_elapsed_time_clock1__state += 0.0001;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Edge Detection1.Unit Delay1
    _rega_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state = _rega_vreg_auto1_logical_operator2__out;
    // Generated from the component: Rega.Vreg.Auto1.Elapsed Time.Unit Delay1
    _rega_vreg_auto1_elapsed_time_unit_delay1__state = _rega_vreg_auto1_elapsed_time_signal_switch1__out;
    // Generated from the component: Rega.Vreg.Auto1.Tap Position
    _rega_vreg_auto1_tap_position__state += _rega_vreg_auto1_product2__out;
    _rega_vreg_auto1_tap_position__state = MIN(_rega_vreg_auto1_tap_position__state, 16.0);
    _rega_vreg_auto1_tap_position__state = MAX(_rega_vreg_auto1_tap_position__state, -16.0);
    // Generated from the component: Regb.Vreg.Auto1.Edge Detection3.Unit Delay1
    _regb_vreg_auto1_edge_detection3_unit_delay1__state = _regb_vreg_auto1_tap_position__out;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Clock1
    _regb_vreg_auto1_elapsed_time_clock1__state += 0.0001;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Edge Detection1.Unit Delay1
    _regb_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state = _regb_vreg_auto1_logical_operator2__out;
    // Generated from the component: Regb.Vreg.Auto1.Elapsed Time.Unit Delay1
    _regb_vreg_auto1_elapsed_time_unit_delay1__state = _regb_vreg_auto1_elapsed_time_signal_switch1__out;
    // Generated from the component: Regb.Vreg.Auto1.Tap Position
    _regb_vreg_auto1_tap_position__state += _regb_vreg_auto1_product2__out;
    _regb_vreg_auto1_tap_position__state = MIN(_regb_vreg_auto1_tap_position__state, 16.0);
    _regb_vreg_auto1_tap_position__state = MAX(_regb_vreg_auto1_tap_position__state, -16.0);
    // Generated from the component: Regc.Vreg.Auto1.Edge Detection3.Unit Delay1
    _regc_vreg_auto1_edge_detection3_unit_delay1__state = _regc_vreg_auto1_tap_position__out;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Clock1
    _regc_vreg_auto1_elapsed_time_clock1__state += 0.0001;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Edge Detection1.Unit Delay1
    _regc_vreg_auto1_elapsed_time_edge_detection1_unit_delay1__state = _regc_vreg_auto1_logical_operator2__out;
    // Generated from the component: Regc.Vreg.Auto1.Elapsed Time.Unit Delay1
    _regc_vreg_auto1_elapsed_time_unit_delay1__state = _regc_vreg_auto1_elapsed_time_signal_switch1__out;
    // Generated from the component: Regc.Vreg.Auto1.Tap Position
    _regc_vreg_auto1_tap_position__state += _regc_vreg_auto1_product2__out;
    _regc_vreg_auto1_tap_position__state = MIN(_regc_vreg_auto1_tap_position__state, 16.0);
    _regc_vreg_auto1_tap_position__state = MAX(_regc_vreg_auto1_tap_position__state, -16.0);
    // Generated from the component: Source_Meter.PLL.PID.Integrator1
    _source_meter_pll_pid_integrator1__state += _source_meter_pll_pid_sum7__out * 0.0001;
    // Generated from the component: Source_Meter.PLL.PID.Integrator2
    _source_meter_pll_pid_integrator2__state += _source_meter_pll_pid_gain1__out * 0.0001;
    // Generated from the component: Source_Meter.PLL.Unit Delay1
    _source_meter_pll_unit_delay1__state = _source_meter_pll_integrator__out;
    // Generated from the component: Dist Load 632.Meter.measSM.mode_and_dFract
    // Generated from the component: Dist Load 671.Meter.measSM.mode_and_dFract
    // Generated from the component: Load 634.Meter.measSM.mode_and_dFract
    // Generated from the component: Load 671.Meter.measSM.mode_and_dFract
    // Generated from the component: Load 675.Meter.measSM.mode_and_dFract
    // Generated from the component: Source_Meter.measSM.mode_and_dFract
    // Generated from the component: Dist Load 632.Meter.VLn_RMS_calc.RMS
    // Generated from the component: Dist Load 671.Meter.VLn_RMS_calc.RMS
    // Generated from the component: Load 634.Meter.VLn_RMS_calc.RMS
    // Generated from the component: Load 671.Meter.VLn_RMS_calc.RMS
    // Generated from the component: Load 675.Meter.VLn_RMS_calc.RMS
    // Generated from the component: Source_Meter.I_RMS_calc.RMS
    // Generated from the component: Source_Meter.VLn_RMS_calc.RMS
    // Generated from the component: Source_Meter.Power Meter.POWER
    // Generated from the component: Dist Load 632.Meter.PLL.normalize
    // Generated from the component: Dist Load 671.Meter.PLL.normalize
    // Generated from the component: Load 634.Meter.PLL.normalize
    // Generated from the component: Load 671.Meter.PLL.normalize
    // Generated from the component: Load 675.Meter.PLL.normalize
    // Generated from the component: Source_Meter.PLL.normalize
    // Generated from the component: Dist Load 632.Meter.PLL.Rate Limiter1
    if (_dist_load_632_meter_pll_pid_limit1__out - _dist_load_632_meter_pll_rate_limiter1__state > 0.007539822368615503)
        _dist_load_632_meter_pll_rate_limiter1__state += (0.007539822368615503);
    else  if (_dist_load_632_meter_pll_pid_limit1__out - _dist_load_632_meter_pll_rate_limiter1__state < -0.007539822368615503)
        _dist_load_632_meter_pll_rate_limiter1__state += (-0.007539822368615503);
    else
        _dist_load_632_meter_pll_rate_limiter1__state = _dist_load_632_meter_pll_pid_limit1__out;
    _dist_load_632_meter_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Dist Load 632.Meter.PLL.integrator
    // Generated from the component: Dist Load 671.Meter.PLL.Rate Limiter1
    if (_dist_load_671_meter_pll_pid_limit1__out - _dist_load_671_meter_pll_rate_limiter1__state > 0.007539822368615503)
        _dist_load_671_meter_pll_rate_limiter1__state += (0.007539822368615503);
    else  if (_dist_load_671_meter_pll_pid_limit1__out - _dist_load_671_meter_pll_rate_limiter1__state < -0.007539822368615503)
        _dist_load_671_meter_pll_rate_limiter1__state += (-0.007539822368615503);
    else
        _dist_load_671_meter_pll_rate_limiter1__state = _dist_load_671_meter_pll_pid_limit1__out;
    _dist_load_671_meter_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Dist Load 671.Meter.PLL.integrator
    // Generated from the component: Load 634.Meter.PLL.Rate Limiter1
    if (_load_634_meter_pll_pid_limit1__out - _load_634_meter_pll_rate_limiter1__state > 0.007539822368615503)
        _load_634_meter_pll_rate_limiter1__state += (0.007539822368615503);
    else  if (_load_634_meter_pll_pid_limit1__out - _load_634_meter_pll_rate_limiter1__state < -0.007539822368615503)
        _load_634_meter_pll_rate_limiter1__state += (-0.007539822368615503);
    else
        _load_634_meter_pll_rate_limiter1__state = _load_634_meter_pll_pid_limit1__out;
    _load_634_meter_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Load 634.Meter.PLL.integrator
    // Generated from the component: Load 671.Meter.PLL.Rate Limiter1
    if (_load_671_meter_pll_pid_limit1__out - _load_671_meter_pll_rate_limiter1__state > 0.007539822368615503)
        _load_671_meter_pll_rate_limiter1__state += (0.007539822368615503);
    else  if (_load_671_meter_pll_pid_limit1__out - _load_671_meter_pll_rate_limiter1__state < -0.007539822368615503)
        _load_671_meter_pll_rate_limiter1__state += (-0.007539822368615503);
    else
        _load_671_meter_pll_rate_limiter1__state = _load_671_meter_pll_pid_limit1__out;
    _load_671_meter_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Load 671.Meter.PLL.integrator
    // Generated from the component: Load 675.Meter.PLL.Rate Limiter1
    if (_load_675_meter_pll_pid_limit1__out - _load_675_meter_pll_rate_limiter1__state > 0.007539822368615503)
        _load_675_meter_pll_rate_limiter1__state += (0.007539822368615503);
    else  if (_load_675_meter_pll_pid_limit1__out - _load_675_meter_pll_rate_limiter1__state < -0.007539822368615503)
        _load_675_meter_pll_rate_limiter1__state += (-0.007539822368615503);
    else
        _load_675_meter_pll_rate_limiter1__state = _load_675_meter_pll_pid_limit1__out;
    _load_675_meter_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Load 675.Meter.PLL.integrator
    // Generated from the component: Source_Meter.PLL.Rate Limiter1
    if (_source_meter_pll_pid_limit1__out - _source_meter_pll_rate_limiter1__state > 0.007539822368615503)
        _source_meter_pll_rate_limiter1__state += (0.007539822368615503);
    else  if (_source_meter_pll_pid_limit1__out - _source_meter_pll_rate_limiter1__state < -0.007539822368615503)
        _source_meter_pll_rate_limiter1__state += (-0.007539822368615503);
    else
        _source_meter_pll_rate_limiter1__state = _source_meter_pll_pid_limit1__out;
    _source_meter_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Source_Meter.PLL.integrator
    // Generated from the component: Dist Load 632.Meter.PLL.LPF.LPF
    for (_dist_load_632_meter_pll_lpf_lpf__i = 1; _dist_load_632_meter_pll_lpf_lpf__i > 0; _dist_load_632_meter_pll_lpf_lpf__i--) {
        _dist_load_632_meter_pll_lpf_lpf__states[_dist_load_632_meter_pll_lpf_lpf__i] = _dist_load_632_meter_pll_lpf_lpf__states[_dist_load_632_meter_pll_lpf_lpf__i - 1];
    }
    _dist_load_632_meter_pll_lpf_lpf__states[0] = _dist_load_632_meter_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Dist Load 671.Meter.PLL.LPF.LPF
    for (_dist_load_671_meter_pll_lpf_lpf__i = 1; _dist_load_671_meter_pll_lpf_lpf__i > 0; _dist_load_671_meter_pll_lpf_lpf__i--) {
        _dist_load_671_meter_pll_lpf_lpf__states[_dist_load_671_meter_pll_lpf_lpf__i] = _dist_load_671_meter_pll_lpf_lpf__states[_dist_load_671_meter_pll_lpf_lpf__i - 1];
    }
    _dist_load_671_meter_pll_lpf_lpf__states[0] = _dist_load_671_meter_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Load 634.Meter.PLL.LPF.LPF
    for (_load_634_meter_pll_lpf_lpf__i = 1; _load_634_meter_pll_lpf_lpf__i > 0; _load_634_meter_pll_lpf_lpf__i--) {
        _load_634_meter_pll_lpf_lpf__states[_load_634_meter_pll_lpf_lpf__i] = _load_634_meter_pll_lpf_lpf__states[_load_634_meter_pll_lpf_lpf__i - 1];
    }
    _load_634_meter_pll_lpf_lpf__states[0] = _load_634_meter_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Load 671.Meter.PLL.LPF.LPF
    for (_load_671_meter_pll_lpf_lpf__i = 1; _load_671_meter_pll_lpf_lpf__i > 0; _load_671_meter_pll_lpf_lpf__i--) {
        _load_671_meter_pll_lpf_lpf__states[_load_671_meter_pll_lpf_lpf__i] = _load_671_meter_pll_lpf_lpf__states[_load_671_meter_pll_lpf_lpf__i - 1];
    }
    _load_671_meter_pll_lpf_lpf__states[0] = _load_671_meter_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Load 675.Meter.PLL.LPF.LPF
    for (_load_675_meter_pll_lpf_lpf__i = 1; _load_675_meter_pll_lpf_lpf__i > 0; _load_675_meter_pll_lpf_lpf__i--) {
        _load_675_meter_pll_lpf_lpf__states[_load_675_meter_pll_lpf_lpf__i] = _load_675_meter_pll_lpf_lpf__states[_load_675_meter_pll_lpf_lpf__i - 1];
    }
    _load_675_meter_pll_lpf_lpf__states[0] = _load_675_meter_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Source_Meter.PLL.LPF.LPF
    for (_source_meter_pll_lpf_lpf__i = 1; _source_meter_pll_lpf_lpf__i > 0; _source_meter_pll_lpf_lpf__i--) {
        _source_meter_pll_lpf_lpf__states[_source_meter_pll_lpf_lpf__i] = _source_meter_pll_lpf_lpf__states[_source_meter_pll_lpf_lpf__i - 1];
    }
    _source_meter_pll_lpf_lpf__states[0] = _source_meter_pll_lpf_lpf__delay_line_in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------