#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
using namespace std;

class ClassReadTree {

public :

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   Int_t           fCurrent; //!current Tree number in a TChain



   // Declaration of leaf types

   Float_t         probe_Ele_3charge;

   Float_t         probe_Ele_abseta;

   Float_t         probe_Ele_chIso;

   Float_t         probe_Ele_dEtaIn;

   Float_t         probe_Ele_dEtaSeed;

   Float_t         probe_Ele_dPhiIn;

   Float_t         probe_Ele_dr03TkSumPt;

   Float_t         probe_Ele_e;

   Float_t         probe_Ele_e1x5;

   Float_t         probe_Ele_e2x5;

   Float_t         probe_Ele_e5x5;

   Float_t         probe_Ele_ecalIso;

   Float_t         probe_Ele_et;

   Float_t         probe_Ele_eta;

   Float_t         probe_Ele_hcalIso;

   Float_t         probe_Ele_hoe;

   Float_t         probe_Ele_neuIso;

   Float_t         probe_Ele_ooemoop;

   Float_t         probe_Ele_phoIso;

   Float_t         probe_Ele_pt;

   Float_t         probe_Ele_q;

   Float_t         probe_Ele_r9;

   Float_t         probe_Ele_r9_5x5;

   Float_t         probe_Ele_sieie;

   Float_t         probe_Ele_sieie_5x5;

   Float_t         probe_Ele_trkIso;

   Float_t         probe_Ele_trkPt;

   Float_t         probe_sc_abseta;

   Float_t         probe_sc_energy;

   Float_t         probe_sc_et;

   Float_t         probe_sc_eta;

   Float_t         probe_sc_etaW;

   Float_t         probe_sc_phi;

   Float_t         probe_sc_phiW;

   Float_t         probe_sc_preshowerE;

   Float_t         probe_sc_rawE;

   Float_t         probe_Ele_chisq;

   Float_t         probe_Ele_dxy;

   Float_t         probe_Ele_dz;

   Float_t         probe_Ele_hzzMVA80X;

   Float_t         probe_Ele_mHits;

   Float_t         probe_Ele_nonTrigMVA;

   Float_t         probe_Ele_nonTrigMVA80X;

   Float_t         probe_Ele_trigMVA;

   Int_t           passingHEEP;

   Int_t           passingHLT;

   Int_t           passingLoose;

   Int_t           passingMedium;

   Int_t           passingTight;

   UInt_t          run;

   UInt_t          lumi;

   ULong64_t       event;

   Int_t           truePU;

   Float_t         event_PrimaryVertex_x;

   Float_t         event_PrimaryVertex_y;

   Float_t         event_PrimaryVertex_z;

   Int_t           event_nPV;

   Float_t         event_BeamSpot_x;

   Float_t         event_BeamSpot_y;

   Float_t         event_BeamSpot_z;

   Float_t         event_met_pfmet;

   Float_t         event_met_pfsumet;

   Float_t         event_met_pfphi;

   Float_t         event_rho;

   Float_t         mass;

   Float_t         tag_Ele_abseta;

   Float_t         tag_Ele_e;

   Float_t         tag_Ele_et;

   Float_t         tag_Ele_eta;

   Float_t         tag_Ele_phi;

   Float_t         tag_Ele_pt;

   Float_t         tag_Ele_q;

   Float_t         tag_sc_abseta;

   Float_t         tag_sc_energy;

   Float_t         tag_sc_et;

   Float_t         tag_sc_eta;

   Float_t         tag_Ele_dxy;

   Float_t         tag_Ele_dz;

   Float_t         tag_Ele_mHits;

   Float_t         tag_Ele_nonTrigMVA;

   Float_t         tag_Ele_trigMVA;

   Float_t         pair_abseta;

   Float_t         pair_eta;

   Float_t         pair_mass;

   Float_t         pair_pt;

   Int_t           pair_mass60to120;



   // List of branches

   TBranch        *b_probe_Ele_3charge;   //!

   TBranch        *b_probe_Ele_abseta;   //!

   TBranch        *b_probe_Ele_chIso;   //!

   TBranch        *b_probe_Ele_dEtaIn;   //!

   TBranch        *b_probe_Ele_dEtaSeed;   //!

   TBranch        *b_probe_Ele_dPhiIn;   //!

   TBranch        *b_probe_Ele_dr03TkSumPt;   //!

   TBranch        *b_probe_Ele_e;   //!

   TBranch        *b_probe_Ele_e1x5;   //!

   TBranch        *b_probe_Ele_e2x5;   //!

   TBranch        *b_probe_Ele_e5x5;   //!

   TBranch        *b_probe_Ele_ecalIso;   //!

   TBranch        *b_probe_Ele_et;   //!

   TBranch        *b_probe_Ele_eta;   //!

   TBranch        *b_probe_Ele_hcalIso;   //!

   TBranch        *b_probe_Ele_hoe;   //!

   TBranch        *b_probe_Ele_neuIso;   //!

   TBranch        *b_probe_Ele_ooemoop;   //!

   TBranch        *b_probe_Ele_phoIso;   //!

   TBranch        *b_probe_Ele_pt;   //!

   TBranch        *b_probe_Ele_q;   //!

   TBranch        *b_probe_Ele_r9;   //!

   TBranch        *b_probe_Ele_r9_5x5;   //!

   TBranch        *b_probe_Ele_sieie;   //!

   TBranch        *b_probe_Ele_sieie_5x5;   //!

   TBranch        *b_probe_Ele_trkIso;   //!

   TBranch        *b_probe_Ele_trkPt;   //!

   TBranch        *b_probe_sc_abseta;   //!

   TBranch        *b_probe_sc_energy;   //!

   TBranch        *b_probe_sc_et;   //!

   TBranch        *b_probe_sc_eta;   //!

   TBranch        *b_probe_sc_etaW;   //!

   TBranch        *b_probe_sc_phi;   //!

   TBranch        *b_probe_sc_phiW;   //!

   TBranch        *b_probe_sc_preshowerE;   //!

   TBranch        *b_probe_sc_rawE;   //!

   TBranch        *b_probe_Ele_chisq;   //!

   TBranch        *b_probe_Ele_dxy;   //!

   TBranch        *b_probe_Ele_dz;   //!

   TBranch        *b_probe_Ele_hzzMVA80X;   //!

   TBranch        *b_probe_Ele_mHits;   //!

   TBranch        *b_probe_Ele_nonTrigMVA;   //!

   TBranch        *b_probe_Ele_nonTrigMVA80X;   //!

   TBranch        *b_probe_Ele_trigMVA;   //!

   TBranch        *b_passingHEEP;   //!

   TBranch        *b_passingHLT;   //!

   TBranch        *b_passingLoose;   //!

   TBranch        *b_passingMedium;   //!

   TBranch        *b_passingTight;   //!

   TBranch        *b_run;   //!

   TBranch        *b_lumi;   //!

   TBranch        *b_event;   //!

   TBranch        *b_truePU;   //!

   TBranch        *b_mPVx;   //!

   TBranch        *b_mPVy;   //!

   TBranch        *b_mPVz;   //!

   TBranch        *b_mNPV;   //!

   TBranch        *b_mBSx;   //!

   TBranch        *b_mBSy;   //!

   TBranch        *b_mBSz;   //!

   TBranch        *b_mpfMET;   //!

   TBranch        *b_mpfSumET;   //!

   TBranch        *b_mpfPhi;   //!

   TBranch        *b_rho;   //!

   TBranch        *b_mass;   //!

   TBranch        *b_tag_Ele_abseta;   //!

   TBranch        *b_tag_Ele_e;   //!

   TBranch        *b_tag_Ele_et;   //!

   TBranch        *b_tag_Ele_eta;   //!

   TBranch        *b_tag_Ele_phi;   //!

   TBranch        *b_tag_Ele_pt;   //!

   TBranch        *b_tag_Ele_q;   //!

   TBranch        *b_tag_sc_abseta;   //!

   TBranch        *b_tag_sc_energy;   //!

   TBranch        *b_tag_sc_et;   //!

   TBranch        *b_tag_sc_eta;   //!

   TBranch        *b_tag_Ele_dxy;   //!

   TBranch        *b_tag_Ele_dz;   //!

   TBranch        *b_tag_Ele_mHits;   //!

   TBranch        *b_tag_Ele_nonTrigMVA;   //!

   TBranch        *b_tag_Ele_trigMVA;   //!

   TBranch        *b_pair_abseta;   //!

   TBranch        *b_pair_eta;   //!

   TBranch        *b_pair_mass;   //!

   TBranch        *b_pair_pt;   //!

   TBranch        *b_pair_mass60to120;   //!



   ClassReadTree(TTree *tree);

   virtual ~ClassReadTree();

   

   

   

   virtual void     Init(TTree *tree);

   

   

   

};

ClassReadTree::~ClassReadTree()

{

   if (!fChain) return;

   delete fChain->GetCurrentFile();

}

void ClassReadTree::Init(TTree *tree)

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



   fChain->SetBranchAddress("probe_Ele_3charge", &probe_Ele_3charge, &b_probe_Ele_3charge);

   fChain->SetBranchAddress("probe_Ele_abseta", &probe_Ele_abseta, &b_probe_Ele_abseta);

   fChain->SetBranchAddress("probe_Ele_chIso", &probe_Ele_chIso, &b_probe_Ele_chIso);

   fChain->SetBranchAddress("probe_Ele_dEtaIn", &probe_Ele_dEtaIn, &b_probe_Ele_dEtaIn);

   fChain->SetBranchAddress("probe_Ele_dEtaSeed", &probe_Ele_dEtaSeed, &b_probe_Ele_dEtaSeed);

   fChain->SetBranchAddress("probe_Ele_dPhiIn", &probe_Ele_dPhiIn, &b_probe_Ele_dPhiIn);

   fChain->SetBranchAddress("probe_Ele_dr03TkSumPt", &probe_Ele_dr03TkSumPt, &b_probe_Ele_dr03TkSumPt);

   fChain->SetBranchAddress("probe_Ele_e", &probe_Ele_e, &b_probe_Ele_e);

   fChain->SetBranchAddress("probe_Ele_e1x5", &probe_Ele_e1x5, &b_probe_Ele_e1x5);

   fChain->SetBranchAddress("probe_Ele_e2x5", &probe_Ele_e2x5, &b_probe_Ele_e2x5);

   fChain->SetBranchAddress("probe_Ele_e5x5", &probe_Ele_e5x5, &b_probe_Ele_e5x5);

   fChain->SetBranchAddress("probe_Ele_ecalIso", &probe_Ele_ecalIso, &b_probe_Ele_ecalIso);

   fChain->SetBranchAddress("probe_Ele_et", &probe_Ele_et, &b_probe_Ele_et);

   fChain->SetBranchAddress("probe_Ele_eta", &probe_Ele_eta, &b_probe_Ele_eta);

   fChain->SetBranchAddress("probe_Ele_hcalIso", &probe_Ele_hcalIso, &b_probe_Ele_hcalIso);

   fChain->SetBranchAddress("probe_Ele_hoe", &probe_Ele_hoe, &b_probe_Ele_hoe);

   fChain->SetBranchAddress("probe_Ele_neuIso", &probe_Ele_neuIso, &b_probe_Ele_neuIso);

   fChain->SetBranchAddress("probe_Ele_ooemoop", &probe_Ele_ooemoop, &b_probe_Ele_ooemoop);

   fChain->SetBranchAddress("probe_Ele_phoIso", &probe_Ele_phoIso, &b_probe_Ele_phoIso);

   fChain->SetBranchAddress("probe_Ele_pt", &probe_Ele_pt, &b_probe_Ele_pt);

   fChain->SetBranchAddress("probe_Ele_q", &probe_Ele_q, &b_probe_Ele_q);

   fChain->SetBranchAddress("probe_Ele_r9", &probe_Ele_r9, &b_probe_Ele_r9);

   fChain->SetBranchAddress("probe_Ele_r9_5x5", &probe_Ele_r9_5x5, &b_probe_Ele_r9_5x5);

   fChain->SetBranchAddress("probe_Ele_sieie", &probe_Ele_sieie, &b_probe_Ele_sieie);

   fChain->SetBranchAddress("probe_Ele_sieie_5x5", &probe_Ele_sieie_5x5, &b_probe_Ele_sieie_5x5);

   fChain->SetBranchAddress("probe_Ele_trkIso", &probe_Ele_trkIso, &b_probe_Ele_trkIso);

   fChain->SetBranchAddress("probe_Ele_trkPt", &probe_Ele_trkPt, &b_probe_Ele_trkPt);

   fChain->SetBranchAddress("probe_sc_abseta", &probe_sc_abseta, &b_probe_sc_abseta);

   fChain->SetBranchAddress("probe_sc_energy", &probe_sc_energy, &b_probe_sc_energy);

   fChain->SetBranchAddress("probe_sc_et", &probe_sc_et, &b_probe_sc_et);

   fChain->SetBranchAddress("probe_sc_eta", &probe_sc_eta, &b_probe_sc_eta);

   fChain->SetBranchAddress("probe_sc_etaW", &probe_sc_etaW, &b_probe_sc_etaW);

   fChain->SetBranchAddress("probe_sc_phi", &probe_sc_phi, &b_probe_sc_phi);

   fChain->SetBranchAddress("probe_sc_phiW", &probe_sc_phiW, &b_probe_sc_phiW);

   fChain->SetBranchAddress("probe_sc_preshowerE", &probe_sc_preshowerE, &b_probe_sc_preshowerE);

   fChain->SetBranchAddress("probe_sc_rawE", &probe_sc_rawE, &b_probe_sc_rawE);

   fChain->SetBranchAddress("probe_Ele_chisq", &probe_Ele_chisq, &b_probe_Ele_chisq);

   fChain->SetBranchAddress("probe_Ele_dxy", &probe_Ele_dxy, &b_probe_Ele_dxy);

   fChain->SetBranchAddress("probe_Ele_dz", &probe_Ele_dz, &b_probe_Ele_dz);

   fChain->SetBranchAddress("probe_Ele_hzzMVA80X", &probe_Ele_hzzMVA80X, &b_probe_Ele_hzzMVA80X);

   fChain->SetBranchAddress("probe_Ele_mHits", &probe_Ele_mHits, &b_probe_Ele_mHits);

   fChain->SetBranchAddress("probe_Ele_nonTrigMVA", &probe_Ele_nonTrigMVA, &b_probe_Ele_nonTrigMVA);

   fChain->SetBranchAddress("probe_Ele_nonTrigMVA80X", &probe_Ele_nonTrigMVA80X, &b_probe_Ele_nonTrigMVA80X);

   fChain->SetBranchAddress("probe_Ele_trigMVA", &probe_Ele_trigMVA, &b_probe_Ele_trigMVA);

   fChain->SetBranchAddress("passingHEEP", &passingHEEP, &b_passingHEEP);

   fChain->SetBranchAddress("passingHLT", &passingHLT, &b_passingHLT);

   fChain->SetBranchAddress("passingLoose", &passingLoose, &b_passingLoose);

   fChain->SetBranchAddress("passingMedium", &passingMedium, &b_passingMedium);

   fChain->SetBranchAddress("passingTight", &passingTight, &b_passingTight);

   fChain->SetBranchAddress("run", &run, &b_run);

   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);

   fChain->SetBranchAddress("event", &event, &b_event);

   fChain->SetBranchAddress("truePU", &truePU, &b_truePU);

   fChain->SetBranchAddress("event_PrimaryVertex_x", &event_PrimaryVertex_x, &b_mPVx);

   fChain->SetBranchAddress("event_PrimaryVertex_y", &event_PrimaryVertex_y, &b_mPVy);

   fChain->SetBranchAddress("event_PrimaryVertex_z", &event_PrimaryVertex_z, &b_mPVz);

   fChain->SetBranchAddress("event_nPV", &event_nPV, &b_mNPV);

   fChain->SetBranchAddress("event_BeamSpot_x", &event_BeamSpot_x, &b_mBSx);

   fChain->SetBranchAddress("event_BeamSpot_y", &event_BeamSpot_y, &b_mBSy);

   fChain->SetBranchAddress("event_BeamSpot_z", &event_BeamSpot_z, &b_mBSz);

   fChain->SetBranchAddress("event_met_pfmet", &event_met_pfmet, &b_mpfMET);

   fChain->SetBranchAddress("event_met_pfsumet", &event_met_pfsumet, &b_mpfSumET);

   fChain->SetBranchAddress("event_met_pfphi", &event_met_pfphi, &b_mpfPhi);

   fChain->SetBranchAddress("event_rho", &event_rho, &b_rho);

   fChain->SetBranchAddress("mass", &mass, &b_mass);

   fChain->SetBranchAddress("tag_Ele_abseta", &tag_Ele_abseta, &b_tag_Ele_abseta);

   fChain->SetBranchAddress("tag_Ele_e", &tag_Ele_e, &b_tag_Ele_e);

   fChain->SetBranchAddress("tag_Ele_et", &tag_Ele_et, &b_tag_Ele_et);

   fChain->SetBranchAddress("tag_Ele_eta", &tag_Ele_eta, &b_tag_Ele_eta);

   fChain->SetBranchAddress("tag_Ele_phi", &tag_Ele_phi, &b_tag_Ele_phi);

   fChain->SetBranchAddress("tag_Ele_pt", &tag_Ele_pt, &b_tag_Ele_pt);

   fChain->SetBranchAddress("tag_Ele_q", &tag_Ele_q, &b_tag_Ele_q);

   fChain->SetBranchAddress("tag_sc_abseta", &tag_sc_abseta, &b_tag_sc_abseta);

   fChain->SetBranchAddress("tag_sc_energy", &tag_sc_energy, &b_tag_sc_energy);

   fChain->SetBranchAddress("tag_sc_et", &tag_sc_et, &b_tag_sc_et);

   fChain->SetBranchAddress("tag_sc_eta", &tag_sc_eta, &b_tag_sc_eta);

   fChain->SetBranchAddress("tag_Ele_dxy", &tag_Ele_dxy, &b_tag_Ele_dxy);

   fChain->SetBranchAddress("tag_Ele_dz", &tag_Ele_dz, &b_tag_Ele_dz);

   fChain->SetBranchAddress("tag_Ele_mHits", &tag_Ele_mHits, &b_tag_Ele_mHits);

   fChain->SetBranchAddress("tag_Ele_nonTrigMVA", &tag_Ele_nonTrigMVA, &b_tag_Ele_nonTrigMVA);

   fChain->SetBranchAddress("tag_Ele_trigMVA", &tag_Ele_trigMVA, &b_tag_Ele_trigMVA);

   fChain->SetBranchAddress("pair_abseta", &pair_abseta, &b_pair_abseta);

   fChain->SetBranchAddress("pair_eta", &pair_eta, &b_pair_eta);

   fChain->SetBranchAddress("pair_mass", &pair_mass, &b_pair_mass);

   fChain->SetBranchAddress("pair_pt", &pair_pt, &b_pair_pt);

   fChain->SetBranchAddress("pair_mass60to120", &pair_mass60to120, &b_pair_mass60to120);

   

}

ClassReadTree::ClassReadTree(TTree *tree)
{
	Init(tree);
}