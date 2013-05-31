{

  gROOT->Reset();

  std::ofstream ofs("Zee.txt", std::ofstream::out);

  TFile* f = new TFile("sandboxRerecoVecbosNtuple_46_1_HiZ.root", "read");

  //Variables where the read values from the tree will be stored
  int nEle;
  int chargeEle[500];
  float energyEle[500], pxEle[500], pyEle[500], pzEle[500];
  
  TTree* tree = (TTree*)f->Get("ntp1");//Getting the TTree object called ntp1 from the Tfile object
  
  tree->SetBranchStatus("*", 0);//Turn off all branches
  
  //Activate branches that will be read
  tree->SetBranchStatus("nEle", 1);
  tree->SetBranchStatus("chargeEle", 1);
  tree->SetBranchStatus("energyEle", 1);
  tree->SetBranchStatus("pxEle", 1);
  tree->SetBranchStatus("pyEle", 1);
  tree->SetBranchStatus("pzEle", 1);
  
  //Setting Address for Branches that will be read
  tree->SetBranchAddress("nEle", &nEle);
  tree->SetBranchAddress("chargeEle", chargeEle);
  tree->SetBranchAddress("energyEle", energyEle);
  tree->SetBranchAddress("pxEle", pxEle);
  tree->SetBranchAddress("pyEle", pyEle);
  tree->SetBranchAddress("pzEle", pzEle);
  
  
  long Nentries = tree->GetEntries();//Total number of entries in the tree

  for(long i = 0; i < Nentries; i++){//Loop over all entries in the tree
    tree->GetEntry(i);//get a single entry from the tree all the branches activated will be stored in Memory
    for(int j = 0; j < nEle; j++){
      ofs << nEle << " " << chargeEle[j] << " " << energyEle[j] << " " << pxEle[j] << " " << pyEle[j] << " " << pzEle[j] << "\n"; 
    }
  }
 
  ofs.close();
  
}
