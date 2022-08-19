/*==============================================================================
Project: VaLiPro
Theme: LPP Generator
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
==============================================================================*/

//=========================== Problem Parameters =========================
#define PP_N 3												// Space dimension	
#define PP_NUM_OF_RND_INEQUALITIES (2 * PP_N)				// Number of random inequalities		
#define PP_M (2*PP_N + PP_NUM_OF_RND_INEQUALITIES + 1)		// Total number of inequalities
#define PP_ALPHA 200										// Length of hypercube edge
#define PP_THETA (PP_ALPHA/2)								// Radius of large hypersphere
#define PP_RHO (PP_THETA/2)									// Radius of small hypersphere
#define	PP_A_MAX (PP_ALPHA*5)								// Maximal random value for A
#define	PP_B_MAX (PP_ALPHA*50)								// Maximal random value for b
#define	PP_MAX_LIKE 0.6										// Maximal acceptable likeness of equations (must be less then 0.7)
#define	PP_MIN_SHIFT (2*PP_RHO)								// Minimal acceptable shift
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_NUMBER_OF_PROBLEMS 10 // Number of problems to generate and output
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_SETW 8
//#define PP_MATRIX_OUTPUT	
#define PP_FILE_OUTPUT
#define PP_PATH "C:/Users/nikolay/source/repos/nikolay-olkhovskiy/BSF-LPP-PacketGenerator/"
#define PP_LPP_FILE "lpp.txt"