// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HSequenceOfVec2d_HeaderFile
#define _TColgp_HSequenceOfVec2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_HSequenceOfVec2d.hxx>

#include <TColgp_SequenceOfVec2d.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Vec2d;
class TColgp_SequenceOfVec2d;



class TColgp_HSequenceOfVec2d : public MMgt_TShared
{

public:

  
    TColgp_HSequenceOfVec2d();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const gp_Vec2d& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColgp_HSequenceOfVec2d)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const gp_Vec2d& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColgp_HSequenceOfVec2d)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const gp_Vec2d& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfVec2d)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const gp_Vec2d& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfVec2d)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfVec2d) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const gp_Vec2d& anItem) ;
  
  Standard_EXPORT  const  gp_Vec2d& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   gp_Vec2d& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColgp_SequenceOfVec2d& Sequence()  const;
  
      TColgp_SequenceOfVec2d& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfVec2d) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TColgp_HSequenceOfVec2d)

protected:




private: 


  TColgp_SequenceOfVec2d mySequence;


};

#define Item gp_Vec2d
#define Item_hxx <gp_Vec2d.hxx>
#define TheSequence TColgp_SequenceOfVec2d
#define TheSequence_hxx <TColgp_SequenceOfVec2d.hxx>
#define TCollection_HSequence TColgp_HSequenceOfVec2d
#define TCollection_HSequence_hxx <TColgp_HSequenceOfVec2d.hxx>
#define Handle_TCollection_HSequence Handle_TColgp_HSequenceOfVec2d
#define TCollection_HSequence_Type_() TColgp_HSequenceOfVec2d_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TColgp_HSequenceOfVec2d) ShallowCopy(const Handle(TColgp_HSequenceOfVec2d)& me) {
 return me->ShallowCopy();
}



#endif // _TColgp_HSequenceOfVec2d_HeaderFile
