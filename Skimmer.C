#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
#include "ClassReadTree.cc"
using namespace std;


void Skimmer(){
 
TFile *fn=new TFile("Skim.root","RECREATE");
TTree *tree =new TTree("SkimmedTree","My SkimmedTree");
Float_t      probe_Ele_et ;
tree->Branch("probe_Ele_et" , & probe_Ele_et );
Float_t      probe_Ele_eta ;
tree->Branch("probe_Ele_eta" , & probe_Ele_eta );
Float_t      probe_Ele_pt ;
tree->Branch("probe_Ele_pt" , & probe_Ele_pt );
Float_t      probe_sc_et ;
tree->Branch("probe_sc_et" , & probe_sc_et );
Float_t      probe_sc_eta ;
tree->Branch("probe_sc_eta" , & probe_sc_eta );
Int_t      passingHEEP ;
tree->Branch("passingHEEP" , & passingHEEP );
Int_t      passingHLT ;
tree->Branch("passingHLT" , & passingHLT );
Float_t      mass ;
tree->Branch("mass" , & mass );
Float_t      pair_mass ;
tree->Branch("pair_mass" , & pair_mass );
	TChain* tr = new TChain("GsfElectronToTrigger/fitter_tree");
		tr->Add("/home/bibhu/Desktop/LQTagandProbe/GenericNtuplePlotter/TnPTree_data.root");
		tr->Add("/home/bibhu/Desktop/LQTagandProbe/GenericNtuplePlotter/TnPTree_data2.root");
		ClassReadTree read(tr);
		for(int iEv=0;iEv < tr->GetEntries();iEv++){
			tr->GetEntry(iEv);
probe_Ele_et  = read. probe_Ele_et ;
probe_Ele_eta  = read. probe_Ele_eta ;
probe_Ele_pt  = read. probe_Ele_pt ;
probe_sc_et  = read. probe_sc_et ;
probe_sc_eta  = read. probe_sc_eta ;
passingHEEP  = read. passingHEEP ;
passingHLT  = read. passingHLT ;
mass  = read. mass ;
pair_mass  = read. pair_mass ;
tree->Fill();
		}


fn->Write();

}
