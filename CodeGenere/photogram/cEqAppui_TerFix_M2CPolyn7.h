// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"


class cEqAppui_TerFix_M2CPolyn7: public cElCompiledFonc
{
   public :

      cEqAppui_TerFix_M2CPolyn7();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetPolyn7_State_0_0(double);
      void SetPolyn7_State_1_0(double);
      void SetPolyn7_State_2_0(double);
      void SetScNorm(double);
      void SetXIm(double);
      void SetXTer(double);
      void SetYIm(double);
      void SetYTer(double);
      void SetZTer(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocPolyn7_State_0_0;
      double mLocPolyn7_State_1_0;
      double mLocPolyn7_State_2_0;
      double mLocScNorm;
      double mLocXIm;
      double mLocXTer;
      double mLocYIm;
      double mLocYTer;
      double mLocZTer;
};
