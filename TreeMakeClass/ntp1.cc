#define ntp1_cxx
#include "ntp1.hh"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TH1F.h>
#include <math.h>

void ntp1::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L ntp1.C
//      Root > ntp1 t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;
   
   fChain->SetBranchStatus("*", 0);
   fChain->SetBranchStatus("nEle", 1);
   fChain->SetBranchStatus("chargeEle", 1);
   fChain->SetBranchStatus("energyEle", 1);
   fChain->SetBranchStatus("pxEle", 1);
   fChain->SetBranchStatus("pyEle", 1);
   fChain->SetBranchStatus("pzEle", 1);
   
   Long64_t nentries = fChain->GetEntriesFast();
   
   Long64_t nbytes = 0, nb = 0;
   
   TH1F* h = new TH1F("h", "Zee Invariant Mass", 100, 60., 120.);
   float InvMass = -99.;
   
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
     Long64_t ientry = LoadTree(jentry);
     if (ientry < 0) break;
     nb = fChain->GetEntry(jentry);
     nbytes += nb;
     
     std::cout << energyEle[0] << "  " << pxEle[0] << "  " << pyEle[0] << "  " << pzEle[0] << std::endl;
     InvMass = sqrt( 2*( pow(0.000511,2) + energyEle[0]*energyEle[1] - pxEle[0]*pxEle[1] - pyEle[0]*pyEle[1] - pzEle[0]*pzEle[1] ) );
     
     //std::cout << InvMass << std::endl;
     
     if(nEle == 2 && (InvMass > 60. && InvMass < 120.) )h->Fill(InvMass);
     
     // if (Cut(ientry) < 0) continue;
   }
   
   TFile* f = new TFile("ZeeHistoFile.root", "recreate");
   h->Write();
   f->Close();
   
}
