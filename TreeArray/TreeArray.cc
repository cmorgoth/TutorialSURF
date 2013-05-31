{
  
  gROOT->Reset();
  
  ifstream myfile ("Zee.txt");
  
  TFile* f = new TFile("treeArray.root","RECREATE");

  TTree* tree = new TTree("tree","Tree Array");

  int nZ;
  int charge[500];
  float EleE[500], ElePx[500], ElePy[500], ElePz[500];
  
  tree->Branch("nZ", &nZ, "nZ/I");
  tree->Branch("charge", charge, "charge[nZ]/I");
  tree->Branch("EleE", EleE, "EleE[nZ]/F");
  tree->Branch("ElePx", ElePx, "ElePx[nZ]/F");
  tree->Branch("ElePy", ElePy, "ElePy[nZ]/F");
  tree->Branch("ElePz", ElePz, "ElePz[nZ]/F");
  
  int ctr = 0;
  
  if( myfile.is_open() ){
    
    while( myfile.good() ){
      
      myfile >> nZ >> charge[ctr] >> EleE[ctr] >> ElePx[ctr] >> ElePy[ctr] >> ElePz[ctr];
      ctr++;
      if( ctr == nZ ){
	tree->Fill();
	ctr = 0;     
      }
      
    }
    
    myfile.close();
    
  }else cout << "Unable to open file"; 
  
  tree->Write("tree");
  f->Close();
}
