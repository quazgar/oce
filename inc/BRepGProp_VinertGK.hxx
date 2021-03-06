// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_VinertGK_HeaderFile
#define _BRepGProp_VinertGK_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <GProp_GProps.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class BRepGProp_Face;
class gp_Pnt;
class BRepGProp_Domain;
class gp_Pln;


//! Computes the global properties of a geometric solid
//! (3D closed region of space) delimited with :
//! -  a point and a surface
//! -  a plane and a surface
//!
//! The surface can be :
//! -  a surface limited with its parametric values U-V,
//! (naturally restricted)
//! -  a surface limited in U-V space with its boundary
//! curves.
//!
//! The surface's requirements to evaluate the global
//! properties are defined in the template FaceTool class from
//! the package GProp.
//!
//! The adaptive 2D algorithm of Gauss-Kronrod integration of
//! double integral is used.
//!
//! The inner integral is computed along U parameter of
//! surface. The integrand function is encapsulated in the
//! support class UFunction that is defined below.
//!
//! The outer integral is computed along T parameter of a
//! bounding curve. The integrand function is encapsulated in
//! the support class TFunction that is defined below.
class BRepGProp_VinertGK  : public GProp_GProps
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
  Standard_EXPORT BRepGProp_VinertGK();
  
  //! Constructor. Computes the global properties of a region of
  //! 3D space delimited with the naturally restricted surface
  //! and the point VLocation.
  Standard_EXPORT BRepGProp_VinertGK(BRepGProp_Face& theSurface, const gp_Pnt& theLocation, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False);
  
  //! Constructor. Computes the global properties of a region of
  //! 3D space delimited with the naturally restricted surface
  //! and the point VLocation. The inertia is computed with
  //! respect to thePoint.
  Standard_EXPORT BRepGProp_VinertGK(BRepGProp_Face& theSurface, const gp_Pnt& thePoint, const gp_Pnt& theLocation, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False);
  
  //! Constructor. Computes the global properties of a region of
  //! 3D space delimited with the surface bounded by the domain
  //! and the point VLocation.
  Standard_EXPORT BRepGProp_VinertGK(BRepGProp_Face& theSurface, BRepGProp_Domain& theDomain, const gp_Pnt& theLocation, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False);
  
  //! Constructor. Computes the global properties of a region of
  //! 3D space delimited with the surface bounded by the domain
  //! and the point VLocation. The inertia is computed with
  //! respect to thePoint.
  Standard_EXPORT BRepGProp_VinertGK(BRepGProp_Face& theSurface, BRepGProp_Domain& theDomain, const gp_Pnt& thePoint, const gp_Pnt& theLocation, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False);
  
  //! Constructor. Computes the global properties of a region of
  //! 3D space delimited with the naturally restricted surface
  //! and the plane.
  Standard_EXPORT BRepGProp_VinertGK(BRepGProp_Face& theSurface, const gp_Pln& thePlane, const gp_Pnt& theLocation, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False);
  
  //! Constructor. Computes the global properties of a region of
  //! 3D space delimited with the surface bounded by the domain
  //! and the plane.
  Standard_EXPORT BRepGProp_VinertGK(BRepGProp_Face& theSurface, BRepGProp_Domain& theDomain, const gp_Pln& thePlane, const gp_Pnt& theLocation, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False);
  
  //! Sets the vertex that delimit 3D closed region of space.
      void SetLocation (const gp_Pnt& theLocation) ;
  
  //! Computes the global properties of a region of 3D space
  //! delimited with the naturally restricted surface and the
  //! point VLocation.
  Standard_EXPORT   Standard_Real Perform (BRepGProp_Face& theSurface, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False) ;
  
  //! Computes the global properties of a region of 3D space
  //! delimited with the naturally restricted surface and the
  //! point VLocation. The inertia is computed with respect to
  //! thePoint.
  Standard_EXPORT   Standard_Real Perform (BRepGProp_Face& theSurface, const gp_Pnt& thePoint, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False) ;
  
  //! Computes the global properties of a region of 3D space
  //! delimited with the surface bounded by the domain and the
  //! point VLocation.
  Standard_EXPORT   Standard_Real Perform (BRepGProp_Face& theSurface, BRepGProp_Domain& theDomain, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False) ;
  
  //! Computes the global properties of a region of 3D space
  //! delimited with the surface bounded by the domain and the
  //! point VLocation. The inertia is computed with respect to
  //! thePoint.
  Standard_EXPORT   Standard_Real Perform (BRepGProp_Face& theSurface, BRepGProp_Domain& theDomain, const gp_Pnt& thePoint, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False) ;
  
  //! Computes the global properties of a region of 3D space
  //! delimited with the naturally restricted surface and the
  //! plane.
  Standard_EXPORT   Standard_Real Perform (BRepGProp_Face& theSurface, const gp_Pln& thePlane, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False) ;
  
  //! Computes the global properties of a region of 3D space
  //! delimited with the surface bounded by the domain and the
  //! plane.
  Standard_EXPORT   Standard_Real Perform (BRepGProp_Face& theSurface, BRepGProp_Domain& theDomain, const gp_Pln& thePlane, const Standard_Real theTolerance = 0.001, const Standard_Boolean theCGFlag = Standard_False, const Standard_Boolean theIFlag = Standard_False) ;
  
  //! Returns the relative reached computation error.
      Standard_Real GetErrorReached()  const;
  
  //! Returns the absolut reached computation error.
      Standard_Real GetAbsolutError()  const;




protected:





private:

  
  //! Main method for computation of the global properties that
  //! is invoked by each Perform method.
  Standard_EXPORT   Standard_Real PrivatePerform (BRepGProp_Face& theSurface, const Standard_Address thePtrDomain, const Standard_Boolean IsByPoint, const Standard_Address theCoeffs, const Standard_Real theTolerance, const Standard_Boolean theCGFlag, const Standard_Boolean theIFlag) ;


  Standard_Real myErrorReached;
  Standard_Real myAbsolutError;


};


#include <BRepGProp_VinertGK.lxx>





#endif // _BRepGProp_VinertGK_HeaderFile
