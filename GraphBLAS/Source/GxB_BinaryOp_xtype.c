//------------------------------------------------------------------------------
// GxB_BinaryOp_xtype: return the type of x for z=f(x,y)
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

#include "GB.h"

GrB_Info GxB_BinaryOp_xtype         // return the type of x
(
    GrB_Type *xtype,                // return type of input x
    const GrB_BinaryOp binaryop     // binary operator to query
)
{

    //--------------------------------------------------------------------------
    // check inputs
    //--------------------------------------------------------------------------

    WHERE ("GxB_BinaryOp_xtype (&xtype, binaryop)") ;
    RETURN_IF_NULL (xtype) ;
    RETURN_IF_NULL_OR_UNINITIALIZED (binaryop) ;
    ASSERT_OK (GB_check (binaryop, "binaryop for xtype", 0)) ;

    //--------------------------------------------------------------------------
    // return the xtype
    //--------------------------------------------------------------------------

    (*xtype) = binaryop->xtype ;
    return (REPORT_SUCCESS) ;
}
