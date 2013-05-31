//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri May 31 14:04:12 2013 by ROOT version 5.34/05
// from TTree ntp1/ntp1
// found on file: sandboxRerecoVecbosNtuple_46_1_HiZ.root
//////////////////////////////////////////////////////////

#ifndef ntp1_h
#define ntp1_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class ntp1 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         rhoFastjet;
   Float_t         sigmaFastjet;
   Float_t         rhoJetsFastJet;
   Float_t         rhoJetsCentralNeutralFastJet;
   Float_t         rhoJetsFastJet_nopu;
   Int_t           runNumber;
   ULong64_t       eventNumber;
   Int_t           lumiBlock;
   Int_t           bunchCrossing;
   Int_t           orbitNumber;
   Double_t        beamSpotX;
   Double_t        beamSpotY;
   Double_t        beamSpotZ;
   Int_t           nEle;
   Int_t           chargeEle[5];   //[nEle]
   Float_t         energyEle[5];   //[nEle]
   Float_t         thetaEle[5];   //[nEle]
   Float_t         etaEle[5];   //[nEle]
   Float_t         phiEle[5];   //[nEle]
   Float_t         pxEle[5];   //[nEle]
   Float_t         pyEle[5];   //[nEle]
   Float_t         pzEle[5];   //[nEle]
   Float_t         vertexXEle[5];   //[nEle]
   Float_t         vertexYEle[5];   //[nEle]
   Float_t         vertexZEle[5];   //[nEle]
   Int_t           fiducialFlagsEle[5];   //[nEle]
   Int_t           recoFlagsEle[5];   //[nEle]
   Int_t           energyCorrectionsEle[5];   //[nEle]
   Float_t         correctedEcalEnergyEle[5];   //[nEle]
   Int_t           superClusterIndexEle[5];   //[nEle]
   Int_t           PFsuperClusterIndexEle[5];   //[nEle]
   Int_t           trackIndexEle[5];   //[nEle]
   Int_t           gsfTrackIndexEle[5];   //[nEle]
   Float_t         convDistEle[5];   //[nEle]
   Float_t         convDcotEle[5];   //[nEle]
   Float_t         convRadiusEle[5];   //[nEle]
   Int_t           convTrackIndexEle[5];   //[nEle]
   Int_t           scPixChargeEle[5];   //[nEle]
   Bool_t          hasMatchedConversionEle[5];   //[nEle]
   Int_t           classificationEle[5];   //[nEle]
   Int_t           standardClassificationEle[5];   //[nEle]
   Float_t         fbremEle[5];   //[nEle]
   Int_t           nbremsEle[5];   //[nEle]
   Int_t           ambiguousGsfTracksSizeEle[5];   //[nEle]
   Float_t         hOverEEle[5];   //[nEle]
   Float_t         eSuperClusterOverPEle[5];   //[nEle]
   Float_t         eSeedOverPoutEle[5];   //[nEle]
   Float_t         eEleClusterOverPoutEle[5];   //[nEle]
   Float_t         deltaEtaAtVtxEle[5];   //[nEle]
   Float_t         deltaPhiAtVtxEle[5];   //[nEle]
   Float_t         deltaEtaAtCaloEle[5];   //[nEle]
   Float_t         deltaPhiAtCaloEle[5];   //[nEle]
   Float_t         deltaEtaEleClusterTrackAtCaloEle[5];   //[nEle]
   Float_t         deltaPhiEleClusterTrackAtCaloEle[5];   //[nEle]
   Float_t         dr03TkSumPtEle[5];   //[nEle]
   Float_t         dr03EcalRecHitSumEtEle[5];   //[nEle]
   Float_t         dr03HcalTowerSumEtEle[5];   //[nEle]
   Float_t         dr04TkSumPtEle[5];   //[nEle]
   Float_t         dr04EcalRecHitSumEtEle[5];   //[nEle]
   Float_t         dr04HcalTowerSumEtEle[5];   //[nEle]
   Float_t         scBasedEcalSum03Ele[5];   //[nEle]
   Float_t         scBasedEcalSum04Ele[5];   //[nEle]
   Float_t         eleIdLikelihoodEle[5];   //[nEle]
   Float_t         pflowMVAEle[5];   //[nEle]
   Float_t         mvaidnontrigEle[5];   //[nEle]
   Float_t         mvaidtrigEle[5];   //[nEle]
   Int_t           nSC;
   Int_t           nBCSC[4];   //[nSC]
   Int_t           nCrystalsSC[4];   //[nSC]
   Float_t         rawEnergySC[4];   //[nSC]
   Float_t         energySC[4];   //[nSC]
   Float_t         seedClusterEnergySC[4];   //[nSC]
   Float_t         esEnergySC[4];   //[nSC]
   Float_t         etaSC[4];   //[nSC]
   Float_t         thetaSC[4];   //[nSC]
   Float_t         phiSC[4];   //[nSC]
   Float_t         xPosSC[4];   //[nSC]
   Float_t         yPosSC[4];   //[nSC]
   Float_t         zPosSC[4];   //[nSC]
   Float_t         phiWidthSC[4];   //[nSC]
   Float_t         etaWidthSC[4];   //[nSC]
   Float_t         e3x3SC[4];   //[nSC]
   Float_t         e3x1SC[4];   //[nSC]
   Float_t         e1x3SC[4];   //[nSC]
   Float_t         e4x4SC[4];   //[nSC]
   Float_t         e5x5SC[4];   //[nSC]
   Float_t         eMaxSC[4];   //[nSC]
   Float_t         e2x2SC[4];   //[nSC]
   Float_t         e2ndSC[4];   //[nSC]
   Float_t         e1x5SC[4];   //[nSC]
   Float_t         e2x5MaxSC[4];   //[nSC]
   Float_t         e2x5LeftSC[4];   //[nSC]
   Float_t         e2x5RightSC[4];   //[nSC]
   Float_t         e2x5TopSC[4];   //[nSC]
   Float_t         e2x5BottomSC[4];   //[nSC]
   Float_t         eLeftSC[4];   //[nSC]
   Float_t         eRightSC[4];   //[nSC]
   Float_t         eTopSC[4];   //[nSC]
   Float_t         eBottomSC[4];   //[nSC]
   Float_t         e4SwissCrossSC[4];   //[nSC]
   Float_t         covIEtaIEtaSC[4];   //[nSC]
   Float_t         covIEtaIPhiSC[4];   //[nSC]
   Float_t         covIPhiIPhiSC[4];   //[nSC]
   Float_t         sMajSC[4];   //[nSC]
   Float_t         sMinSC[4];   //[nSC]
   Float_t         alphaSC[4];   //[nSC]
   Float_t         hOverESC[4];   //[nSC]
   Int_t           recoFlagSC[4];   //[nSC]
   Float_t         timeSC[4];   //[nSC]
   Float_t         chi2SC[4];   //[nSC]
   Float_t         seedEnergySC[4];   //[nSC]
   Float_t         seedXSC[4];   //[nSC]
   Float_t         seedYSC[4];   //[nSC]
   Float_t         esEffsIxIxSC[4];   //[nSC]
   Float_t         esEffsIyIySC[4];   //[nSC]
   Float_t         esL1EnergySC[4];   //[nSC]
   Float_t         esL2EnergySC[4];   //[nSC]
   Int_t           esL1StripsSC[4];   //[nSC]
   Int_t           esL2StripsSC[4];   //[nSC]
   Int_t           nBC;
   Float_t         etaBC[4];   //[nBC]
   Float_t         thetaBC[4];   //[nBC]
   Float_t         phiBC[4];   //[nBC]
   Float_t         etaCrystalBC[4];   //[nBC]
   Float_t         phiCrystalBC[4];   //[nBC]
   Int_t           iEtaBC[4];   //[nBC]
   Int_t           iPhiBC[4];   //[nBC]
   Float_t         thetaTiltBC[4];   //[nBC]
   Float_t         phiTiltBC[4];   //[nBC]
   Int_t           indexSCBC[4];   //[nBC]
   Int_t           nGsfTrack;
   Float_t         pxGsfTrack[35];   //[nGsfTrack]
   Float_t         pyGsfTrack[35];   //[nGsfTrack]
   Float_t         pzGsfTrack[35];   //[nGsfTrack]
   Float_t         chargeGsfTrack[35];   //[nGsfTrack]
   Float_t         ptErrorGsfTrack[35];   //[nGsfTrack]
   Float_t         trackValidHitsGsfTrack[35];   //[nGsfTrack]
   Float_t         trackLostHitsGsfTrack[35];   //[nGsfTrack]
   Float_t         trackNormalizedChi2GsfTrack[35];   //[nGsfTrack]
   Int_t           qualityMaskGsfTrack[35];   //[nGsfTrack]
   Float_t         trackVxGsfTrack[35];   //[nGsfTrack]
   Float_t         trackVyGsfTrack[35];   //[nGsfTrack]
   Float_t         trackVzGsfTrack[35];   //[nGsfTrack]
   Float_t         d0GsfTrack[35];   //[nGsfTrack]
   Float_t         d0ErrorGsfTrack[35];   //[nGsfTrack]
   Float_t         dzGsfTrack[35];   //[nGsfTrack]
   Float_t         dzErrorGsfTrack[35];   //[nGsfTrack]
   Int_t           pixelHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           trackerLayersWithMeasurementGsfTrack[35];   //[nGsfTrack]
   Int_t           expInnerLayersGsfTrack[35];   //[nGsfTrack]
   Int_t           numberOfValidPixelBarrelHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           numberOfValidPixelEndcapHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           numberOfValidStripTIBHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           numberOfValidStripTIDHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           numberOfValidStripTOBHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           numberOfValidStripTECHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           numberOfValidMuonHitsGsfTrack[35];   //[nGsfTrack]
   Int_t           chargeModeGsfTrack[35];   //[nGsfTrack]
   Float_t         pxModeGsfTrack[35];   //[nGsfTrack]
   Float_t         pyModeGsfTrack[35];   //[nGsfTrack]
   Float_t         pzModeGsfTrack[35];   //[nGsfTrack]
   Int_t           nPV;
   Float_t         PVxPV[1];   //[nPV]
   Float_t         PVyPV[1];   //[nPV]
   Float_t         PVzPV[1];   //[nPV]
   Float_t         PVErrxPV[1];   //[nPV]
   Float_t         PVErryPV[1];   //[nPV]
   Float_t         PVErrzPV[1];   //[nPV]
   Float_t         SumPtPV[1];   //[nPV]
   Float_t         rhoPV[1];   //[nPV]
   Float_t         ndofPV[1];   //[nPV]
   Float_t         chi2PV[1];   //[nPV]
   Float_t         normChi2PV[1];   //[nPV]
   Float_t         pxChMetPV[1];   //[nPV]
   Float_t         pyChMetPV[1];   //[nPV]
   Float_t         pzChMetPV[1];   //[nPV]
   Int_t           isFakePV[1];   //[nPV]
   Int_t           isValidPV[1];   //[nPV]
   Int_t           trackSizePV[1];   //[nPV]

   // List of branches
   TBranch        *b_rhoFastjet;   //!
   TBranch        *b_sigmaFastjet;   //!
   TBranch        *b_rhoJetsFastJet;   //!
   TBranch        *b_rhoJetsCentralNeutralFastJet;   //!
   TBranch        *b_rhoJetsFastJet_nopu;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_bunchCrossing;   //!
   TBranch        *b_orbitNumber;   //!
   TBranch        *b_beamSpotX;   //!
   TBranch        *b_beamSpotY;   //!
   TBranch        *b_beamSpotZ;   //!
   TBranch        *b_nEle;   //!
   TBranch        *b_chargeEle;   //!
   TBranch        *b_energyEle;   //!
   TBranch        *b_thetaEle;   //!
   TBranch        *b_etaEle;   //!
   TBranch        *b_phiEle;   //!
   TBranch        *b_pxEle;   //!
   TBranch        *b_pyEle;   //!
   TBranch        *b_pzEle;   //!
   TBranch        *b_vertexXEle;   //!
   TBranch        *b_vertexYEle;   //!
   TBranch        *b_vertexZEle;   //!
   TBranch        *b_fiducialFlagsEle;   //!
   TBranch        *b_recoFlagsEle;   //!
   TBranch        *b_energyCorrectionsEle;   //!
   TBranch        *b_correctedEcalEnergyEle;   //!
   TBranch        *b_superClusterIndexEle;   //!
   TBranch        *b_PFsuperClusterIndexEle;   //!
   TBranch        *b_trackIndexEle;   //!
   TBranch        *b_gsfTrackIndexEle;   //!
   TBranch        *b_convDistEle;   //!
   TBranch        *b_convDcotEle;   //!
   TBranch        *b_convRadiusEle;   //!
   TBranch        *b_convTrackIndexEle;   //!
   TBranch        *b_scPixChargeEle;   //!
   TBranch        *b_hasMatchedConversionEle;   //!
   TBranch        *b_classificationEle;   //!
   TBranch        *b_standardClassificationEle;   //!
   TBranch        *b_fbremEle;   //!
   TBranch        *b_nbremsEle;   //!
   TBranch        *b_ambiguousGsfTracksSizeEle;   //!
   TBranch        *b_hOverEEle;   //!
   TBranch        *b_eSuperClusterOverPEle;   //!
   TBranch        *b_eSeedOverPoutEle;   //!
   TBranch        *b_eEleClusterOverPoutEle;   //!
   TBranch        *b_deltaEtaAtVtxEle;   //!
   TBranch        *b_deltaPhiAtVtxEle;   //!
   TBranch        *b_deltaEtaAtCaloEle;   //!
   TBranch        *b_deltaPhiAtCaloEle;   //!
   TBranch        *b_deltaEtaEleClusterTrackAtCaloEle;   //!
   TBranch        *b_deltaPhiEleClusterTrackAtCaloEle;   //!
   TBranch        *b_dr03TkSumPtEle;   //!
   TBranch        *b_dr03EcalRecHitSumEtEle;   //!
   TBranch        *b_dr03HcalTowerSumEtEle;   //!
   TBranch        *b_dr04TkSumPtEle;   //!
   TBranch        *b_dr04EcalRecHitSumEtEle;   //!
   TBranch        *b_dr04HcalTowerSumEtEle;   //!
   TBranch        *b_scBasedEcalSum03Ele;   //!
   TBranch        *b_scBasedEcalSum04Ele;   //!
   TBranch        *b_eleIdLikelihoodEle;   //!
   TBranch        *b_pflowMVAEle;   //!
   TBranch        *b_mvaidnontrigEle;   //!
   TBranch        *b_mvaidtrigEle;   //!
   TBranch        *b_nSC;   //!
   TBranch        *b_nBCSC;   //!
   TBranch        *b_nCrystalsSC;   //!
   TBranch        *b_rawEnergySC;   //!
   TBranch        *b_energySC;   //!
   TBranch        *b_seedClusterEnergySC;   //!
   TBranch        *b_esEnergySC;   //!
   TBranch        *b_etaSC;   //!
   TBranch        *b_thetaSC;   //!
   TBranch        *b_phiSC;   //!
   TBranch        *b_xPosSC;   //!
   TBranch        *b_yPosSC;   //!
   TBranch        *b_zPosSC;   //!
   TBranch        *b_phiWidthSC;   //!
   TBranch        *b_etaWidthSC;   //!
   TBranch        *b_e3x3SC;   //!
   TBranch        *b_e3x1SC;   //!
   TBranch        *b_e1x3SC;   //!
   TBranch        *b_e4x4SC;   //!
   TBranch        *b_e5x5SC;   //!
   TBranch        *b_eMaxSC;   //!
   TBranch        *b_e2x2SC;   //!
   TBranch        *b_e2ndSC;   //!
   TBranch        *b_e1x5SC;   //!
   TBranch        *b_e2x5MaxSC;   //!
   TBranch        *b_e2x5LeftSC;   //!
   TBranch        *b_e2x5RightSC;   //!
   TBranch        *b_e2x5TopSC;   //!
   TBranch        *b_e2x5BottomSC;   //!
   TBranch        *b_eLeftSC;   //!
   TBranch        *b_eRightSC;   //!
   TBranch        *b_eTopSC;   //!
   TBranch        *b_eBottomSC;   //!
   TBranch        *b_e4SwissCrossSC;   //!
   TBranch        *b_covIEtaIEtaSC;   //!
   TBranch        *b_covIEtaIPhiSC;   //!
   TBranch        *b_covIPhiIPhiSC;   //!
   TBranch        *b_sMajSC;   //!
   TBranch        *b_sMinSC;   //!
   TBranch        *b_alphaSC;   //!
   TBranch        *b_hOverESC;   //!
   TBranch        *b_recoFlagSC;   //!
   TBranch        *b_timeSC;   //!
   TBranch        *b_chi2SC;   //!
   TBranch        *b_seedEnergySC;   //!
   TBranch        *b_seedXSC;   //!
   TBranch        *b_seedYSC;   //!
   TBranch        *b_esEffsIxIxSC;   //!
   TBranch        *b_esEffsIyIySC;   //!
   TBranch        *b_esL1EnergySC;   //!
   TBranch        *b_esL2EnergySC;   //!
   TBranch        *b_esL1StripsSC;   //!
   TBranch        *b_esL2StripsSC;   //!
   TBranch        *b_nBC;   //!
   TBranch        *b_etaBC;   //!
   TBranch        *b_thetaBC;   //!
   TBranch        *b_phiBC;   //!
   TBranch        *b_etaCrystalBC;   //!
   TBranch        *b_phiCrystalBC;   //!
   TBranch        *b_iEtaBC;   //!
   TBranch        *b_iPhiBC;   //!
   TBranch        *b_thetaTiltBC;   //!
   TBranch        *b_phiTiltBC;   //!
   TBranch        *b_indexSCBC;   //!
   TBranch        *b_nGsfTrack;   //!
   TBranch        *b_pxGsfTrack;   //!
   TBranch        *b_pyGsfTrack;   //!
   TBranch        *b_pzGsfTrack;   //!
   TBranch        *b_chargeGsfTrack;   //!
   TBranch        *b_ptErrorGsfTrack;   //!
   TBranch        *b_trackValidHitsGsfTrack;   //!
   TBranch        *b_trackLostHitsGsfTrack;   //!
   TBranch        *b_trackNormalizedChi2GsfTrack;   //!
   TBranch        *b_qualityMaskGsfTrack;   //!
   TBranch        *b_trackVxGsfTrack;   //!
   TBranch        *b_trackVyGsfTrack;   //!
   TBranch        *b_trackVzGsfTrack;   //!
   TBranch        *b_d0GsfTrack;   //!
   TBranch        *b_d0ErrorGsfTrack;   //!
   TBranch        *b_dzGsfTrack;   //!
   TBranch        *b_dzErrorGsfTrack;   //!
   TBranch        *b_pixelHitsGsfTrack;   //!
   TBranch        *b_trackerLayersWithMeasurementGsfTrack;   //!
   TBranch        *b_expInnerLayersGsfTrack;   //!
   TBranch        *b_numberOfValidPixelBarrelHitsGsfTrack;   //!
   TBranch        *b_numberOfValidPixelEndcapHitsGsfTrack;   //!
   TBranch        *b_numberOfValidStripTIBHitsGsfTrack;   //!
   TBranch        *b_numberOfValidStripTIDHitsGsfTrack;   //!
   TBranch        *b_numberOfValidStripTOBHitsGsfTrack;   //!
   TBranch        *b_numberOfValidStripTECHitsGsfTrack;   //!
   TBranch        *b_numberOfValidMuonHitsGsfTrack;   //!
   TBranch        *b_chargeModeGsfTrack;   //!
   TBranch        *b_pxModeGsfTrack;   //!
   TBranch        *b_pyModeGsfTrack;   //!
   TBranch        *b_pzModeGsfTrack;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVxPV;   //!
   TBranch        *b_PVyPV;   //!
   TBranch        *b_PVzPV;   //!
   TBranch        *b_PVErrxPV;   //!
   TBranch        *b_PVErryPV;   //!
   TBranch        *b_PVErrzPV;   //!
   TBranch        *b_SumPtPV;   //!
   TBranch        *b_rhoPV;   //!
   TBranch        *b_ndofPV;   //!
   TBranch        *b_chi2PV;   //!
   TBranch        *b_normChi2PV;   //!
   TBranch        *b_pxChMetPV;   //!
   TBranch        *b_pyChMetPV;   //!
   TBranch        *b_pzChMetPV;   //!
   TBranch        *b_isFakePV;   //!
   TBranch        *b_isValidPV;   //!
   TBranch        *b_trackSizePV;   //!

   ntp1(TTree *tree=0);
   virtual ~ntp1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ntp1_cxx
ntp1::ntp1(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("sandboxRerecoVecbosNtuple_46_1_HiZ.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("sandboxRerecoVecbosNtuple_46_1_HiZ.root");
      }
      f->GetObject("ntp1",tree);

   }
   Init(tree);
}

ntp1::~ntp1()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ntp1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ntp1::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ntp1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("rhoFastjet", &rhoFastjet, &b_rhoFastjet);
   fChain->SetBranchAddress("sigmaFastjet", &sigmaFastjet, &b_sigmaFastjet);
   fChain->SetBranchAddress("rhoJetsFastJet", &rhoJetsFastJet, &b_rhoJetsFastJet);
   fChain->SetBranchAddress("rhoJetsCentralNeutralFastJet", &rhoJetsCentralNeutralFastJet, &b_rhoJetsCentralNeutralFastJet);
   fChain->SetBranchAddress("rhoJetsFastJet_nopu", &rhoJetsFastJet_nopu, &b_rhoJetsFastJet_nopu);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("bunchCrossing", &bunchCrossing, &b_bunchCrossing);
   fChain->SetBranchAddress("orbitNumber", &orbitNumber, &b_orbitNumber);
   fChain->SetBranchAddress("beamSpotX", &beamSpotX, &b_beamSpotX);
   fChain->SetBranchAddress("beamSpotY", &beamSpotY, &b_beamSpotY);
   fChain->SetBranchAddress("beamSpotZ", &beamSpotZ, &b_beamSpotZ);
   fChain->SetBranchAddress("nEle", &nEle, &b_nEle);
   fChain->SetBranchAddress("chargeEle", chargeEle, &b_chargeEle);
   fChain->SetBranchAddress("energyEle", energyEle, &b_energyEle);
   fChain->SetBranchAddress("thetaEle", thetaEle, &b_thetaEle);
   fChain->SetBranchAddress("etaEle", etaEle, &b_etaEle);
   fChain->SetBranchAddress("phiEle", phiEle, &b_phiEle);
   fChain->SetBranchAddress("pxEle", pxEle, &b_pxEle);
   fChain->SetBranchAddress("pyEle", pyEle, &b_pyEle);
   fChain->SetBranchAddress("pzEle", pzEle, &b_pzEle);
   fChain->SetBranchAddress("vertexXEle", vertexXEle, &b_vertexXEle);
   fChain->SetBranchAddress("vertexYEle", vertexYEle, &b_vertexYEle);
   fChain->SetBranchAddress("vertexZEle", vertexZEle, &b_vertexZEle);
   fChain->SetBranchAddress("fiducialFlagsEle", fiducialFlagsEle, &b_fiducialFlagsEle);
   fChain->SetBranchAddress("recoFlagsEle", recoFlagsEle, &b_recoFlagsEle);
   fChain->SetBranchAddress("energyCorrectionsEle", energyCorrectionsEle, &b_energyCorrectionsEle);
   fChain->SetBranchAddress("correctedEcalEnergyEle", correctedEcalEnergyEle, &b_correctedEcalEnergyEle);
   fChain->SetBranchAddress("superClusterIndexEle", superClusterIndexEle, &b_superClusterIndexEle);
   fChain->SetBranchAddress("PFsuperClusterIndexEle", PFsuperClusterIndexEle, &b_PFsuperClusterIndexEle);
   fChain->SetBranchAddress("trackIndexEle", trackIndexEle, &b_trackIndexEle);
   fChain->SetBranchAddress("gsfTrackIndexEle", gsfTrackIndexEle, &b_gsfTrackIndexEle);
   fChain->SetBranchAddress("convDistEle", convDistEle, &b_convDistEle);
   fChain->SetBranchAddress("convDcotEle", convDcotEle, &b_convDcotEle);
   fChain->SetBranchAddress("convRadiusEle", convRadiusEle, &b_convRadiusEle);
   fChain->SetBranchAddress("convTrackIndexEle", convTrackIndexEle, &b_convTrackIndexEle);
   fChain->SetBranchAddress("scPixChargeEle", scPixChargeEle, &b_scPixChargeEle);
   fChain->SetBranchAddress("hasMatchedConversionEle", hasMatchedConversionEle, &b_hasMatchedConversionEle);
   fChain->SetBranchAddress("classificationEle", classificationEle, &b_classificationEle);
   fChain->SetBranchAddress("standardClassificationEle", standardClassificationEle, &b_standardClassificationEle);
   fChain->SetBranchAddress("fbremEle", fbremEle, &b_fbremEle);
   fChain->SetBranchAddress("nbremsEle", nbremsEle, &b_nbremsEle);
   fChain->SetBranchAddress("ambiguousGsfTracksSizeEle", ambiguousGsfTracksSizeEle, &b_ambiguousGsfTracksSizeEle);
   fChain->SetBranchAddress("hOverEEle", hOverEEle, &b_hOverEEle);
   fChain->SetBranchAddress("eSuperClusterOverPEle", eSuperClusterOverPEle, &b_eSuperClusterOverPEle);
   fChain->SetBranchAddress("eSeedOverPoutEle", eSeedOverPoutEle, &b_eSeedOverPoutEle);
   fChain->SetBranchAddress("eEleClusterOverPoutEle", eEleClusterOverPoutEle, &b_eEleClusterOverPoutEle);
   fChain->SetBranchAddress("deltaEtaAtVtxEle", deltaEtaAtVtxEle, &b_deltaEtaAtVtxEle);
   fChain->SetBranchAddress("deltaPhiAtVtxEle", deltaPhiAtVtxEle, &b_deltaPhiAtVtxEle);
   fChain->SetBranchAddress("deltaEtaAtCaloEle", deltaEtaAtCaloEle, &b_deltaEtaAtCaloEle);
   fChain->SetBranchAddress("deltaPhiAtCaloEle", deltaPhiAtCaloEle, &b_deltaPhiAtCaloEle);
   fChain->SetBranchAddress("deltaEtaEleClusterTrackAtCaloEle", deltaEtaEleClusterTrackAtCaloEle, &b_deltaEtaEleClusterTrackAtCaloEle);
   fChain->SetBranchAddress("deltaPhiEleClusterTrackAtCaloEle", deltaPhiEleClusterTrackAtCaloEle, &b_deltaPhiEleClusterTrackAtCaloEle);
   fChain->SetBranchAddress("dr03TkSumPtEle", dr03TkSumPtEle, &b_dr03TkSumPtEle);
   fChain->SetBranchAddress("dr03EcalRecHitSumEtEle", dr03EcalRecHitSumEtEle, &b_dr03EcalRecHitSumEtEle);
   fChain->SetBranchAddress("dr03HcalTowerSumEtEle", dr03HcalTowerSumEtEle, &b_dr03HcalTowerSumEtEle);
   fChain->SetBranchAddress("dr04TkSumPtEle", dr04TkSumPtEle, &b_dr04TkSumPtEle);
   fChain->SetBranchAddress("dr04EcalRecHitSumEtEle", dr04EcalRecHitSumEtEle, &b_dr04EcalRecHitSumEtEle);
   fChain->SetBranchAddress("dr04HcalTowerSumEtEle", dr04HcalTowerSumEtEle, &b_dr04HcalTowerSumEtEle);
   fChain->SetBranchAddress("scBasedEcalSum03Ele", scBasedEcalSum03Ele, &b_scBasedEcalSum03Ele);
   fChain->SetBranchAddress("scBasedEcalSum04Ele", scBasedEcalSum04Ele, &b_scBasedEcalSum04Ele);
   fChain->SetBranchAddress("eleIdLikelihoodEle", eleIdLikelihoodEle, &b_eleIdLikelihoodEle);
   fChain->SetBranchAddress("pflowMVAEle", pflowMVAEle, &b_pflowMVAEle);
   fChain->SetBranchAddress("mvaidnontrigEle", mvaidnontrigEle, &b_mvaidnontrigEle);
   fChain->SetBranchAddress("mvaidtrigEle", mvaidtrigEle, &b_mvaidtrigEle);
   fChain->SetBranchAddress("nSC", &nSC, &b_nSC);
   fChain->SetBranchAddress("nBCSC", nBCSC, &b_nBCSC);
   fChain->SetBranchAddress("nCrystalsSC", nCrystalsSC, &b_nCrystalsSC);
   fChain->SetBranchAddress("rawEnergySC", rawEnergySC, &b_rawEnergySC);
   fChain->SetBranchAddress("energySC", energySC, &b_energySC);
   fChain->SetBranchAddress("seedClusterEnergySC", seedClusterEnergySC, &b_seedClusterEnergySC);
   fChain->SetBranchAddress("esEnergySC", esEnergySC, &b_esEnergySC);
   fChain->SetBranchAddress("etaSC", etaSC, &b_etaSC);
   fChain->SetBranchAddress("thetaSC", thetaSC, &b_thetaSC);
   fChain->SetBranchAddress("phiSC", phiSC, &b_phiSC);
   fChain->SetBranchAddress("xPosSC", xPosSC, &b_xPosSC);
   fChain->SetBranchAddress("yPosSC", yPosSC, &b_yPosSC);
   fChain->SetBranchAddress("zPosSC", zPosSC, &b_zPosSC);
   fChain->SetBranchAddress("phiWidthSC", phiWidthSC, &b_phiWidthSC);
   fChain->SetBranchAddress("etaWidthSC", etaWidthSC, &b_etaWidthSC);
   fChain->SetBranchAddress("e3x3SC", e3x3SC, &b_e3x3SC);
   fChain->SetBranchAddress("e3x1SC", e3x1SC, &b_e3x1SC);
   fChain->SetBranchAddress("e1x3SC", e1x3SC, &b_e1x3SC);
   fChain->SetBranchAddress("e4x4SC", e4x4SC, &b_e4x4SC);
   fChain->SetBranchAddress("e5x5SC", e5x5SC, &b_e5x5SC);
   fChain->SetBranchAddress("eMaxSC", eMaxSC, &b_eMaxSC);
   fChain->SetBranchAddress("e2x2SC", e2x2SC, &b_e2x2SC);
   fChain->SetBranchAddress("e2ndSC", e2ndSC, &b_e2ndSC);
   fChain->SetBranchAddress("e1x5SC", e1x5SC, &b_e1x5SC);
   fChain->SetBranchAddress("e2x5MaxSC", e2x5MaxSC, &b_e2x5MaxSC);
   fChain->SetBranchAddress("e2x5LeftSC", e2x5LeftSC, &b_e2x5LeftSC);
   fChain->SetBranchAddress("e2x5RightSC", e2x5RightSC, &b_e2x5RightSC);
   fChain->SetBranchAddress("e2x5TopSC", e2x5TopSC, &b_e2x5TopSC);
   fChain->SetBranchAddress("e2x5BottomSC", e2x5BottomSC, &b_e2x5BottomSC);
   fChain->SetBranchAddress("eLeftSC", eLeftSC, &b_eLeftSC);
   fChain->SetBranchAddress("eRightSC", eRightSC, &b_eRightSC);
   fChain->SetBranchAddress("eTopSC", eTopSC, &b_eTopSC);
   fChain->SetBranchAddress("eBottomSC", eBottomSC, &b_eBottomSC);
   fChain->SetBranchAddress("e4SwissCrossSC", e4SwissCrossSC, &b_e4SwissCrossSC);
   fChain->SetBranchAddress("covIEtaIEtaSC", covIEtaIEtaSC, &b_covIEtaIEtaSC);
   fChain->SetBranchAddress("covIEtaIPhiSC", covIEtaIPhiSC, &b_covIEtaIPhiSC);
   fChain->SetBranchAddress("covIPhiIPhiSC", covIPhiIPhiSC, &b_covIPhiIPhiSC);
   fChain->SetBranchAddress("sMajSC", sMajSC, &b_sMajSC);
   fChain->SetBranchAddress("sMinSC", sMinSC, &b_sMinSC);
   fChain->SetBranchAddress("alphaSC", alphaSC, &b_alphaSC);
   fChain->SetBranchAddress("hOverESC", hOverESC, &b_hOverESC);
   fChain->SetBranchAddress("recoFlagSC", recoFlagSC, &b_recoFlagSC);
   fChain->SetBranchAddress("timeSC", timeSC, &b_timeSC);
   fChain->SetBranchAddress("chi2SC", chi2SC, &b_chi2SC);
   fChain->SetBranchAddress("seedEnergySC", seedEnergySC, &b_seedEnergySC);
   fChain->SetBranchAddress("seedXSC", seedXSC, &b_seedXSC);
   fChain->SetBranchAddress("seedYSC", seedYSC, &b_seedYSC);
   fChain->SetBranchAddress("esEffsIxIxSC", esEffsIxIxSC, &b_esEffsIxIxSC);
   fChain->SetBranchAddress("esEffsIyIySC", esEffsIyIySC, &b_esEffsIyIySC);
   fChain->SetBranchAddress("esL1EnergySC", esL1EnergySC, &b_esL1EnergySC);
   fChain->SetBranchAddress("esL2EnergySC", esL2EnergySC, &b_esL2EnergySC);
   fChain->SetBranchAddress("esL1StripsSC", esL1StripsSC, &b_esL1StripsSC);
   fChain->SetBranchAddress("esL2StripsSC", esL2StripsSC, &b_esL2StripsSC);
   fChain->SetBranchAddress("nBC", &nBC, &b_nBC);
   fChain->SetBranchAddress("etaBC", etaBC, &b_etaBC);
   fChain->SetBranchAddress("thetaBC", thetaBC, &b_thetaBC);
   fChain->SetBranchAddress("phiBC", phiBC, &b_phiBC);
   fChain->SetBranchAddress("etaCrystalBC", etaCrystalBC, &b_etaCrystalBC);
   fChain->SetBranchAddress("phiCrystalBC", phiCrystalBC, &b_phiCrystalBC);
   fChain->SetBranchAddress("iEtaBC", iEtaBC, &b_iEtaBC);
   fChain->SetBranchAddress("iPhiBC", iPhiBC, &b_iPhiBC);
   fChain->SetBranchAddress("thetaTiltBC", thetaTiltBC, &b_thetaTiltBC);
   fChain->SetBranchAddress("phiTiltBC", phiTiltBC, &b_phiTiltBC);
   fChain->SetBranchAddress("indexSCBC", indexSCBC, &b_indexSCBC);
   fChain->SetBranchAddress("nGsfTrack", &nGsfTrack, &b_nGsfTrack);
   fChain->SetBranchAddress("pxGsfTrack", pxGsfTrack, &b_pxGsfTrack);
   fChain->SetBranchAddress("pyGsfTrack", pyGsfTrack, &b_pyGsfTrack);
   fChain->SetBranchAddress("pzGsfTrack", pzGsfTrack, &b_pzGsfTrack);
   fChain->SetBranchAddress("chargeGsfTrack", chargeGsfTrack, &b_chargeGsfTrack);
   fChain->SetBranchAddress("ptErrorGsfTrack", ptErrorGsfTrack, &b_ptErrorGsfTrack);
   fChain->SetBranchAddress("trackValidHitsGsfTrack", trackValidHitsGsfTrack, &b_trackValidHitsGsfTrack);
   fChain->SetBranchAddress("trackLostHitsGsfTrack", trackLostHitsGsfTrack, &b_trackLostHitsGsfTrack);
   fChain->SetBranchAddress("trackNormalizedChi2GsfTrack", trackNormalizedChi2GsfTrack, &b_trackNormalizedChi2GsfTrack);
   fChain->SetBranchAddress("qualityMaskGsfTrack", qualityMaskGsfTrack, &b_qualityMaskGsfTrack);
   fChain->SetBranchAddress("trackVxGsfTrack", trackVxGsfTrack, &b_trackVxGsfTrack);
   fChain->SetBranchAddress("trackVyGsfTrack", trackVyGsfTrack, &b_trackVyGsfTrack);
   fChain->SetBranchAddress("trackVzGsfTrack", trackVzGsfTrack, &b_trackVzGsfTrack);
   fChain->SetBranchAddress("d0GsfTrack", d0GsfTrack, &b_d0GsfTrack);
   fChain->SetBranchAddress("d0ErrorGsfTrack", d0ErrorGsfTrack, &b_d0ErrorGsfTrack);
   fChain->SetBranchAddress("dzGsfTrack", dzGsfTrack, &b_dzGsfTrack);
   fChain->SetBranchAddress("dzErrorGsfTrack", dzErrorGsfTrack, &b_dzErrorGsfTrack);
   fChain->SetBranchAddress("pixelHitsGsfTrack", pixelHitsGsfTrack, &b_pixelHitsGsfTrack);
   fChain->SetBranchAddress("trackerLayersWithMeasurementGsfTrack", trackerLayersWithMeasurementGsfTrack, &b_trackerLayersWithMeasurementGsfTrack);
   fChain->SetBranchAddress("expInnerLayersGsfTrack", expInnerLayersGsfTrack, &b_expInnerLayersGsfTrack);
   fChain->SetBranchAddress("numberOfValidPixelBarrelHitsGsfTrack", numberOfValidPixelBarrelHitsGsfTrack, &b_numberOfValidPixelBarrelHitsGsfTrack);
   fChain->SetBranchAddress("numberOfValidPixelEndcapHitsGsfTrack", numberOfValidPixelEndcapHitsGsfTrack, &b_numberOfValidPixelEndcapHitsGsfTrack);
   fChain->SetBranchAddress("numberOfValidStripTIBHitsGsfTrack", numberOfValidStripTIBHitsGsfTrack, &b_numberOfValidStripTIBHitsGsfTrack);
   fChain->SetBranchAddress("numberOfValidStripTIDHitsGsfTrack", numberOfValidStripTIDHitsGsfTrack, &b_numberOfValidStripTIDHitsGsfTrack);
   fChain->SetBranchAddress("numberOfValidStripTOBHitsGsfTrack", numberOfValidStripTOBHitsGsfTrack, &b_numberOfValidStripTOBHitsGsfTrack);
   fChain->SetBranchAddress("numberOfValidStripTECHitsGsfTrack", numberOfValidStripTECHitsGsfTrack, &b_numberOfValidStripTECHitsGsfTrack);
   fChain->SetBranchAddress("numberOfValidMuonHitsGsfTrack", numberOfValidMuonHitsGsfTrack, &b_numberOfValidMuonHitsGsfTrack);
   fChain->SetBranchAddress("chargeModeGsfTrack", chargeModeGsfTrack, &b_chargeModeGsfTrack);
   fChain->SetBranchAddress("pxModeGsfTrack", pxModeGsfTrack, &b_pxModeGsfTrack);
   fChain->SetBranchAddress("pyModeGsfTrack", pyModeGsfTrack, &b_pyModeGsfTrack);
   fChain->SetBranchAddress("pzModeGsfTrack", pzModeGsfTrack, &b_pzModeGsfTrack);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVxPV", &PVxPV, &b_PVxPV);
   fChain->SetBranchAddress("PVyPV", &PVyPV, &b_PVyPV);
   fChain->SetBranchAddress("PVzPV", &PVzPV, &b_PVzPV);
   fChain->SetBranchAddress("PVErrxPV", &PVErrxPV, &b_PVErrxPV);
   fChain->SetBranchAddress("PVErryPV", &PVErryPV, &b_PVErryPV);
   fChain->SetBranchAddress("PVErrzPV", &PVErrzPV, &b_PVErrzPV);
   fChain->SetBranchAddress("SumPtPV", &SumPtPV, &b_SumPtPV);
   fChain->SetBranchAddress("rhoPV", &rhoPV, &b_rhoPV);
   fChain->SetBranchAddress("ndofPV", &ndofPV, &b_ndofPV);
   fChain->SetBranchAddress("chi2PV", &chi2PV, &b_chi2PV);
   fChain->SetBranchAddress("normChi2PV", &normChi2PV, &b_normChi2PV);
   fChain->SetBranchAddress("pxChMetPV", &pxChMetPV, &b_pxChMetPV);
   fChain->SetBranchAddress("pyChMetPV", &pyChMetPV, &b_pyChMetPV);
   fChain->SetBranchAddress("pzChMetPV", &pzChMetPV, &b_pzChMetPV);
   fChain->SetBranchAddress("isFakePV", &isFakePV, &b_isFakePV);
   fChain->SetBranchAddress("isValidPV", &isValidPV, &b_isValidPV);
   fChain->SetBranchAddress("trackSizePV", &trackSizePV, &b_trackSizePV);
   Notify();
}

Bool_t ntp1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ntp1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ntp1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ntp1_cxx
